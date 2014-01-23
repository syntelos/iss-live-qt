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

#include "S0000004.h"

const S0000004 S0000004::I;

S0000004::S0000004()
    : ISSLSchematic("S0000004","VVO","S0_SARJ_P","degrees","12","sprintf","%5.4f","Solar Alpha Rotary Joint (SARJ) Port Joint Angle Position (degrees)","Solar Alpha Rotary Joint (SARJ) Port Joint Angle Position (degrees) Position of the rotary joint based on the output of the active joint resolver corrected for bias (ADO), or if neither joint resolver is excited the Joint_Position_MAR from SARJ_C.")
{
}

