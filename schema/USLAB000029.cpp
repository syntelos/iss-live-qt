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

#include "USLAB000029.h"

const USLAB000029 USLAB000029::I;

USLAB000029::USLAB000029()
    : ISSLSchematic("USLAB000029","ADCO","ATT_CMD_Q1","quaternion","12","sprintf","%5.4f","US Commanded Attitude Quaternion Component 1","US Commanded Attitude Quaternion Component 1")
{
}

