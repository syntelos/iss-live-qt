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

#include <cstring>

#include "ISSLConsole.h"

ISSLConsole::ISSLConsole(const char* name)
    : name(name)
{
}

#include "EVA.h"
#include "ADCO.h"
#include "TOPO.h"
#include "CRONUS.h"
#include "SPARTAN.h"
#include "VVO.h"
#include "NA.h"
#include "ETHOS.h"

ISSLConsole::Type ISSLConsole::TypeOf(const char* name){
    if (0 == strcmp("EVA",name))
        return ISSLConsole::TypeEVA;
    else if (0 == strcmp("ADCO",name))
        return ISSLConsole::TypeADCO;
    else if (0 == strcmp("TOPO",name))
        return ISSLConsole::TypeTOPO;
    else if (0 == strcmp("CRONUS",name))
        return ISSLConsole::TypeCRONUS;
    else if (0 == strcmp("SPARTAN",name))
        return ISSLConsole::TypeSPARTAN;
    else if (0 == strcmp("VVO",name))
        return ISSLConsole::TypeVVO;
    else if (0 == strcmp("NA",name))
        return ISSLConsole::TypeNA;
    else if (0 == strcmp("ETHOS",name))
        return ISSLConsole::TypeETHOS;
    else 
        return ISSLConsole::TypeUnknown;
}

const ISSLConsole& ISSLConsole::For(ISSLConsole::Type type){
    switch(type){
    case ISSLConsole::TypeEVA:
        return EVA::I;
    case ISSLConsole::TypeADCO:
        return ADCO::I;
    case ISSLConsole::TypeTOPO:
        return TOPO::I;
    case ISSLConsole::TypeCRONUS:
        return CRONUS::I;
    case ISSLConsole::TypeSPARTAN:
        return SPARTAN::I;
    case ISSLConsole::TypeVVO:
        return VVO::I;
    case ISSLConsole::TypeNA:
        return NA::I;
    default:
        return ETHOS::I;
    }
}

