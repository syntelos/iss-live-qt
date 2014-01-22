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
#ifndef _ISSL_ISSLClientCatalog_H
#define _ISSL_ISSLClientCatalog_H

#include "ISSLClientSession.h"

/*!
 * 
 */
class ISSLClientCatalog : public ISSLClient {
    Q_OBJECT;

    HTTPStreamClient* net;
    HTTPStreamResponse* rep;
    QByteArray qbody;
    QVariant path;

 public:
    ISSLClientCatalog(HTTPStreamClient*,ISSLClientSession*);
    ~ISSLClientCatalog();

 signals:
    void success();
    void failure();

 public slots:
     virtual void io();
     void error();

 private:
     void ready();

};
#endif
