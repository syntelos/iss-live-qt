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

#include "AIRLOCK000052.h"

const AIRLOCK000052 AIRLOCK000052::I;

AIRLOCK000052::AIRLOCK000052()
    : ISSLSchematic("AIRLOCK000052","ETHOS","ARL_N2","event","64","enum","0=CLOSED|1=OPEN|2=IN-TRANSIT|3=FAILED","N2 Supply Valve position","N2 Supply Valve position. Position of the valve controlling the ISS nitrogen supply.")
{
}

