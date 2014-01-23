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

#include "EVA.h"

#include "AIRLOCK000001.h"
#include "AIRLOCK000002.h"
#include "AIRLOCK000003.h"
#include "AIRLOCK000004.h"
#include "AIRLOCK000005.h"
#include "AIRLOCK000006.h"
#include "AIRLOCK000007.h"
#include "AIRLOCK000008.h"
#include "AIRLOCK000009.h"
#include "AIRLOCK000010.h"
#include "AIRLOCK000011.h"
#include "AIRLOCK000012.h"
#include "AIRLOCK000013.h"
#include "AIRLOCK000014.h"
#include "AIRLOCK000015.h"
#include "AIRLOCK000016.h"
#include "AIRLOCK000017.h"
#include "AIRLOCK000018.h"
#include "AIRLOCK000019.h"
#include "AIRLOCK000020.h"
#include "AIRLOCK000021.h"
#include "AIRLOCK000022.h"
#include "AIRLOCK000023.h"
#include "AIRLOCK000024.h"
#include "AIRLOCK000025.h"
#include "AIRLOCK000026.h"
#include "AIRLOCK000027.h"
#include "AIRLOCK000028.h"
#include "AIRLOCK000029.h"
#include "AIRLOCK000030.h"
#include "AIRLOCK000031.h"
#include "AIRLOCK000032.h"
#include "AIRLOCK000033.h"
#include "AIRLOCK000034.h"
#include "AIRLOCK000035.h"
#include "AIRLOCK000036.h"
#include "AIRLOCK000037.h"
#include "AIRLOCK000038.h"
#include "AIRLOCK000039.h"
#include "AIRLOCK000040.h"
#include "AIRLOCK000041.h"
#include "AIRLOCK000042.h"
#include "AIRLOCK000043.h"
#include "AIRLOCK000044.h"
#include "AIRLOCK000045.h"
#include "AIRLOCK000046.h"
#include "AIRLOCK000047.h"
#include "AIRLOCK000048.h"

const EVA EVA::I;

const ISSLSchema::Type EVA::Set[] = {
    ISSLSchema::TypeAIRLOCK000001,
    ISSLSchema::TypeAIRLOCK000002,
    ISSLSchema::TypeAIRLOCK000003,
    ISSLSchema::TypeAIRLOCK000004,
    ISSLSchema::TypeAIRLOCK000005,
    ISSLSchema::TypeAIRLOCK000006,
    ISSLSchema::TypeAIRLOCK000007,
    ISSLSchema::TypeAIRLOCK000008,
    ISSLSchema::TypeAIRLOCK000009,
    ISSLSchema::TypeAIRLOCK000010,
    ISSLSchema::TypeAIRLOCK000011,
    ISSLSchema::TypeAIRLOCK000012,
    ISSLSchema::TypeAIRLOCK000013,
    ISSLSchema::TypeAIRLOCK000014,
    ISSLSchema::TypeAIRLOCK000015,
    ISSLSchema::TypeAIRLOCK000016,
    ISSLSchema::TypeAIRLOCK000017,
    ISSLSchema::TypeAIRLOCK000018,
    ISSLSchema::TypeAIRLOCK000019,
    ISSLSchema::TypeAIRLOCK000020,
    ISSLSchema::TypeAIRLOCK000021,
    ISSLSchema::TypeAIRLOCK000022,
    ISSLSchema::TypeAIRLOCK000023,
    ISSLSchema::TypeAIRLOCK000024,
    ISSLSchema::TypeAIRLOCK000025,
    ISSLSchema::TypeAIRLOCK000026,
    ISSLSchema::TypeAIRLOCK000027,
    ISSLSchema::TypeAIRLOCK000028,
    ISSLSchema::TypeAIRLOCK000029,
    ISSLSchema::TypeAIRLOCK000030,
    ISSLSchema::TypeAIRLOCK000031,
    ISSLSchema::TypeAIRLOCK000032,
    ISSLSchema::TypeAIRLOCK000033,
    ISSLSchema::TypeAIRLOCK000034,
    ISSLSchema::TypeAIRLOCK000035,
    ISSLSchema::TypeAIRLOCK000036,
    ISSLSchema::TypeAIRLOCK000037,
    ISSLSchema::TypeAIRLOCK000038,
    ISSLSchema::TypeAIRLOCK000039,
    ISSLSchema::TypeAIRLOCK000040,
    ISSLSchema::TypeAIRLOCK000041,
    ISSLSchema::TypeAIRLOCK000042,
    ISSLSchema::TypeAIRLOCK000043,
    ISSLSchema::TypeAIRLOCK000044,
    ISSLSchema::TypeAIRLOCK000045,
    ISSLSchema::TypeAIRLOCK000046,
    ISSLSchema::TypeAIRLOCK000047,
    ISSLSchema::TypeAIRLOCK000048,
};
const uint EVA::Count = 48
;
EVA::EVA()
    : ISSLConsole("EVA")
{
}

QList<ISSLSchematic> EVA::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString EVA::join(const QString& sep) const {
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

