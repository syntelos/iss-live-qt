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

#include "USLAB000015.h"

const USLAB000015 USLAB000015::I;

USLAB000015::USLAB000015()
    : ISSLSchematic("USLAB000015","ADCO","SV_SRC","event","64","enum","0=NO_SOURCE|1=GPS1_FILTER|2=GPS2_FILTER|3=RUSSIAN|4=GPS1_DETERMINISTIC|5=GPS2_DETERMINISTIC|6=GROUND","US State Vector Source","US State Vector Source. The selected source of state vector updates to the GNC software. Options are GPS 1 or GPS 2 (redundant GPS receivers), Russian (the state vector calculated on the Russian Segment), or Ground (a state vector calculated based on ground tracking information and uplinked).")
{
}

