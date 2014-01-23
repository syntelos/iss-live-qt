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

const ISSLSchematic CRONUS::Set[] = {
    P1000004::I,
    P1000005::I,
    P1000006::I,
    P1000007::I,
    P1000008::I,
    P1000009::I,
    P3000001::I,
    P3000002::I,
    P4000003::I,
    P4000006::I,
    P6000003::I,
    P6000006::I,
    S0000010::I,
    S0000011::I,
    S0000012::I,
    S0000013::I,
    S1000004::I,
    S1000006::I,
    S1000007::I,
    S1000008::I,
    S1000009::I,
    S3000001::I,
    S3000002::I,
    S4000003::I,
    S4000006::I,
    S6000003::I,
    S6000006::I,
    Z1000013::I,
    Z1000014::I,
    Z1000015::I,
    NODE1000001::I,
    NODE1000002::I,
    NODE2000004::I,
    NODE2000005::I,
    NODE3000014::I,
    NODE3000015::I,
    NODE3000016::I,
    NODE3000020::I,
    AIRLOCK000058::I,
    USLAB000066::I,
    USLAB000067::I,
    USLAB000068::I,
    USLAB000069::I,
    USLAB000070::I,
    USLAB000071::I,
    USLAB000072::I,
    USLAB000073::I,
    USLAB000074::I,
    USLAB000075::I,
    USLAB000076::I,
    USLAB000077::I,
    USLAB000078::I,
    USLAB000079::I,
    USLAB000080::I,
    USLAB000082::I,
    USLAB000083::I,
    USLAB000084::I,
    USLAB000085::I,
    USLAB000087::I,
    USLAB000088::I,
    USLAB000089::I,
    USLAB000090::I,
    USLAB000091::I,
    USLAB000092::I,
    USLAB000093::I,
    USLAB000094::I,
    USLAB000095::I,
    USLAB000096::I,
    USLAB000097::I,
    USLAB000098::I,
    USLAB000099::I,
    USLAB000100::I,
    USLAB000101::I,
};
const uint CRONUS::Count = 73
;
CRONUS::CRONUS()
    : ISSLConsole("CRONUS")
{
}

QList<ISSLSchematic> CRONUS::schematic(){
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString CRONUS::join(const QString& sep){
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

