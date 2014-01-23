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
#include <iostream>
#include <QDebug>
#include <QTextStream>

#include "ISSLClientData.h"


ISSLClientData::ISSLClientData(HTTPStreamClient* n, ISSLClientSession* s)
    : net(n), session(s), rep(0), qbody(), path("/lightstreamer/bind_session.js"), blos(true)
{
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
    return (!blos);
}
bool ISSLClientData::hasNotSignal(){
    return blos;
}
void ISSLClientData::io(){
    qbody.clear();
    qbody += "LS_session=";
    qbody += session->session;
    qbody += "&LS_phase=7903&LS_domain=nasa.gov&";

    // qDebug() << "ISSLClientData.io [body]" << qbody;

    HTTPStreamRequest req;
    req.path.setValue(path);
    req.setContentType(FORM);
    req.setHeader(CONN,CONN_KEAL);
    req.setHeader(USER,USER_AGENT);
    req.setData(qbody);

    rep = net->send(req);

    if (rep && rep->isOk()){
        // qDebug() << "ISSLClientData.io [ready]";
        ready();
    }
    else {
        // qDebug() << "ISSLClientData.io [error]";
        error();
    }
}
void ISSLClientData::ready(){
    int status = rep->status.toInt();
    QString msg = rep->message.toString();

    // qDebug() << "ISSLClientData.ready: HTTP" << status << msg;

    int initialization = 0;

    while (true){

        HTTPStreamChunk chunk;
        {
            chunk.read(net);
        }
        ISSLClientDataChunk data(chunk);

        if (0 < data.size()){
            initialization = 0;
            if (blos){
                blos = false;

                emit aos();
            }

            emit received(data);
        }
        else if (data.input.startsWith("p();"))
        {
            if (!blos){
                blos = true;

                emit los();
            }
        }
        else if (data.input.startsWith("loop(0);"))
        {
            delete rep;
            rep = 0;

            emit eol();
            return;
        }
        else if (data.input.startsWith("var ") ||
                 data.input.startsWith("c("))
        {
            if (5 < initialization){

                delete rep;
                rep = 0;

                emit failure();

                return;
            }
            else {
                initialization++;
            }
        }
        else {

            // qDebug() << "ISSLClientData.ready [failure]: " << data.input;

            delete rep;
            rep = 0;

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

        // qDebug() << "ISSLClientData.error: HTTP" << status << msg;
    }
    else {
        // qDebug() << "ISSLClientData.error: HTTP";
    }

    emit failure();
}
void ISSLClientData::print(const QList<ISSLClientDataChunkPair>& list){
    const int count = list.size();
    int cc;
    QTextStream out(stdout);

    for(cc = 0; cc < count; cc++){

        const ISSLClientDataChunkPair& pair = list.at(cc);

        if (0 < cc){
            out << ' ';
        }
        out << pair.name.constData();
        out << "=";
        out << pair.value.constData();
    }

    out << endl;
}
void ISSLClientData::printLOS(){

    QTextStream out(stdout);

    out << "LOS" << endl;
}
void ISSLClientData::printAOS(){

    QTextStream out(stdout);

    out << "AOS" << endl;
}
