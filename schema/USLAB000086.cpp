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

#include "USLAB000086.h"

const USLAB000086 USLAB000086::I;

USLAB000086::USLAB000086()
    : ISSLSchematic("USLAB000086","VVO","ISS_M","event","64","enum","1=Standard|2=Microgravity|4=Reboost|8=Proximity_Ops|16=External_Ops|32=Survival|64=ASCR|127=all_modes","ISS Station Mode","ISS Station Mode")
{
}

