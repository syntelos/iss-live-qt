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

#include "USLAB000013.h"

const USLAB000013 USLAB000013::I;

USLAB000013::USLAB000013()
    : ISSLSchematic("USLAB000013","ADCO","ATT_SRC","event","64","enum","0=NONE|1=GPS1|2=GPS2|3=Russian|4=Ku_Band","US Attitude Source","US Attitude Source. The selected source of attitude updates to the GNC software. Options are GPS 1 or GPS 2 (redundant GPS receivers which calculate attitude using several antenna), Russian (attitude calculated on the Russian Segment), or Ku-Band (attitude calculated using the Ku-Band antenna information as it tracks TDRS communications satellites).")
{
}

