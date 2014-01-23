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

#include "USLAB000007.h"

const USLAB000007 USLAB000007::I;

USLAB000007::USLAB000007()
    : ISSLSchematic("USLAB000007","ADCO","CMG_CT_P","N-m","12","sprintf","%5.4f","Control Moment Gyroscope (CMG) Control Torque - Pitch (N-m)","Control Moment Gyroscope (CMG) Control Torque - Pitch (N-m). The commanded control torque requested by GNC software in the pitch axis of the ISS.")
{
}

