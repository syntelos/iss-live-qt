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

#include "HTTPStreamClient.h"

HTTPStreamClient::HTTPStreamClient(QObject* p)
    : QTcpSocket(p)
{
}
HTTPStreamClient::~HTTPStreamClient()
{
}
QString HTTPStreamClient::peerName() const {

    return QTcpSocket::peerName();
}
quint16 HTTPStreamClient::peerPort() const {

    return QTcpSocket::peerPort();
}
HTTPStreamResponse* HTTPStreamClient::send(HTTPStreamRequest& q){
    if (isOpen() && q.isValid()){

        q.write(this);

        HTTPStreamResponse* p = new HTTPStreamResponse();

        p->read(this);

        return p;
    }
    else {
        return 0;
    }
}
HTTPStreamResponse* HTTPStreamClient::send(HTTPStreamRequest* q){
    if (isOpen() && 0 != q && q->isValid()){

        q->write(this);

        HTTPStreamResponse* p = new HTTPStreamResponse();

        p->read(this);

        return p;
    }
    else {
        return 0;
    }
}
