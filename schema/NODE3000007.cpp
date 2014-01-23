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

#include "NODE3000007.h"

const NODE3000007 NODE3000007::I;

NODE3000007::NODE3000007()
    : ISSLSchematic("NODE3000007","ETHOS","N3_H2O_STEP","event","64","enum","0=NONE|1=VENT|2=HEATUP|3=PURGE|4=FLOW|5=TEST|6=TEST_SV_1|7=TEST_SV_2|8=SERVICE","Water Processor Step","Water Processor Step. What the Water Processor is doing at this time.")
{
}

