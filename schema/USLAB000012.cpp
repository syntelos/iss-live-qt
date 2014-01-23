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

#include "USLAB000012.h"

const USLAB000012 USLAB000012::I;

USLAB000012::USLAB000012()
    : ISSLSchematic("USLAB000012","VVO","GNC_M","event","64","enum","0=Default|1=WAIT|2=RESERVED|3=STANDBY|4=CMG ATTITUDE CONTROL|5=CMG THRUSTER ASSIST|6=USER DATA GENERATION|7=FREEDRIFT","US Guidance, Navigation and Control (GNC) Mode","US Guidance, Navigation and Control (GNC) Mode The US GNC computer control mode status that defines which functions are available.  CMG Thruster Assist (CMG TA): the CMGs are used to provide attitude control of the ISS and RS thrusters are available to provide CMG desaturation torques. Drift: used to actively minimize the effects of the CMGs on the ISS so that no torques are created. Wait: nominal mode of the backup GNC computer in which the software is running but most of the functions are on hold. User Data Generation (UDG): the GNC provides pointing data for other systems but does not provide attitude control. CMG Only: the CMGs are used to provide attitude control of the ISS but RS thrusters are unavailable to provide CMG desaturation torques. Standby: a configuration mode to prepare the GNC computer for providing pointing data and attitude control.")
{
}

