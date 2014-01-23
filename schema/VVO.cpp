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

#include "VVO.h"

#include "S0000001.h"
#include "S0000002.h"
#include "S0000003.h"
#include "S0000004.h"
#include "S0000005.h"
#include "S0000006.h"
#include "S0000007.h"
#include "S0000008.h"
#include "S0000009.h"
#include "S1000005.h"
#include "USLAB000010.h"
#include "USLAB000012.h"
#include "USLAB000081.h"
#include "USLAB000086.h"

const VVO VVO::I;

const ISSLSchematic VVO::Set[] = {
    S0000001::I,
    S0000002::I,
    S0000003::I,
    S0000004::I,
    S0000005::I,
    S0000006::I,
    S0000007::I,
    S0000008::I,
    S0000009::I,
    S1000005::I,
    USLAB000010::I,
    USLAB000012::I,
    USLAB000081::I,
    USLAB000086::I,
};
const uint VVO::Count = 14
;
VVO::VVO()
    : ISSLConsole("VVO")
{
}

QList<ISSLSchematic> VVO::schematic(){
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString VVO::join(const QString& sep){
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

