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
#include <cstring>
#include <iostream>
#include <QList>
#include <QTextStream>

#include "Main.h"


Main::Main(int argc, char** argv)
    : a(new QApplication(argc, argv)),
      issl(new ISSLClient(this))
{
    QObject::connect(issl,SIGNAL(connected(const ISSLClient&)),this,SLOT(connect(const ISSLClient&)));
    QObject::connect(issl,SIGNAL(disconnected(const ISSLClient&)),this,SLOT(disconnect(const ISSLClient&)));
}
ISSLClient* Main::getClient(){
    return issl;
}
ISSLClientCatalog* Main::getCatalog(){
    return issl->getCatalog();
}
void Main::connect(){
    issl->connect();
}
void Main::open(){
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

    int argx;
    for (argx = 0; argx < argc; argx++){
        char* arg = argv[argx];
        ISSLConsole::Type console = ISSLConsole::TypeOf(arg);
        if (0 != console){
            ISSLClientCatalog::append(console);
        }
        else {
            ISSLSchema::Type schematic = ISSLSchema::TypeOf(arg);
            if (0 != schematic){
                ISSLClientCatalog::append(schematic);
            }
            else if (0 == strcmp("??",arg)){
                QTextStream out(stdout);

                QList<ISSLConsole::Type> consoles = ISSLConsole::Types();
                foreach (const ISSLConsole::Type& consoleType, consoles){
                    const ISSLConsole& consoleObject = ISSLConsole::For(consoleType);

                    QList<ISSLSchematic> members = consoleObject.schematic();
                    foreach (const ISSLSchematic& member, members){
                        out << consoleObject.name << "\t" << member.name << "\t" << member.desc_short;
                        if (0 == strcmp("enum",member.formattype)){
                            out << "\t[" << member.format << ']' << endl;
                        }
                        out << endl;
                    }
                }
                return 1;
            }
            else if (0 == strcmp("?",arg)){
                QTextStream out(stdout);

                bool query = true;

                argx += 1;
                for (; argx < argc; argx++){
                    arg = argv[argx];
                    console = ISSLConsole::TypeOf(arg);
                    if (0 != console){
                        query = false;
                        const ISSLConsole& consoleObject = ISSLConsole::For(console);

                        QList<ISSLSchematic> members = consoleObject.schematic();
                        foreach (const ISSLSchematic& member, members){
                            out << consoleObject.name << "\t" << member.name << "\t" << member.desc_short;
                            if (0 == strcmp("enum",member.formattype)){
                                out << "\t[" << member.format << ']' << endl;
                            }
                            out << endl;
                        }
                    }
                }

                if (query){
                    QList<QString> consoles = ISSLConsole::Names();
                    foreach(const QString& name, consoles){
                        out << name << endl;
                    }
                }
                return 1;
            }
        }
    }

    main.connect();

    main.open();

    return main.a->exec();
}
