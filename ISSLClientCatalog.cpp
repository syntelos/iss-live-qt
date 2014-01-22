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

#include "ISSLClientCatalog.h"

ISSLClientCatalog::ISSLClientCatalog(HTTPStreamClient* n, ISSLClientSession* s)
    : net(n), rep(0), qbody(), path("/lightstreamer/control.js")
{
    qbody += "LS_session=";
    qbody += s->session;
    qbody += "&LS_table=2&LS_win_phase=49&LS_req_phase=172&LS_op=add&LS_mode=MERGE&LS_id=ISPWebItem&LS_schema=";
    qbody += "TIME_000001%20TIME_000002";
    qbody += "&LS_snapshot=true&LS_unique=1&";
}
ISSLClientCatalog::~ISSLClientCatalog()
{
    net = 0;
    if (0 != rep){
        delete rep;
        rep = 0;
    }
}
void ISSLClientCatalog::io(){
    qDebug() << "ISSLClientCatalog.io";

    HTTPStreamRequest req;
    req.path.setValue(path);
    req.setContentType(FORM);
    req.setHeader(CONN,CONN_KEAL);
    req.setHeader(USER,USER_AGENT);
    req.setData(qbody);

    rep = net->send(req);
    if (rep && rep->isOk()){
        qDebug() << "ISSLClientCatalog.io [ready]";
        ready();
    }
    else {
        qDebug() << "ISSLClientCatalog.io [error]";
        error();
    }
}
void ISSLClientCatalog::ready(){
    int status = rep->status.toInt();
    QString msg = rep->message.toString();

    qDebug() << "ISSLClientCatalog.ready: HTTP" << status << msg;

    uint len = rep->getContentLength();
    if (0 < len){
        qDebug() << "ISSLClientCatalog [success]: missing content length";

        emit success();
    }
    else {
        qDebug() << "ISSLClientCatalog [failure]: missing content length";

        emit failure();
    }
}
void ISSLClientCatalog::error(){

    if (0 != rep){
        int status = rep->status.toInt();
        QString msg = rep->message.toString();

        delete rep;
        rep = 0;

        qDebug() << "ISSLClientCatalog.error: HTTP" << status << msg;
    }
    else {
        qDebug() << "ISSLClientCatalog.error: HTTP";
    }

    emit failure();
}
