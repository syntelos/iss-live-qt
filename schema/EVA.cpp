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

const ISSLSchematic EVA::Set[] = {
    AIRLOCK000001::I,
    AIRLOCK000002::I,
    AIRLOCK000003::I,
    AIRLOCK000004::I,
    AIRLOCK000005::I,
    AIRLOCK000006::I,
    AIRLOCK000007::I,
    AIRLOCK000008::I,
    AIRLOCK000009::I,
    AIRLOCK000010::I,
    AIRLOCK000011::I,
    AIRLOCK000012::I,
    AIRLOCK000013::I,
    AIRLOCK000014::I,
    AIRLOCK000015::I,
    AIRLOCK000016::I,
    AIRLOCK000017::I,
    AIRLOCK000018::I,
    AIRLOCK000019::I,
    AIRLOCK000020::I,
    AIRLOCK000021::I,
    AIRLOCK000022::I,
    AIRLOCK000023::I,
    AIRLOCK000024::I,
    AIRLOCK000025::I,
    AIRLOCK000026::I,
    AIRLOCK000027::I,
    AIRLOCK000028::I,
    AIRLOCK000029::I,
    AIRLOCK000030::I,
    AIRLOCK000031::I,
    AIRLOCK000032::I,
    AIRLOCK000033::I,
    AIRLOCK000034::I,
    AIRLOCK000035::I,
    AIRLOCK000036::I,
    AIRLOCK000037::I,
    AIRLOCK000038::I,
    AIRLOCK000039::I,
    AIRLOCK000040::I,
    AIRLOCK000041::I,
    AIRLOCK000042::I,
    AIRLOCK000043::I,
    AIRLOCK000044::I,
    AIRLOCK000045::I,
    AIRLOCK000046::I,
    AIRLOCK000047::I,
    AIRLOCK000048::I,
};
const uint EVA::Count = 48
;
EVA::EVA()
    : ISSLConsole("EVA")
{
}

QList<ISSLSchematic> EVA::schematic(){
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString EVA::join(const QString& sep){
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

