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

#include "ISSLClient.h"

ISSLClient::ISSLClient(QObject* p)
    : QObject(p), 
      net(new HTTPStreamClient(this)),  
      session(new ISSLClientSession(net)),
      ctrl(new ISSLClientCatalog(net,session)),
      bind(new ISSLClientData(net,session)),
      printing(true)
{
}
ISSLClient::~ISSLClient()
{
    net = 0;
    session = 0;
    ctrl = 0;
    bind = 0;
}
HTTPStreamClient* ISSLClient::getClient() const {

    return net;
}
ISSLClientSession* ISSLClient::getSession() const {

    return session;
}
ISSLClientCatalog* ISSLClient::getCatalog() const {

    return ctrl;
}
ISSLClientData* ISSLClient::getBind() const {

    return bind;
}
bool ISSLClient::isPrinting() const {

    return printing;
}
void ISSLClient::enablePrinting(){

    printing = true;
}
void ISSLClient::disablePrinting(){

    printing = false;
}
void ISSLClient::connect(){

    if (printing){

        QObject::connect(net,SIGNAL(error(QAbstractSocket::SocketError)),net,SLOT(printSocketError(QAbstractSocket::SocketError)));
    }

    QObject::connect(net,SIGNAL(connected()),session,SLOT(io()));

    QObject::connect(session,SIGNAL(success()),ctrl,SLOT(io()));

    QObject::connect(ctrl,SIGNAL(success()),bind,SLOT(io()));

    if (printing){

        QObject::connect(bind,SIGNAL(received(const QList<ISSLClientDataChunkPair>&)),bind,SLOT(print(const QList<ISSLClientDataChunkPair>&)));

        QObject::connect(bind,SIGNAL(los()),bind,SLOT(printLOS()));

        QObject::connect(bind,SIGNAL(aos()),bind,SLOT(printAOS()));
    }

    QObject::connect(bind,SIGNAL(eol()),this,SLOT(reconnect()));

    emit connected(this);
}
void ISSLClient::open(){

    net->connectToHost(ISSLClientIO::HOST,ISSLClientIO::PORT);

    emit opened(this);
}
void ISSLClient::disconnect(){

    if (printing){

        QObject::disconnect(net,SIGNAL(error(QAbstractSocket::SocketError)),net,SLOT(printSocketError(QAbstractSocket::SocketError)));
    }

    QObject::disconnect(net,SIGNAL(connected()),session,SLOT(io()));

    QObject::disconnect(session,SIGNAL(success()),ctrl,SLOT(io()));

    QObject::disconnect(ctrl,SIGNAL(success()),bind,SLOT(io()));


    QObject::disconnect(bind,SIGNAL(received(const QList<ISSLClientDataChunkPair>&)),bind,SLOT(print(const QList<ISSLClientDataChunkPair>&)));

    QObject::disconnect(bind,SIGNAL(los()),bind,SLOT(printLOS()));

    QObject::disconnect(bind,SIGNAL(aos()),bind,SLOT(printAOS()));

    QObject::disconnect(bind,SIGNAL(eol()),this,SLOT(reconnect()));

    emit disconnected(this);
}
void ISSLClient::close(){

    net->close();

    emit closed(this);
}
void ISSLClient::reconnect(){

    disconnect();

    close();

    net->deleteLater();

    net = new HTTPStreamClient(this);
    session = new ISSLClientSession(net);
    ctrl = new ISSLClientCatalog(net,session);
    bind = new ISSLClientData(net,session);

    connect();

    open();

    emit reconnected(this);
}
