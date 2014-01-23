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

const ISSLSchematic ADCO::Set[] = {
    Z1000001::I,
    Z1000002::I,
    Z1000003::I,
    Z1000004::I,
    Z1000005::I,
    Z1000006::I,
    Z1000007::I,
    Z1000008::I,
    Z1000009::I,
    Z1000010::I,
    Z1000011::I,
    Z1000012::I,
    USLAB000001::I,
    USLAB000002::I,
    USLAB000003::I,
    USLAB000004::I,
    USLAB000005::I,
    USLAB000006::I,
    USLAB000007::I,
    USLAB000008::I,
    USLAB000009::I,
    USLAB000011::I,
    USLAB000013::I,
    USLAB000014::I,
    USLAB000015::I,
    USLAB000016::I,
    USLAB000017::I,
    USLAB000018::I,
    USLAB000019::I,
    USLAB000020::I,
    USLAB000021::I,
    USLAB000022::I,
    USLAB000023::I,
    USLAB000024::I,
    USLAB000025::I,
    USLAB000026::I,
    USLAB000027::I,
    USLAB000028::I,
    USLAB000029::I,
    USLAB000030::I,
    USLAB000031::I,
    USLAB000038::I,
    USLAB000039::I,
    USLAB000040::I,
    USLAB000041::I,
    USLAB000042::I,
    USLAB000043::I,
    USLAB000044::I,
    USLAB000045::I,
    USLAB000046::I,
    USLAB000047::I,
    USLAB000048::I,
    USLAB000049::I,
    USLAB000050::I,
    USLAB000051::I,
    USLAB000052::I,
};
const uint ADCO::Count = 56
;
ADCO::ADCO()
    : ISSLConsole("ADCO")
{
}

QList<ISSLSchematic> ADCO::schematic(){
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString ADCO::join(const QString& sep){
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

