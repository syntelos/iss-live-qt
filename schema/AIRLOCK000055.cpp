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

#include "AIRLOCK000055.h"

const AIRLOCK000055 AIRLOCK000055::I;

AIRLOCK000055::AIRLOCK000055()
    : ISSLSchematic("AIRLOCK000055","ETHOS","ARL_HIPO2_PRES","torr","12","sprintf","%5.4f","Airlock Hi P O2 Tank Pressure","Airlock Hi P O2 Tank Pressure. Pressure in the oxygen tank used to support EVA.")
{
}

