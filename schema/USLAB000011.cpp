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

#include "USLAB000011.h"

const USLAB000011 USLAB000011::I;

USLAB000011::USLAB000011()
    : ISSLSchematic("USLAB000011","ADCO","DESAT_Q","event","64","enum","0=ENABLED|1=INHIBITED","Desaturation Request (Enabled/Inhibited)","Desaturation Request (Enabled/Inhibited). Provides status of whether desaturation thruster firings are permitted.  Desaturations help prevent the CMG system from saturation, or 100% momentum percentage, by reducing the active CMG momentum.")
{
}

