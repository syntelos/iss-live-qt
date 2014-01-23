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

const ISSLSchematic ETHOS::Set[] = {
    NODE2000001::I,
    NODE2000002::I,
    NODE2000003::I,
    NODE2000006::I,
    NODE2000007::I,
    NODE3000001::I,
    NODE3000002::I,
    NODE3000003::I,
    NODE3000004::I,
    NODE3000005::I,
    NODE3000006::I,
    NODE3000007::I,
    NODE3000008::I,
    NODE3000009::I,
    NODE3000010::I,
    NODE3000011::I,
    NODE3000012::I,
    NODE3000013::I,
    NODE3000017::I,
    NODE3000018::I,
    NODE3000019::I,
    AIRLOCK000049::I,
    AIRLOCK000050::I,
    AIRLOCK000051::I,
    AIRLOCK000052::I,
    AIRLOCK000053::I,
    AIRLOCK000054::I,
    AIRLOCK000055::I,
    AIRLOCK000056::I,
    AIRLOCK000057::I,
    USLAB000053::I,
    USLAB000054::I,
    USLAB000055::I,
    USLAB000056::I,
    USLAB000057::I,
    USLAB000058::I,
    USLAB000059::I,
    USLAB000060::I,
    USLAB000061::I,
    USLAB000062::I,
    USLAB000063::I,
    USLAB000064::I,
    USLAB000065::I,
};
const uint ETHOS::Count = 43
;
ETHOS::ETHOS()
    : ISSLConsole("ETHOS")
{
}

QList<ISSLSchematic> ETHOS::schematic(){
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString ETHOS::join(const QString& sep){
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

