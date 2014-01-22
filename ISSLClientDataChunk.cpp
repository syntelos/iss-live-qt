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
#include <QList>
#include <QRegExp>
#include <QString>
#include <QStringList>

#include "ISSLClientDataChunk.h"

ISSLClientDataChunk::ISSLClientDataChunk(QIODevice* rep)
    : QList(), input()
{
    if (rep->canReadLine()){
        QByteArray lengthLine = rep->readLine();
        bool ok;
        int len = lengthLine.toInt(&ok,16);
        if (0 < len){
            QByteArray chunk = rep->read(len);
            this->input += chunk;
            QList<QByteArray> jsonObjects = chunk.split('\'');
            foreach(const QByteArray& jsonObject, jsonObjects){
                len = jsonObject.length();
                if (8 < len && '{' == jsonObject[0] && '}' == jsonObject[len-1]){
                    QString jsonObjectString(jsonObject);
                    QRegExp rx0("[][,}{]");
                    QRegExp rx1("[\":]");

                    ISSLClientDataChunkPair* pair = new ISSLClientDataChunkPair();

                    QStringList jsonItem = jsonObjectString.split(rx0);
                    foreach (const QString& jsonObject, jsonItem){
                        QStringList nameValue = jsonObject.split(rx1);
                        if (2 == nameValue.length()){
                            const QString& name = nameValue.at(0);
                            const QString& value = nameValue.at(1);

                            if (name == "Name"){
                                QByteArray ascii = value.toAscii();
                                pair->name.swap(ascii);
                            }
                            else if (name == "Value"){
                                QByteArray ascii = value.toAscii();
                                pair->value.swap(ascii);
                            }
                            else if (name == "CalibratedData"){
                                QByteArray ascii = value.toAscii();
                                pair->value.swap(ascii);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
}
