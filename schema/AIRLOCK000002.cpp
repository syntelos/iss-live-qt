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

#include "AIRLOCK000002.h"

const AIRLOCK000002 AIRLOCK000002::I;

AIRLOCK000002::AIRLOCK000002()
    : ISSLSchematic("AIRLOCK000002","EVA","ARL_UIA1_I","amperes","12","sprintf","%5.4f","Supplies power through the Umbilical Interface Assembly (UIA) to the spacesuits (EMU 1), Current","Supplies power through the Umbilical Interface Assembly (UIA) to the spacesuits (EMU s) and the In-flight Refill Unit (IRU).")
{
}

