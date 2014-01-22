/*
 * ISS Live Qt
 * Copyright (C) 2014, John Pritchard, Syntelos
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * (LGPL and GPL) as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL
 * and GPL for more details.
 *
 * You should have received a copy of the LGPL and GPL along with this
 * program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <QDebug>

#include "ISSLClientData.h"
#include "ISSLClientDataChunk.h"

ISSLClientData::ISSLClientData(HTTPStreamClient* n, ISSLClientSession* s)
    : net(n), rep(0), qbody(), path("/lightstreamer/bind_session.js"), los(true)
{
    qbody += "LS_session=";
    qbody += s->session;
    qbody += "&LS_phase=7903&LS_domain=nasa.gov&";
}
ISSLClientData::~ISSLClientData()
{
    net = 0;
    if (0 != rep){
        delete rep;
        rep = 0;
    }
}
bool ISSLClientData::hasSignal(){
    return (!los);
}
bool ISSLClientData::hasNotSignal(){
    return los;
}
void ISSLClientData::io(){
    qDebug() << "ISSLClientData.io";

    HTTPStreamRequest req;
    req.path.setValue(path);
    req.setContentType(FORM);
    req.setHeader(CONN,CONN_KEAL);
    req.setHeader(USER,USER_AGENT);
    req.setData(qbody);

    rep = net->send(req);

    if (rep && rep->isOk()){
        qDebug() << "ISSLClientData.io [ready]";
        ready();
    }
    else {
        qDebug() << "ISSLClientData.io [error]";
        error();
    }
}
void ISSLClientData::ready(){
    int status = rep->status.toInt();
    QString msg = rep->message.toString();

    qDebug() << "ISSLClientData.ready: HTTP" << status << msg;

    int initialization = 0;

    while (true){

        ISSLClientDataChunk data(rep);
        if (0 < data.size()){
            initialization = 0;
            los = false;

            foreach (ISSLClientDataChunkPair pair, data){

                qDebug().nospace() << pair.name.constData() << "=" << pair.value.constData();
            }

            // (emit received)
        }
        else if (data.input.startsWith("p();"))
        {
            los = true;
            qDebug() << "LOS";
        }
        else if (data.input.startsWith("loop(0);"))
        {
            delete rep;
            rep = 0;

            qDebug() << "ISSLClientData.ready [failure]: EOL";

            emit failure();

            return;
        }
        else if (data.input.startsWith("var ") ||
                 data.input.startsWith("c("))
        {
            if (5 < initialization){

                delete rep;
                rep = 0;

                qDebug() << "ISSLClientData.ready [failure]: INIT";

                emit failure();

                return;
            }
            else {
                initialization++;
            }
        }
        else {

            delete rep;
            rep = 0;

            qDebug() << "ISSLClientData.ready [failure]: ?";

            emit failure();

            return;
        }
    }
}
void ISSLClientData::error(){

    if (0 != rep){
        int status = rep->status.toInt();
        QString msg = rep->message.toString();

        delete rep;
        rep = 0;

        qDebug() << "ISSLClientData.error: HTTP" << status << msg;
    }
    else {
        qDebug() << "ISSLClientData.error: HTTP";
    }

    emit failure();
}

