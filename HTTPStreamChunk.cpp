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

#include "HTTPStreamChunk.h"

HTTPStreamChunk::HTTPStreamChunk()
    : HTTPStreamIO()
{
}
bool HTTPStreamChunk::isValid(){
    return (0 < QBuffer::size());
}
void HTTPStreamChunk::read(QIODevice* io){

    HTTPStreamIO::clear();

    if (io->canReadLine()){
        /*
         * chunk-size
         */
        QByteArray input = io->readLine();
        QByteArray line = input.trimmed();

        int retry;
        for (retry = 0; 0 == line.length() && io->canReadLine() && retry < 2; retry++){

            input = io->readLine();
            line = input.trimmed();
        }

        if (0 < line.length()){

            QList<QByteArray> chunk_list = line.split(';');
            int chunk_llen = chunk_list.size();

            if (1 < chunk_llen){
                /*
                 * chunk-extension
                 */
                int cc;
                for (cc = 1; cc < chunk_llen; cc++){

                    const QByteArray& ext = chunk_list.at(cc);

                    QList<QByteArray> extli = ext.split('=');

                    if (2 == extli.size()){

                        HTTPStreamHeader h;
                        h.setName(extli.at(0));
                        h.setValue(extli.at(1));
                        if (h.isValid()){
                            QList<HTTPStreamHeader>::append(h);
                        }
                    }
                }
            }

            if (0 < chunk_llen){
                bool ok;
                const QByteArray& chunk_size = chunk_list.at(0);
                uint len = chunk_size.toInt(&ok,16);
                if (ok){
                    /*
                     * chunk-data
                     */
                    input = io->read(len);

                    QBuffer::setData(input);
                }
            }
        }
    }
}
void HTTPStreamChunk::write(QIODevice* io){
    /*
     * chunk-size
     */
    qint64 len = QBuffer::size();
    {
        QByteArray lenbuf;
        lenbuf.setNum(len,16);
        io->write(lenbuf);
    }
    /*
     * chunk-extension
     */
    if (0 < QList::size()){

        const QList<HTTPStreamHeader>& extl = *this;

        foreach (const HTTPStreamHeader& h, extl){
            io->write(HTTP::SC);
            io->write(h.name.toByteArray());
            io->write(HTTP::EQ);
            io->write(h.value.toByteArray());
        }
    }
    io->write(HTTP::CRLF);
    /*
     * chunk-data
     */
    if (0 < len){

        io->write(QBuffer::data());
    }
    io->write(HTTP::CRLF);
}