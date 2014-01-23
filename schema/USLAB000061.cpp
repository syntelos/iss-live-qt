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

#include "USLAB000061.h"

const USLAB000061 USLAB000061::I;

USLAB000061::USLAB000061()
    : ISSLSchematic("USLAB000061","ETHOS","LAB_AC_TEMP","celcius","12","sprintf","%5.4f","Air Cooling Fluid Temp (Lab)","Air Cooling Fluid Temp (Lab). Temperature of the water loop cooling the air in the Lab.")
{
}

