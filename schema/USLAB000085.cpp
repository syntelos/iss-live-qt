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

#include "USLAB000085.h"

const USLAB000085 USLAB000085::I;

USLAB000085::USLAB000085()
    : ISSLSchematic("USLAB000085","CRONUS","CNC_DMD_T_F","seconds","12","sprintf","%5.4f","ISS Command and Control Multiplexer/Demultiplexer Onboard Time (fine)","ISS Command and Control Multiplexer/Demultiplexer Onboard Time (fine)")
{
}

