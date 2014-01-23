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

#include "NODE3000013.h"

const NODE3000013 NODE3000013::I;

NODE3000013::NODE3000013()
    : ISSLSchematic("NODE3000013","ETHOS","N3_AC_TEMP","celcius","12","sprintf","%5.4f","Air Cooling Fluid Temp (Node 3)","Air Cooling Fluid Temp (Node 3). Temperature of the water loop cooling the air in Node 3.")
{
}

