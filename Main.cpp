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
#include <QApplication>
#include <QObject>
#include <QTextStream>

#include "HTTPStreamClient.h"
#include "ISSLClientSession.h"
#include "ISSLClientCatalog.h"
#include "ISSLClientData.h"

static QTextStream sout(stdout);
static QTextStream serr(stderr);

int main(int argc, char** argv){
    QCoreApplication::setOrganizationName("syntelos");
    QCoreApplication::setOrganizationDomain("syntelos.com");
    QCoreApplication::setApplicationName("iss-live");

    QApplication a(argc, argv);

    HTTPStreamClient* net = new HTTPStreamClient();

    QObject::connect(net,SIGNAL(error(QAbstractSocket::SocketError)),net,SLOT(printSocketError(QAbstractSocket::SocketError)));
    QObject::connect(net,SIGNAL(error(QAbstractSocket::SocketError)),&a,SLOT(quit()));

    ISSLClientSession* session = new ISSLClientSession(net);
    ISSLClientCatalog* ctrl = new ISSLClientCatalog(net,session);
    ISSLClientData* bind = new ISSLClientData(net,session);

    QObject::connect(net,SIGNAL(connected()),session,SLOT(io()));

    QObject::connect(session,SIGNAL(success()),ctrl,SLOT(io()));

    QObject::connect(ctrl,SIGNAL(success()),bind,SLOT(io()));


    QObject::connect(session,SIGNAL(failure()),&a,SLOT(quit()));

    QObject::connect(ctrl,SIGNAL(failure()),&a,SLOT(quit()));

    QObject::connect(bind,SIGNAL(failure()),&a,SLOT(quit()));


    net->connectToHost(ISSLClient::HOST,ISSLClient::PORT);

    return a.exec();
}
