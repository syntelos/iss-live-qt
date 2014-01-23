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

#include "NODE3000006.h"

const NODE3000006 NODE3000006::I;

NODE3000006::NODE3000006()
    : ISSLSchematic("NODE3000006","ETHOS","N3_H2O_PROC","event","64","enum","1=STOP|2=SHUTDOWN|3=STANDBY|4=PROCESS|5=HOT SERVICE|6=FLUSH|7=WARM SHUTDOWN","Water Processor State","Water Processor State. Status of the Water Processor.")
{
}

