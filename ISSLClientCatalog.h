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
#include "ISSLConsole.h"
#include "ISSLSchema.h"

/*!
 * 
 */
class ISSLClientCatalog : public ISSLClientIO {
    Q_OBJECT;

    HTTPStreamClient* net;
    ISSLClientSession* session;
    HTTPStreamResponse* rep;
    QByteArray qbody;
    QVariant path;

    static QList<ISSLSchematic> catalog;

 public:
    ISSLClientCatalog(HTTPStreamClient*,ISSLClientSession*);
    ~ISSLClientCatalog();

    static void append(const ISSLConsole&);
    static void append(ISSLConsole::Type);
    static void append(ISSLSchema::Type);

    static QByteArray join();
    static QByteArray join(const QByteArray& sep);
    static QString join(const QString& sep);

 signals:
    void success();
    void failure();

 public slots:
    virtual void io();
    void error();

 private:
    void ready();

    Q_DISABLE_COPY(ISSLClientCatalog);
};
#endif
