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
#ifndef _ISSL_ISSLClientData_H
#define _ISSL_ISSLClientData_H

#include "ISSLClientSession.h"
#include "ISSLClientDataChunk.h"

/*!
 * 
 */
class ISSLClientData : public ISSLClientIO {
    Q_OBJECT;

    HTTPStreamClient* net;
    ISSLClientSession* session;
    HTTPStreamResponse* rep;
    QByteArray qbody;
    QVariant path;
    volatile bool blos;

 public:
    ISSLClientData(HTTPStreamClient*,ISSLClientSession*);
    ~ISSLClientData();

    bool hasSignal();
    bool hasNotSignal();

 signals:
    void success();
    void failure();
    void aos();
    void los();
    void eol();
    void received(const QList<ISSLClientDataChunkPair>&);


 public slots:
    virtual void io();
    void error();
    void print(const QList<ISSLClientDataChunkPair>&);
    void printLOS();
    void printAOS();


 private:
    void ready();

    Q_DISABLE_COPY(ISSLClientData);
};
#endif
