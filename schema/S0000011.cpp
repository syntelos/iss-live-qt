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

#include "S0000011.h"

const S0000011 S0000011::I;

S0000011::S0000011()
    : ISSLSchematic("S0000011","CRONUS","S0_MDM1","event","64","enum","0=Off|1=On|3=Failed","S0 Truss Multiplexer/Demultiplexer (MDM) 1 on-off status","S0 Truss Multiplexer/Demultiplexer (MDM) 1 on-off status")
{
}

