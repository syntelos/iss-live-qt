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

#include "ISSLClient.h"

const char* ISSLClient::HOST = "push1.jsc.nasa.gov";
const int ISSLClient::PORT = 80;
//const char* ISSLClient::HOST = "192.168.1.3";
//const int   ISSLClient::PORT = 8080;
const char* ISSLClient::FORM = "application/x-www-form-urlencoded";
const char* ISSLClient::CONN = "Connection";
const char* ISSLClient::CONN_KEAL = "keep-alive";
const char* ISSLClient::USER = "User-Agent";
const char* ISSLClient::USER_AGENT = "Syntelos-ISS-Live/1.0";
