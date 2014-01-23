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

#include "HTTPStreamClient.h"

HTTPStreamClient::HTTPStreamClient(QObject* p)
    : QTcpSocket(p)
{
}
HTTPStreamClient::~HTTPStreamClient()
{
}
bool HTTPStreamClient::isOpen(){

    return QTcpSocket::isOpen();
}
bool HTTPStreamClient::waitForReadyRead(){

    return (QTcpSocket::isOpen() && QTcpSocket::waitForReadyRead());
}
QByteArray HTTPStreamClient::readLine(){

    return QTcpSocket::readLine();
}
QByteArray HTTPStreamClient::read(qint64 len){

    return QTcpSocket::read(len);
}
QString HTTPStreamClient::peerName() const {

    return QTcpSocket::peerName();
}
quint16 HTTPStreamClient::peerPort() const {

    return QTcpSocket::peerPort();
}
void HTTPStreamClient::write(const QByteArray& buf){

    QTcpSocket::write(buf);
}
void HTTPStreamClient::write(const char* string){

    QTcpSocket::write(string);
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

        qDebug() << "HTTPStreamClient.send [write]";

        q->write(this);

        qDebug() << "HTTPStreamClient.send [p]";

        HTTPStreamResponse* p = new HTTPStreamResponse();

        // qDebug() << "HTTPStreamClient.send [read]";

        p->read(this);

        return p;
    }
    else {
        return 0;
    }
}
void HTTPStreamClient::printSocketError(QAbstractSocket::SocketError error){
    switch(error){
    case QAbstractSocket::ConnectionRefusedError:
        qDebug() << "HTTPStreamClient.error [ConnectionRefusedError]";
        break;
    case QAbstractSocket::RemoteHostClosedError:
        qDebug() << "HTTPStreamClient.error [RemoteHostClosedError]";
        break;
    case QAbstractSocket::HostNotFoundError:
        qDebug() << "HTTPStreamClient.error [HostNotFoundError]";
        break;
    case QAbstractSocket::SocketAccessError:
        qDebug() << "HTTPStreamClient.error [SocketAccessError]";
        break;
    case QAbstractSocket::SocketResourceError:
        qDebug() << "HTTPStreamClient.error [SocketResourceError]";
        break;
    case QAbstractSocket::SocketTimeoutError:
        qDebug() << "HTTPStreamClient.error [SocketTimeoutError]";
        break;
    case QAbstractSocket::DatagramTooLargeError:
        qDebug() << "HTTPStreamClient.error [DatagramTooLargeError]";
        break;
    case QAbstractSocket::NetworkError:
        qDebug() << "HTTPStreamClient.error [NetworkError]";
        break;
    case QAbstractSocket::AddressInUseError:
        qDebug() << "HTTPStreamClient.error [AddressInUseError]";
        break;
    case QAbstractSocket::SocketAddressNotAvailableError:
        qDebug() << "HTTPStreamClient.error [SocketAddressNotAvailableError]";
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        qDebug() << "HTTPStreamClient.error [UnsupportedSocketOperationError]";
        break;
    case QAbstractSocket::ProxyAuthenticationRequiredError:
        qDebug() << "HTTPStreamClient.error [ProxyAuthenticationRequiredError]";
        break;
    case QAbstractSocket::SslHandshakeFailedError:
        qDebug() << "HTTPStreamClient.error [SslHandshakeFailedError]";
        break;
    case QAbstractSocket::UnfinishedSocketOperationError:
        qDebug() << "HTTPStreamClient.error [UnfinishedSocketOperationError]";
        break;
    case QAbstractSocket::ProxyConnectionRefusedError:
        qDebug() << "HTTPStreamClient.error [ProxyConnectionRefusedError]";
        break;
    case QAbstractSocket::ProxyConnectionClosedError:
        qDebug() << "HTTPStreamClient.error [ProxyConnectionClosedError]";
        break;
    case QAbstractSocket::ProxyConnectionTimeoutError:
        qDebug() << "HTTPStreamClient.error [ProxyConnectionTimeoutError]";
        break;
    case QAbstractSocket::ProxyNotFoundError:
        qDebug() << "HTTPStreamClient.error [ProxyNotFoundError]";
        break;
    case QAbstractSocket::ProxyProtocolError:
        qDebug() << "HTTPStreamClient.error [ProxyProtocolError]";
        break;
    case QAbstractSocket::UnknownSocketError:
        qDebug() << "HTTPStreamClient.error [UnknownSocketError]";
        break;
    default:
        qDebug() << "HTTPStreamClient.error [*]";
        break;
    }
}
