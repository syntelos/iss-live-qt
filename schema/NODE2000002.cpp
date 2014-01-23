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

#include "NODE2000002.h"

const NODE2000002 NODE2000002::I;

NODE2000002::NODE2000002()
    : ISSLSchematic("NODE2000002","ETHOS","N2_LTL","kg","12","sprintf","%5.4f","Coolant water quantity (Node 2), LT","Coolant water quantity (Node 2), LT. N2 Low Temperature Loop (LTL) water level.")
{
}

