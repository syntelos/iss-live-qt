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

#include "USLAB000041.h"

const USLAB000041 USLAB000041::I;

USLAB000041::USLAB000041()
    : ISSLSchematic("USLAB000041","ADCO","LOAC_CMG","event","64","enum","0=FALSE|1=TRUE","Loss of CMG Attitude Control (LOAC) Caution Message In Alarm","Loss of CMG Attitude Control (LOAC) Caution Message In Alarm. Defines when the US GNC has declared the CMGs can no longer maintain attitude control.")
{
}

