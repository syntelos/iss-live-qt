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

#include "P6000004.h"

const P6000004 P6000004::I;

P6000004::P6000004()
    : ISSLSchematic("P6000004","SPARTAN","P6_PVCU_2B_V","volts","12","sprintf","%5.4f","Photovolatic Control Unit (PVCU) - Solar Array - 2B - Drive Voltage","Photovolatic Control Unit (PVCU) - Solar Array - 2B - Drive Voltage")
{
}

