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

#include "USLAB000016.h"

const USLAB000016 USLAB000016::I;

USLAB000016::USLAB000016()
    : ISSLSchematic("USLAB000016","ADCO","ATT_CTL","event","64","enum","0=ATTITUDE HOLD|1=MOM MGMT","Attitude Controller Type","Attitude Controller Type. Indicates the type of attitude controller utilized by the US GNC. An Attitude Hold controller is used to minimize error in the attitude of the ISS, while sacrificing momentum margin. A Momentum Management controller is used to minimize the active CMG momentum, while sacrificing attitude error.")
{
}

