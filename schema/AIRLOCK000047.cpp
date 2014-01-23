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

#include "AIRLOCK000047.h"

const AIRLOCK000047 AIRLOCK000047::I;

AIRLOCK000047::AIRLOCK000047()
    : ISSLSchematic("AIRLOCK000047","EVA","ARL_PUMP_V","event","64","enum","0=Off|1=On|3=Failed","Pumps atmosphere from Airlock into Node one during depress, voltage status.","Pumps atmosphere from Airlock into Node one during depress, voltage status.")
{
}

