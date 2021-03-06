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
#ifndef _ISSL_ADCO_H
#define _ISSL_ADCO_H

#include <QList>
#include <QString>

#include "ISSLConsole.h"
#include "ISSLSchema.h"

/*!
 * 
 */
struct ADCO : public ISSLConsole {

    ADCO();

    static const ADCO I;

    virtual QList<ISSLSchematic> schematic() const;

    virtual QString join(const QString& sep) const;

 private:
    static const ISSLSchema::Type Set[];
    static const uint Count;
};
#endif
