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

#include "USLAB000044.h"

const USLAB000044 USLAB000044::I;

USLAB000044::USLAB000044()
    : ISSLSchematic("USLAB000044","ADCO","GPS2","event","64","enum","0=DOING POSITION FIXES|1=SV TIMING|2=APPROXIMATE TIMING|3=GPS TIME|4=NEED INITIALIZATION|5=GDOP NEEDED|6=BAD TIMING|7=NO USABLE SAT|8=TRACK 1 SAT|9=TRACK 2 SAT|10=TRACK 3 SAT|11=BAD INTEGRITY|12=NO VEL AVAIL|13=UNUSABLE FIX","Global Positioning System (GPS-2) Ops Status","Global Positioning System (GPS-2) Ops Status. Operational status of the software processes occurring in GPS 2.")
{
}

