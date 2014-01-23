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

#include "NODE3000020.h"

const NODE3000020 NODE3000020::I;

NODE3000020::NODE3000020()
    : ISSLSchematic("NODE3000020","CRONUS","N3_MDM1","event","64","enum","0=Off|1=On|3=Failed","Node 3 Multiplexer/Demultiplexer (MDM) 1 on-off status","Node 3 Multiplexer/Demultiplexer (MDM) 1 on-off status")
{
}

