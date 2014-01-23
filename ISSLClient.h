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

#include <QObject>

#include "HTTPStreamClient.h"
#include "ISSLClientSession.h"
#include "ISSLClientCatalog.h"
#include "ISSLClientData.h"

/*!
 * Always connect before open, and disconnect before close.  The
 * \class ISSLClientBind eol signal is connected to the reconnect
 * method for perpetual operation.
 * 
 * Printing controls the connections to command line / console output
 * print events.  Printing is enabled by default. 
 *
 * Aside from the connection of print slots, the set of objects and
 * connections managed here is invariant.
 * 
 * The QObject tree rooted at this node has one branch to the \class
 * HTTPStreamClient, and then the session, catalog and data nodes are
 * children of the stream client node.
 */
class ISSLClient : public QObject {
    Q_OBJECT;

    HTTPStreamClient* net;
    ISSLClientSession* session;
    ISSLClientCatalog* ctrl;
    ISSLClientData* bind;
    bool printing;

 public:
    ISSLClient(QObject* p = 0);
    ~ISSLClient();

    bool isPrinting() const;

    HTTPStreamClient* getClient() const;
    ISSLClientSession* getSession() const;
    ISSLClientCatalog* getCatalog() const;
    ISSLClientData* getBind() const;

 signals:
    void opened(const ISSLClient&);
    void closed(const ISSLClient&);

    void connected(const ISSLClient&);
    void disconnected(const ISSLClient&);

    void reconnected(const ISSLClient&);

 public slots:
    void open();
    void close();

    void connect();
    void disconnect();

    void reconnect();

    void enablePrinting();
    void disablePrinting();

 private:
    Q_DISABLE_COPY(ISSLClient);
};
#endif
