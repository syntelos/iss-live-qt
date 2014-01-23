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

#include "ETHOS.h"

#include "NODE2000001.h"
#include "NODE2000002.h"
#include "NODE2000003.h"
#include "NODE2000006.h"
#include "NODE2000007.h"
#include "NODE3000001.h"
#include "NODE3000002.h"
#include "NODE3000003.h"
#include "NODE3000004.h"
#include "NODE3000005.h"
#include "NODE3000006.h"
#include "NODE3000007.h"
#include "NODE3000008.h"
#include "NODE3000009.h"
#include "NODE3000010.h"
#include "NODE3000011.h"
#include "NODE3000012.h"
#include "NODE3000013.h"
#include "NODE3000017.h"
#include "NODE3000018.h"
#include "NODE3000019.h"
#include "AIRLOCK000049.h"
#include "AIRLOCK000050.h"
#include "AIRLOCK000051.h"
#include "AIRLOCK000052.h"
#include "AIRLOCK000053.h"
#include "AIRLOCK000054.h"
#include "AIRLOCK000055.h"
#include "AIRLOCK000056.h"
#include "AIRLOCK000057.h"
#include "USLAB000053.h"
#include "USLAB000054.h"
#include "USLAB000055.h"
#include "USLAB000056.h"
#include "USLAB000057.h"
#include "USLAB000058.h"
#include "USLAB000059.h"
#include "USLAB000060.h"
#include "USLAB000061.h"
#include "USLAB000062.h"
#include "USLAB000063.h"
#include "USLAB000064.h"
#include "USLAB000065.h"

const ETHOS ETHOS::I;

const ISSLSchema::Type ETHOS::Set[] = {
    ISSLSchema::TypeNODE2000001,
    ISSLSchema::TypeNODE2000002,
    ISSLSchema::TypeNODE2000003,
    ISSLSchema::TypeNODE2000006,
    ISSLSchema::TypeNODE2000007,
    ISSLSchema::TypeNODE3000001,
    ISSLSchema::TypeNODE3000002,
    ISSLSchema::TypeNODE3000003,
    ISSLSchema::TypeNODE3000004,
    ISSLSchema::TypeNODE3000005,
    ISSLSchema::TypeNODE3000006,
    ISSLSchema::TypeNODE3000007,
    ISSLSchema::TypeNODE3000008,
    ISSLSchema::TypeNODE3000009,
    ISSLSchema::TypeNODE3000010,
    ISSLSchema::TypeNODE3000011,
    ISSLSchema::TypeNODE3000012,
    ISSLSchema::TypeNODE3000013,
    ISSLSchema::TypeNODE3000017,
    ISSLSchema::TypeNODE3000018,
    ISSLSchema::TypeNODE3000019,
    ISSLSchema::TypeAIRLOCK000049,
    ISSLSchema::TypeAIRLOCK000050,
    ISSLSchema::TypeAIRLOCK000051,
    ISSLSchema::TypeAIRLOCK000052,
    ISSLSchema::TypeAIRLOCK000053,
    ISSLSchema::TypeAIRLOCK000054,
    ISSLSchema::TypeAIRLOCK000055,
    ISSLSchema::TypeAIRLOCK000056,
    ISSLSchema::TypeAIRLOCK000057,
    ISSLSchema::TypeUSLAB000053,
    ISSLSchema::TypeUSLAB000054,
    ISSLSchema::TypeUSLAB000055,
    ISSLSchema::TypeUSLAB000056,
    ISSLSchema::TypeUSLAB000057,
    ISSLSchema::TypeUSLAB000058,
    ISSLSchema::TypeUSLAB000059,
    ISSLSchema::TypeUSLAB000060,
    ISSLSchema::TypeUSLAB000061,
    ISSLSchema::TypeUSLAB000062,
    ISSLSchema::TypeUSLAB000063,
    ISSLSchema::TypeUSLAB000064,
    ISSLSchema::TypeUSLAB000065,
};
const uint ETHOS::Count = 43
;
ETHOS::ETHOS()
    : ISSLConsole("ETHOS")
{
}

QList<ISSLSchematic> ETHOS::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString ETHOS::join(const QString& sep) const {
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

