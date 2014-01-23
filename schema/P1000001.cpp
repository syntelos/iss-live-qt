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

#include "P1000001.h"

const P1000001 P1000001::I;

P1000001::P1000001()
    : ISSLSchematic("P1000001","SPARTAN","P1_B_FLOW","kg/hour","12","sprintf","%5.4f","Loop B Pump Flowrate (kg/hr)","Loop B Pump Flowrate (kg/hr) Flow rate of Ammonia being moved by ETCS Pump")
{
}

