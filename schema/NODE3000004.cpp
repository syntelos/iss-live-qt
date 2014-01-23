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

#include "NODE3000004.h"

const NODE3000004 NODE3000004::I;

NODE3000004::NODE3000004()
    : ISSLSchematic("NODE3000004","ETHOS","N3_URN_PROC","event","64","enum","2=STOP|4=SHUTDOWN|8=MAINTENANCE|16=NORMAL|32=STANDBY|64=IDLE|128=SYSTEM INITIALIZED","Urine Processor State","Urine Processor State. Status of the Urine Processor.")
{
}

