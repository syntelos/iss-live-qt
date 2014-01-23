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

#include "USLAB000014.h"

const USLAB000014 USLAB000014::I;

USLAB000014::USLAB000014()
    : ISSLSchematic("USLAB000014","ADCO","RATE_SRC","event","64","enum","0=NONE|1=RGA1|2=RGA2|3=RUSSIAN","US Rate Source","US Rate Source. The selected source of angular rate data to the GNC software, which is used to propagate attitude between updates. Options are RGA 1 or RGA 2 (redundant rate sensors which calculate rate using ring laser gyroscopes), or Russian (angular rate data calculated on the Russian Segment).")
{
}

