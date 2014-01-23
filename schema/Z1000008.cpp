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

#include "Z1000008.h"

const Z1000008 Z1000008::I;

Z1000008::Z1000008()
    : ISSLSchematic("Z1000008","ADCO","CMG4_SM_I","amperes","12","sprintf","%5.4f","Control Moment Gyroscope (CMG)-4 Spin Motor Current (amps)","Control Moment Gyroscope (CMG)-4 Spin Motor Current (amps). Commanded current of the CMG-4 Spin Motor, used to control the wheel speed.")
{
}

