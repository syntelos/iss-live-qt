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

#include "USLAB000042.h"

const USLAB000042 USLAB000042::I;

USLAB000042::USLAB000042()
    : ISSLSchematic("USLAB000042","ADCO","LOAC_ISS","event","64","enum","0=FALSE|1=TRUE","Loss of ISS Attitude Control (LOAC) Caution Message In Alarm","Loss of ISS Attitude Control (LOAC) Caution Message In Alarm. Defines when the US Segment has declared a loss of ISS attitude control.")
{
}

