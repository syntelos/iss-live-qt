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

#include "AIRLOCK000009.h"

const AIRLOCK000009 AIRLOCK000009::I;

AIRLOCK000009::AIRLOCK000009()
    : ISSLSchematic("AIRLOCK000009","EVA","ARL_EMU2_V","volts","12","sprintf","%5.4f","Supplies power to the spacesuits (EVA Mobility Unit, EMU 2), Voltage","Supplies power to the spacesuits (EVA Mobility Unit = EMU s).")
{
}

