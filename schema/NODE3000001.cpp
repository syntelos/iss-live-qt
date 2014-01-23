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

#include "NODE3000001.h"

const NODE3000001 NODE3000001::I;

NODE3000001::NODE3000001()
    : ISSLSchematic("NODE3000001","ETHOS","N3_PPO2","torr","12","sprintf","%5.4f","Node 3 ppO2","Node 3 ppO2. Oxygen level measured by Node 3 Sensors")
{
}

