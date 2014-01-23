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

#include "USLAB000035.h"

const USLAB000035 USLAB000035::I;

USLAB000035::USLAB000035()
    : ISSLSchematic("USLAB000035","TOPO","GNC_DX","m/s","12","sprintf","%5.4f","US Guidance, Navigation and Control (GNC) J2000 Propagated State Vector - X (m/s)","US Guidance, Navigation and Control (GNC) J2000 Propagated State Vector - X (m/s). The X-component of the ISS velocity in the J2000 reference frame, a component of the state vector.")
{
}

