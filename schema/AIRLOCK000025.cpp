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

#include "AIRLOCK000025.h"

const AIRLOCK000025 AIRLOCK000025::I;

AIRLOCK000025::AIRLOCK000025()
    : ISSLSchematic("AIRLOCK000025","EVA","ARL_BCA1_CH3","event","64","enum","0=No History - a charge has not been initiated yet|1=Presently charging|2=Task completed normally|3=Task terminated due to stop switch being toggled|4=Task terminated due to an open circuit error|5=Task terminated due to Wrong Batt or Hi-imp|6=Task terminated due to an over-temperature error|7=Amp-hour capacity test result OK|8=Amp-hour capacity test error|9=Task terminated due to low charge slope error|10=Task terminated due to power error|11=Task terminated due to reverse-polarity error|12=Task terminated due to a short-circuit error|13=Task terminated due to a time-out error|14=Task terminated due to an external-temperature error|15=Discharge|16=Wait on Discharge|17=Wait on Charge","Battery Charger Assembly (BCA) 1 Channel 3 Status","Battery Charger Assembly (BCA) 1 Channel 3 Status")
{
}

