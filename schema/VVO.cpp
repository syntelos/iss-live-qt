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

const ISSLSchema::Type VVO::Set[] = {
    ISSLSchema::TypeS0000001,
    ISSLSchema::TypeS0000002,
    ISSLSchema::TypeS0000003,
    ISSLSchema::TypeS0000004,
    ISSLSchema::TypeS0000005,
    ISSLSchema::TypeS0000006,
    ISSLSchema::TypeS0000007,
    ISSLSchema::TypeS0000008,
    ISSLSchema::TypeS0000009,
    ISSLSchema::TypeS1000005,
    ISSLSchema::TypeUSLAB000010,
    ISSLSchema::TypeUSLAB000012,
    ISSLSchema::TypeUSLAB000081,
    ISSLSchema::TypeUSLAB000086,
};
const uint VVO::Count = 14
;
VVO::VVO()
    : ISSLConsole("VVO")
{
}

QList<ISSLSchematic> VVO::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString VVO::join(const QString& sep) const {
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        if (0 != cc)
            re += sep;
        re += sch.name;
    }
    return re;
}

