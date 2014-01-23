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

#include "USLAB000009.h"

const USLAB000009 USLAB000009::I;

USLAB000009::USLAB000009()
    : ISSLSchematic("USLAB000009","ADCO","ACMG_MOM","Nms","12","sprintf","%5.4f","Active Control Moment Gyroscope (CMG) Momentum (Nms)","Active Control Moment Gyroscope (CMG) Momentum (Nms). The magnitude of the cumulative momentum vector produced by the on-line CMGs. Momentum increases as the CMGs exert a torque in a single direction over a period of time.")
{
}

