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

#include "HTTPStreamIO.h"

HTTPStreamIO::HTTPStreamIO()
    : QList(), QBuffer()
{
}
void HTTPStreamIO::clear(){
    QList::clear();
    QByteArray empty;
    QBuffer::setData(empty);
}
/*!
 */
void HTTPStreamIO::setHeader(const QVariant& name, const QVariant& value){
    const int count = QList::size();
    int cc;
    for (cc = 0; cc < count; cc++){
        const HTTPStreamHeader& h = QList<HTTPStreamHeader>::at(cc);
        if (h == name){
            HTTPStreamHeader& hs = const_cast<HTTPStreamHeader&>(h);
            hs.setValue(value);
            return;
        }
    }
    HTTPStreamHeader h;
    h.setName(name);
    h.setValue(value);
    QList<HTTPStreamHeader>::append(h);
}
/*!
 */
const QVariant& HTTPStreamIO::getHeader(const QVariant& name) const {
    const int count = QList::size();
    int cc;
    for (cc = 0; cc < count; cc++){
        const HTTPStreamHeader& h = QList<HTTPStreamHeader>::at(cc);
        if (h == name){

            return h.value;
        }
    }
    QVariant nil;
    return nil;
}
void HTTPStreamIO::setContentLength(uint len){
    setHeader("Content-Length",len);
}
uint HTTPStreamIO::getContentLength() const {
    const QVariant& contentLength = getHeader("Content-Length");
    if (contentLength.isValid()){
        bool ok;
        int len = contentLength.toInt(&ok);
        if (ok && 0 < len){
            return len;
        }
    }
    return 0;
}
void HTTPStreamIO::setContentType(const QVariant& string){
    setHeader("Content-Type",string);
}
QString HTTPStreamIO::getContentType() const {
    const QVariant& contentType = getHeader("Content-Type");
    if (contentType.isValid()){

        return contentType.toString();
    }
    else {
        QString nil;
        return nil;
    }
}
