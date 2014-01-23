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

#include "Main.h"


Main::Main(int argc, char** argv)
    : a(new QApplication(argc, argv)),
      issl(new ISSLClient(this))
{
    QObject::connect(issl,SIGNAL(connected(const ISSLClient&)),this,SLOT(connect(const ISSLClient&)));
    QObject::connect(issl,SIGNAL(disconnected(const ISSLClient&)),this,SLOT(disconnect(const ISSLClient&)));

    issl->connect();

    issl->open();
}
void Main::connect(const ISSLClient& issl){

    QObject::connect(issl.getSession(),SIGNAL(failure()),a,SLOT(quit()));

    QObject::connect(issl.getCatalog(),SIGNAL(failure()),a,SLOT(quit()));

    QObject::connect(issl.getBind(),SIGNAL(failure()),a,SLOT(quit()));
}
void Main::disconnect(const ISSLClient& issl){

    QObject::disconnect(issl.getSession(),SIGNAL(failure()),a,SLOT(quit()));

    QObject::disconnect(issl.getCatalog(),SIGNAL(failure()),a,SLOT(quit()));

    QObject::disconnect(issl.getBind(),SIGNAL(failure()),a,SLOT(quit()));
}


int main(int argc, char** argv){
    QCoreApplication::setOrganizationName("syntelos");
    QCoreApplication::setOrganizationDomain("syntelos.com");
    QCoreApplication::setApplicationName("iss-live");
    /*
     */
    Main main(argc, argv);

    return main.a->exec();
}
