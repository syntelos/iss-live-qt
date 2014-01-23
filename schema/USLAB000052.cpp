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

#include "USLAB000052.h"

const USLAB000052 USLAB000052::I;

USLAB000052::USLAB000052()
    : ISSLSchematic("USLAB000052","ADCO","CMG4_HRSB_TEMP","celcius","12","sprintf","%5.4f","Hall Resolver Spin Bearing Temperature - Control Moment Gyroscope (CMG) 4 (deg C)","Hall Resolver Spin Bearing Temperature - Control Moment Gyroscope (CMG) 4 (deg C). Temperature measured on the sensor side of the CMG 4 flywheel spin bearing.")
{
}

