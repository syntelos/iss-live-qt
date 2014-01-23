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

#include "TOPO.h"

#include "USLAB000032.h"
#include "USLAB000033.h"
#include "USLAB000034.h"
#include "USLAB000035.h"
#include "USLAB000036.h"
#include "USLAB000037.h"
#include "USLAB000102.h"

const TOPO TOPO::I;

const ISSLSchematic TOPO::Set[] = {
    USLAB000032::I,
    USLAB000033::I,
    USLAB000034::I,
    USLAB000035::I,
    USLAB000036::I,
    USLAB000037::I,
    USLAB000102::I,
};
const uint TOPO::Count = 7
;
TOPO::TOPO()
    : ISSLConsole("TOPO")
{
}

QList<ISSLSchematic> TOPO::schematic() const {
    QList<ISSLSchematic> re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        re += Set[cc];
    }
    return re;
}

QString TOPO::join(const QString& sep) const {
    QString re;
    uint cc;
    for (cc = 0; cc < Count; cc++){
        if (0 != cc)
            re += sep;
        re += Set[cc].name;
    }
    return re;
}

