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

#include "S6000001.h"

const S6000001 S6000001::I;

S6000001::S6000001()
    : ISSLSchematic("S6000001","SPARTAN","S6_PVCU_3B_V","volts","12","sprintf","%5.4f","Photovolatic Control Unit (PVCU) - Solar Array - 3B - Drive Voltage","Photovolatic Control Unit (PVCU) - Solar Array - 3B - Drive Voltage")
{
}

