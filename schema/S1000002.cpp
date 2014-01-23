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

#include "S1000002.h"

const S1000002 S1000002::I;

S1000002::S1000002()
    : ISSLSchematic("S1000002","SPARTAN","S1_A_PRES","kPa","12","sprintf","%5.4f","Loop A PM Out Press (kPa)","Loop A PM Out Press (kPa) Pressure of Ammonia coming out of the pump")
{
}

