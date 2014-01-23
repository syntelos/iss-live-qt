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

#include "AIRLOCK000049.h"

const AIRLOCK000049 AIRLOCK000049::I;

AIRLOCK000049::AIRLOCK000049()
    : ISSLSchematic("AIRLOCK000049","ETHOS","ARL_PRES_CREW","torr","12","sprintf","%5.4f","Crewlock Pressure","Crewlock Pressure. Cabin pressure in the airlock.")
{
}

