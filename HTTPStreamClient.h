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
#ifndef _ISSL_HTTPStreamClient_H
#define _ISSL_HTTPStreamClient_H

#include <QObject>
#include <QTcpSocket>

#include "HTTPStreamRequest.h"
#include "HTTPStreamResponse.h"

/*!
 * Socket primitive for streaming connections
 */
class HTTPStreamClient : public QTcpSocket, public HTTP::Device {
    Q_OBJECT;

 public:
    HTTPStreamClient(QObject* p = 0);
    ~HTTPStreamClient();

    virtual bool isOpen();

    virtual bool waitForReadyRead();

    virtual QByteArray readLine();

    virtual QByteArray read(qint64);
    /*!
     * \class HTTP::Device
     */
    virtual QString peerName() const;
    virtual quint16 peerPort() const;

    virtual void write(const QByteArray&);

    virtual void write(const char*);
    /*!
     * Return a non null response when this socket is open and the
     * argument is a valid request.
     */
    HTTPStreamResponse* send(HTTPStreamRequest&);

    HTTPStreamResponse* send(HTTPStreamRequest*);

 public slots:
     void printSocketError(QAbstractSocket::SocketError);

 private:
     Q_DISABLE_COPY(HTTPStreamClient);
};
#endif
