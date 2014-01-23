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

#include "ISSLClientIO.h"

const char* ISSLClientIO::HOST = "push1.jsc.nasa.gov";
const int ISSLClientIO::PORT = 80;
const char* ISSLClientIO::FORM = "application/x-www-form-urlencoded";
const char* ISSLClientIO::CONN = "Connection";
const char* ISSLClientIO::CONN_KEAL = "keep-alive";
const char* ISSLClientIO::USER = "User-Agent";
const char* ISSLClientIO::USER_AGENT = "Syntelos-ISS-Live/1.0";
