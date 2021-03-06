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

#include <QApplication>

#include "ISSLClient.h"

/**
 * This class provides ISSL/Qt slots for connecting and disconnecting
 * the \class QApplication quit slot with session, catalog and bind
 * failure signals.
 */
class Main : public QApplication {
    Q_OBJECT;

 public:

    ISSLClient* issl;

    Main(int,char**);

    ISSLClient* getClient();

    ISSLClientCatalog* getCatalog();

    void connect();

    void open();

 public slots:

    void connect(const ISSLClient& issl);

    void disconnect(const ISSLClient& issl);

};
