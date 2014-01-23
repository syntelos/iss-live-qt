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

#include "ADCO.h"

#include "Z1000001.h"
#include "Z1000002.h"
#include "Z1000003.h"
#include "Z1000004.h"
#include "Z1000005.h"
#include "Z1000006.h"
#include "Z1000007.h"
#include "Z1000008.h"
#include "Z1000009.h"
#include "Z1000010.h"
#include "Z1000011.h"
#include "Z1000012.h"
#include "USLAB000001.h"
#include "USLAB000002.h"
#include "USLAB000003.h"
#include "USLAB000004.h"
#include "USLAB000005.h"
#include "USLAB000006.h"
#include "USLAB000007.h"
#include "USLAB000008.h"
#include "USLAB000009.h"
#include "USLAB000011.h"
#include "USLAB000013.h"
#include "USLAB000014.h"
#include "USLAB000015.h"
#include "USLAB000016.h"
#include "USLAB000017.h"
#include "USLAB000018.h"
#include "USLAB000019.h"
#include "USLAB000020.h"
#include "USLAB000021.h"
#include "USLAB000022.h"
#include "USLAB000023.h"
#include "USLAB000024.h"
#include "USLAB000025.h"
#include "USLAB000026.h"
#include "USLAB000027.h"
#include "USLAB000028.h"
#include "USLAB000029.h"
#include "USLAB000030.h"
#include "USLAB000031.h"
#include "USLAB000038.h"
#include "USLAB000039.h"
#include "USLAB000040.h"
#include "USLAB000041.h"
#include "USLAB000042.h"
#include "USLAB000043.h"
#include "USLAB000044.h"
#include "USLAB000045.h"
#include "USLAB000046.h"
#include "USLAB000047.h"
#include "USLAB000048.h"
#include "USLAB000049.h"
#include "USLAB000050.h"
#include "USLAB000051.h"
#include "USLAB000052.h"

const ADCO ADCO::I;

const ISSLSchema::Type ADCO::Set[] = {
    ISSLSchema::TypeZ1000001,
    ISSLSchema::TypeZ1000002,
    ISSLSchema::TypeZ1000003,
    ISSLSchema::TypeZ1000004,
    ISSLSchema::TypeZ1000005,
    ISSLSchema::TypeZ1000006,
    ISSLSchema::TypeZ1000007,
    ISSLSchema::TypeZ1000008,
    ISSLSchema::TypeZ1000009,
    ISSLSchema::TypeZ1000010,
    ISSLSchema::TypeZ1000011,
    ISSLSchema::TypeZ1000012,
    ISSLSchema::TypeUSLAB000001,
    ISSLSchema::TypeUSLAB000002,
    ISSLSchema::TypeUSLAB000003,
    ISSLSchema::TypeUSLAB000004,
    ISSLSchema::TypeUSLAB000005,
    ISSLSchema::TypeUSLAB000006,
    ISSLSchema::TypeUSLAB000007,
    ISSLSchema::TypeUSLAB000008,
    ISSLSchema::TypeUSLAB000009,
    ISSLSchema::TypeUSLAB000011,
    ISSLSchema::TypeUSLAB000013,
    ISSLSchema::TypeUSLAB000014,
    ISSLSchema::TypeUSLAB000015,
    ISSLSchema::TypeUSLAB000016,
    ISSLSchema::TypeUSLAB000017,
    ISSLSchema::TypeUSLAB000018,
    ISSLSchema::TypeUSLAB000019,
    ISSLSchema::TypeUSLAB000020,
    ISSLSchema::TypeUSLAB000021,
    ISSLSchema::TypeUSLAB000022,
    ISSLSchema::TypeUSLAB000023,
    ISSLSchema::TypeUSLAB000024,
    ISSLSchema::TypeUSLAB000025,
    ISSLSchema::TypeUSLAB000026,
    ISSLSchema::TypeUSLAB000027,
    ISSLSchema::TypeUSLAB000028,
    ISSLSchema::TypeUSLAB000029,
    ISSLSchema::TypeUSLAB000030,
    ISSLSchema::TypeUSLAB000031,
    ISSLSchema::TypeUSLAB000038,
    ISSLSchema::TypeUSLAB000039,
    ISSLSchema::TypeUSLAB000040,
    ISSLSchema::TypeUSLAB000041,
    ISSLSchema::TypeUSLAB000042,
    ISSLSchema::TypeUSLAB000043,
    ISSLSchema::TypeUSLAB000044,
    ISSLSchema::TypeUSLAB000045,
    ISSLSchema::TypeUSLAB000046,
    ISSLSchema::TypeUSLAB000047,
    ISSLSchema::TypeUSLAB000048,
    ISSLSchema::TypeUSLAB000049,
    ISSLSchema::TypeUSLAB000050,
    ISSLSchema::TypeUSLAB000051,
    ISSLSchema::TypeUSLAB000052,
};
const uint ADCO::Count = 56
;
ADCO::ADCO()
    : ISSLConsole("ADCO")
{
}

QList<ISSLSchematic> ADCO::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString ADCO::join(const QString& sep) const {
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

