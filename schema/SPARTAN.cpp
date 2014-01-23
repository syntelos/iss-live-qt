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

#include "SPARTAN.h"

#include "P1000001.h"
#include "P1000002.h"
#include "P1000003.h"
#include "P4000001.h"
#include "P4000002.h"
#include "P4000004.h"
#include "P4000005.h"
#include "P4000007.h"
#include "P4000008.h"
#include "P6000001.h"
#include "P6000002.h"
#include "P6000004.h"
#include "P6000005.h"
#include "P6000007.h"
#include "P6000008.h"
#include "S1000001.h"
#include "S1000002.h"
#include "S1000003.h"
#include "S4000001.h"
#include "S4000002.h"
#include "S4000004.h"
#include "S4000005.h"
#include "S4000007.h"
#include "S4000008.h"
#include "S6000001.h"
#include "S6000002.h"
#include "S6000004.h"
#include "S6000005.h"
#include "S6000007.h"
#include "S6000008.h"

const SPARTAN SPARTAN::I;

const ISSLSchematic SPARTAN::Set[] = {
    P1000001::I,
    P1000002::I,
    P1000003::I,
    P4000001::I,
    P4000002::I,
    P4000004::I,
    P4000005::I,
    P4000007::I,
    P4000008::I,
    P6000001::I,
    P6000002::I,
    P6000004::I,
    P6000005::I,
    P6000007::I,
    P6000008::I,
    S1000001::I,
    S1000002::I,
    S1000003::I,
    S4000001::I,
    S4000002::I,
    S4000004::I,
    S4000005::I,
    S4000007::I,
    S4000008::I,
    S6000001::I,
    S6000002::I,
    S6000004::I,
    S6000005::I,
    S6000007::I,
    S6000008::I,
};
const uint SPARTAN::Count = 30
;
SPARTAN::SPARTAN()
    : ISSLConsole("SPARTAN")
{
}

QList<ISSLSchematic> SPARTAN::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString SPARTAN::join(const QString& sep) const {
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

