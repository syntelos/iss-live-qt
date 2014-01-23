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

#include "USLAB000004.h"

const USLAB000004 USLAB000004::I;

USLAB000004::USLAB000004()
    : ISSLSchematic("USLAB000004","ADCO","CMG4","event","64","enum","0=NOT IN USE|1=IN USE","Control Moment Gyroscope (CMG)-4 On-Line","Control Moment Gyroscope (CMG)-4 On-Line. Status flag indicating that CMG-4 is in active use for attitude control by the GNC software when the U.S. segment is in active control of the ISS.")
{
}

