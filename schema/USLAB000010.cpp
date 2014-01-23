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

#include "USLAB000010.h"

const USLAB000010 USLAB000010::I;

USLAB000010::USLAB000010()
    : ISSLSchematic("USLAB000010","VVO","CMG_MOM_PC","percent","12","sprintf","%5.4f","Control Moment Gyroscope (CMG) Momentum Percentage (%)","Control Moment Gyroscope (CMG) Momentum Percentage (%). Percentage of the total CMG momentum capacity currently utilized by GNC software.  This parameter provides insight to the amount of margin remaining for maintaining US attitude control.")
{
}

