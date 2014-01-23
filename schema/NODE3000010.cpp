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

#include "NODE3000010.h"

const NODE3000010 NODE3000010::I;

NODE3000010::NODE3000010()
    : ISSLSchematic("NODE3000010","ETHOS","N3_O2_GEN","event","64","enum","1=PROCESS|2=STANDBY|3=SHUTDOWN|4=STOP|5=VENT_DOME|6=INERT_DOME|7=FAST_SHUTDOWN|8=N2_PURGE_SHUTDOWN","Oxygen Generator State","Oxygen Generator State. Status of the Oxygen Generator.")
{
}

