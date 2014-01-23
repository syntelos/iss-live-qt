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
#include <QList>
#include <QRegExp>
#include <QString>
#include <QStringList>

#include "ISSLClientDataChunk.h"

ISSLClientDataChunk::ISSLClientDataChunk(const HTTPStreamChunk& rep)
    : QList(), input()
{
    QByteArray chunk = rep.buffer();
    input += chunk.trimmed();

    QList<QByteArray> jsonObjects = input.split('\'');

    qDebug() << "ISSLClientDataChunk: [parse begin] count:" << jsonObjects.size();

    foreach(const QByteArray& jsonObject, jsonObjects){

        uint len = jsonObject.length();

        if (8 < len && '{' == jsonObject[0] && '}' == jsonObject[len-1]){

            QString jsonObjectString(jsonObject);
            QRegExp rx0("[\\][,}{]");


            qDebug() << "ISSLClientDataChunk: [object]" << jsonObjectString;

            ISSLClientDataChunkPair* pair = new ISSLClientDataChunkPair();

            QStringList jsonItem = jsonObjectString.split(rx0,QString::SkipEmptyParts);

            foreach (const QString& jsonObject, jsonItem){

                qDebug() << "ISSLClientDataChunk: [field]" << jsonObject;

                int parse = jsonObject.indexOf(':');

                if (0 < parse){
                    QString name = jsonObject.mid(0,parse);
                    name = name.replace('"',' ');
                    name = name.trimmed();

                    QString value = jsonObject.mid(parse+1);
                    value = value.replace('"',' ');
                    value = value.trimmed();

                    if (!name.isEmpty() && !value.isEmpty()){

                        qDebug() << "ISSLClientDataChunk: [object name-value]" << name << "=" << value;

                        if (name == "Name"){
                            QByteArray ascii = value.toAscii();
                            pair->name.clear();
                            pair->name += ascii;
                        }
                        else if (name == "Value"){
                            QByteArray ascii = value.toAscii();
                            pair->value.clear();
                            pair->value += ascii;
                        }
                        else if (name == "CalibratedData"){
                            QByteArray ascii = value.toAscii();
                            pair->value.clear();
                            pair->value += ascii;
                            break;
                        }
                    }
                }
            }
        }
    }
    qDebug() << "ISSLClientDataChunk: [parse end]";
}
