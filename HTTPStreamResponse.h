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
#ifndef _ISSL_HTTPStreamResponse_H
#define _ISSL_HTTPStreamResponse_H

#include <QVariant>

#include "HTTPStreamIO.h"

/*!
 * 
 */
struct HTTPStreamResponse : public HTTPStreamIO {

    QVariant protocol;
    QVariant status;
    QVariant message;

    HTTPStreamResponse();

    void clear();

    bool isOk();

    virtual bool isValid();
    /*!
     * Read response line, headers, and any response entity body
     * specified by a "Content-Length" header.
     */
    virtual void read(HTTP::Device* io);
    /*!
     * Set header "Content-Length" for a non-empty response entity
     * buffer.
     */
    virtual void write(HTTP::Device* io);
};
#endif
