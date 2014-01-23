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

#include "ISSLClientSession.h"

ISSLClientSession::ISSLClientSession(HTTPStreamClient* n)
    : net(n), rep(0), 
      qbody("LS_phase=7901&LS_domain=nasa.gov&LS_polling=true&LS_polling_millis=0&LS_idle_millis=0&LS_client_version=5.0&LS_adapter_set=PROXYTELEMETRY&"), 
      path("/lightstreamer/create_session.js"),
      session()
{
}
ISSLClientSession::~ISSLClientSession()
{
    net = 0;
    if (0 != rep){
        delete rep;
        rep = 0;
    }
}
void ISSLClientSession::io(){
    // qDebug() << "ISSLClientSession.io";

    HTTPStreamRequest req;
    req.path.setValue(path);
    req.setContentType(FORM);
    req.setHeader(CONN,CONN_KEAL);
    req.setHeader(USER,USER_AGENT);
    req.setData(qbody);

    // qDebug() << "ISSLClientSession.io [send]";
    rep = net->send(req);

    if (rep && rep->isOk()){
        // qDebug() << "ISSLClientSession.io [ready]";
        ready();
    }
    else {
        // qDebug() << "ISSLClientSession.io [error]";
        error();
    }
}
void ISSLClientSession::ready(){
    int status = rep->status.toInt();
    QString msg = rep->message.toString();

    // qDebug() << "ISSLClientSession.ready HTTP" << status << msg;

    int len = rep->getContentLength();
    if (0 < len){
        QByteArray& pbody = rep->buffer();
        int parse = pbody.indexOf("start('");
        if (0 < parse){
            QByteArray p0 = pbody.mid(parse+7);
            parse = p0.indexOf("'");
            if (0 < parse){
                QByteArray p1 = p0.mid(0,parse);
                this->session += p1;

                // qDebug() << "ISSLClientSession [success]:" << this->session;

                emit success();
            }
            else {
                // qDebug() << "ISSLClientSession [failure]: missing start (parse end) in:" << pbody;

                emit failure();
            }
        }
        else {
            // qDebug() << "ISSLClientSession [failure]: missing start (parse begin) in:" << pbody;

            emit failure();
        }
    }
    else {
        // qDebug() << "ISSLClientSession [failure]: content length" << len;

        emit failure();
    }
}
void ISSLClientSession::error(){

    if (0 != rep){
        int status = rep->status.toInt();
        QString msg = rep->message.toString();

        delete rep;
        rep = 0;

        // qDebug() << "ISSLClientSession.error: HTTP" << status << msg;
    }
    else {
        // qDebug() << "ISSLClientSession.error";
    }

    emit failure();
}
