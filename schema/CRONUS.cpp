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

#include "CRONUS.h"

#include "P1000004.h"
#include "P1000005.h"
#include "P1000006.h"
#include "P1000007.h"
#include "P1000008.h"
#include "P1000009.h"
#include "P3000001.h"
#include "P3000002.h"
#include "P4000003.h"
#include "P4000006.h"
#include "P6000003.h"
#include "P6000006.h"
#include "S0000010.h"
#include "S0000011.h"
#include "S0000012.h"
#include "S0000013.h"
#include "S1000004.h"
#include "S1000006.h"
#include "S1000007.h"
#include "S1000008.h"
#include "S1000009.h"
#include "S3000001.h"
#include "S3000002.h"
#include "S4000003.h"
#include "S4000006.h"
#include "S6000003.h"
#include "S6000006.h"
#include "Z1000013.h"
#include "Z1000014.h"
#include "Z1000015.h"
#include "NODE1000001.h"
#include "NODE1000002.h"
#include "NODE2000004.h"
#include "NODE2000005.h"
#include "NODE3000014.h"
#include "NODE3000015.h"
#include "NODE3000016.h"
#include "NODE3000020.h"
#include "AIRLOCK000058.h"
#include "USLAB000066.h"
#include "USLAB000067.h"
#include "USLAB000068.h"
#include "USLAB000069.h"
#include "USLAB000070.h"
#include "USLAB000071.h"
#include "USLAB000072.h"
#include "USLAB000073.h"
#include "USLAB000074.h"
#include "USLAB000075.h"
#include "USLAB000076.h"
#include "USLAB000077.h"
#include "USLAB000078.h"
#include "USLAB000079.h"
#include "USLAB000080.h"
#include "USLAB000082.h"
#include "USLAB000083.h"
#include "USLAB000084.h"
#include "USLAB000085.h"
#include "USLAB000087.h"
#include "USLAB000088.h"
#include "USLAB000089.h"
#include "USLAB000090.h"
#include "USLAB000091.h"
#include "USLAB000092.h"
#include "USLAB000093.h"
#include "USLAB000094.h"
#include "USLAB000095.h"
#include "USLAB000096.h"
#include "USLAB000097.h"
#include "USLAB000098.h"
#include "USLAB000099.h"
#include "USLAB000100.h"
#include "USLAB000101.h"

const CRONUS CRONUS::I;

const ISSLSchema::Type CRONUS::Set[] = {
    ISSLSchema::TypeP1000004,
    ISSLSchema::TypeP1000005,
    ISSLSchema::TypeP1000006,
    ISSLSchema::TypeP1000007,
    ISSLSchema::TypeP1000008,
    ISSLSchema::TypeP1000009,
    ISSLSchema::TypeP3000001,
    ISSLSchema::TypeP3000002,
    ISSLSchema::TypeP4000003,
    ISSLSchema::TypeP4000006,
    ISSLSchema::TypeP6000003,
    ISSLSchema::TypeP6000006,
    ISSLSchema::TypeS0000010,
    ISSLSchema::TypeS0000011,
    ISSLSchema::TypeS0000012,
    ISSLSchema::TypeS0000013,
    ISSLSchema::TypeS1000004,
    ISSLSchema::TypeS1000006,
    ISSLSchema::TypeS1000007,
    ISSLSchema::TypeS1000008,
    ISSLSchema::TypeS1000009,
    ISSLSchema::TypeS3000001,
    ISSLSchema::TypeS3000002,
    ISSLSchema::TypeS4000003,
    ISSLSchema::TypeS4000006,
    ISSLSchema::TypeS6000003,
    ISSLSchema::TypeS6000006,
    ISSLSchema::TypeZ1000013,
    ISSLSchema::TypeZ1000014,
    ISSLSchema::TypeZ1000015,
    ISSLSchema::TypeNODE1000001,
    ISSLSchema::TypeNODE1000002,
    ISSLSchema::TypeNODE2000004,
    ISSLSchema::TypeNODE2000005,
    ISSLSchema::TypeNODE3000014,
    ISSLSchema::TypeNODE3000015,
    ISSLSchema::TypeNODE3000016,
    ISSLSchema::TypeNODE3000020,
    ISSLSchema::TypeAIRLOCK000058,
    ISSLSchema::TypeUSLAB000066,
    ISSLSchema::TypeUSLAB000067,
    ISSLSchema::TypeUSLAB000068,
    ISSLSchema::TypeUSLAB000069,
    ISSLSchema::TypeUSLAB000070,
    ISSLSchema::TypeUSLAB000071,
    ISSLSchema::TypeUSLAB000072,
    ISSLSchema::TypeUSLAB000073,
    ISSLSchema::TypeUSLAB000074,
    ISSLSchema::TypeUSLAB000075,
    ISSLSchema::TypeUSLAB000076,
    ISSLSchema::TypeUSLAB000077,
    ISSLSchema::TypeUSLAB000078,
    ISSLSchema::TypeUSLAB000079,
    ISSLSchema::TypeUSLAB000080,
    ISSLSchema::TypeUSLAB000082,
    ISSLSchema::TypeUSLAB000083,
    ISSLSchema::TypeUSLAB000084,
    ISSLSchema::TypeUSLAB000085,
    ISSLSchema::TypeUSLAB000087,
    ISSLSchema::TypeUSLAB000088,
    ISSLSchema::TypeUSLAB000089,
    ISSLSchema::TypeUSLAB000090,
    ISSLSchema::TypeUSLAB000091,
    ISSLSchema::TypeUSLAB000092,
    ISSLSchema::TypeUSLAB000093,
    ISSLSchema::TypeUSLAB000094,
    ISSLSchema::TypeUSLAB000095,
    ISSLSchema::TypeUSLAB000096,
    ISSLSchema::TypeUSLAB000097,
    ISSLSchema::TypeUSLAB000098,
    ISSLSchema::TypeUSLAB000099,
    ISSLSchema::TypeUSLAB000100,
    ISSLSchema::TypeUSLAB000101,
};
const uint CRONUS::Count = 73
;
CRONUS::CRONUS()
    : ISSLConsole("CRONUS")
{
}

QList<ISSLSchematic> CRONUS::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString CRONUS::join(const QString& sep) const {
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

