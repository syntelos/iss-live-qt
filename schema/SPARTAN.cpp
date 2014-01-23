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

const ISSLSchema::Type SPARTAN::Set[] = {
    ISSLSchema::TypeP1000001,
    ISSLSchema::TypeP1000002,
    ISSLSchema::TypeP1000003,
    ISSLSchema::TypeP4000001,
    ISSLSchema::TypeP4000002,
    ISSLSchema::TypeP4000004,
    ISSLSchema::TypeP4000005,
    ISSLSchema::TypeP4000007,
    ISSLSchema::TypeP4000008,
    ISSLSchema::TypeP6000001,
    ISSLSchema::TypeP6000002,
    ISSLSchema::TypeP6000004,
    ISSLSchema::TypeP6000005,
    ISSLSchema::TypeP6000007,
    ISSLSchema::TypeP6000008,
    ISSLSchema::TypeS1000001,
    ISSLSchema::TypeS1000002,
    ISSLSchema::TypeS1000003,
    ISSLSchema::TypeS4000001,
    ISSLSchema::TypeS4000002,
    ISSLSchema::TypeS4000004,
    ISSLSchema::TypeS4000005,
    ISSLSchema::TypeS4000007,
    ISSLSchema::TypeS4000008,
    ISSLSchema::TypeS6000001,
    ISSLSchema::TypeS6000002,
    ISSLSchema::TypeS6000004,
    ISSLSchema::TypeS6000005,
    ISSLSchema::TypeS6000007,
    ISSLSchema::TypeS6000008,
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
        ISSLSchematic sch = ISSLSchema::For(Set[cc]);
        re += sch;
    }
    return re;
}

QString SPARTAN::join(const QString& sep) const {
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

