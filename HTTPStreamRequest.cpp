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

#include "HTTPStreamRequest.h"

HTTPStreamRequest::HTTPStreamRequest()
    : HTTPStreamIO(), method("POST"), path(), protocol("HTTP/1.1")
{
}
bool HTTPStreamRequest::isValid(){
    return (method.isValid() && path.isValid() && protocol.isValid() && 0 < QList::size());
}
void HTTPStreamRequest::clear(){
    method.clear();
    path.clear();
    protocol.clear();
    HTTPStreamIO::clear();
}
void HTTPStreamRequest::read(HTTP::Device* io){

    HTTPStreamRequest::clear();

    if (io->waitForReadyRead()){
        /*
         * Request line
         */
        QByteArray line = io->readLine();
        line = line.trimmed();
        if (0 < line.length()){
            QList<QByteArray> linary = line.split(' ');
            int count = linary.count();
            if (3 == count){
                method.setValue(linary.at(0));
                path.setValue(linary.at(1));
                protocol.setValue(linary.at(1));

                /*
                 * Headers
                 */
                while (true){
                    HTTPStreamHeader h(io->readLine());
                    if (h.isValid())
                        QList<HTTPStreamHeader>::append(h);
                    else
                        break;
                }
                /*
                 * Body
                 */
                int body = getContentLength();
                if (0 < body){
                    QByteArray input = io->read(body);
                    QBuffer::setData(input);
                }
            }
        }
    }
}
void HTTPStreamRequest::write(HTTP::Device* io){
    if (isValid() && io->isOpen()){
        io->write(method.toByteArray());
        io->write(HTTP::SP);
        io->write(path.toByteArray());
        io->write(HTTP::SP);
        io->write(protocol.toByteArray());
        io->write(HTTP::CRLF);
        /*
         * Default headers "content-length" and "host"
         */
        qint64 len = QBuffer::size();
        if (0 < len){
            setHeader("Content-Length", len);
        }

        {
            QString hostname = io->peerName();
            quint16 portnum = io->peerPort();
            if (0 != portnum && 80 != portnum){
                QString fmt;
                fmt = QString(":%1").arg(portnum);
                hostname += fmt;
            }
            setHeader("Host", hostname);
        }

        const QList<HTTPStreamHeader>& headers = *this;

        foreach (const HTTPStreamHeader& h, headers){
            io->write(h.toByteArray());
            io->write(HTTP::CRLF);
        }
        io->write(HTTP::CRLF);

        if (0 < len){
            const QByteArray& body = QBuffer::buffer();
            io->write(body);
        }
    }
}
