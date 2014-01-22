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
#ifndef _ISSL_ISSLClient_H
#define _ISSL_ISSLClient_H

#include <QByteArray>
#include <QIODevice>
#include <QObject>

#include "HTTPStreamClient.h"
#include "HTTPStreamRequest.h"
#include "HTTPStreamResponse.h"

/*!
 * \sa ISSLClientSession
 * \sa ISSLClientCatalog
 * \sa ISSLClientData
 */
class ISSLClient : public QObject {

 public:
    static const char* HOST;
    static const int   PORT;
    static const char* FORM;
    static const char* CONN;
    static const char* CONN_KEAL;
    static const char* USER;
    static const char* USER_AGENT;

 public slots:
    virtual void io() = 0;

};
#endif
