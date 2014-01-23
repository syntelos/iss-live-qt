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

#include "USLAB000017.h"

const USLAB000017 USLAB000017::I;

USLAB000017::USLAB000017()
    : ISSLSchematic("USLAB000017","ADCO","ATT_CTL_REF","event","64","enum","0=LVLH|1=Inertial|2=XPOP","Attitude Control Reference Frame","Attitude Control Reference Frame. The reference set of axes to which the orientation of the ISS is controlled. LVLH refers to local vertical-local horizontal, similar to an airplane frame of reference with the ground below and the front facing along direction of travel. Inertial refers to the J2000 coordinate system located at the center of the earth and fixed with respect to the stars. XPOP, or X-axis Perpendicular to Orbital Plane, refers to a retired reference frame that was used during previous configurations of the ISS electrical power system.")
{
}

