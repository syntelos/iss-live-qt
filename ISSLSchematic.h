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
#ifndef _ISSL_ISSLSchematic_H
#define _ISSL_ISSLSchematic_H

/*!
 * 
 */
struct ISSLSchematic {

    const char *name, *console, *tmtc, *units, *columns, *formattype, *format, *desc_short, *desc_long;

    ISSLSchematic(const char* name, const char* console, const char* tmtc, const char* units, const char* columns, const char* formattype, const char* format, const char* desc_short, const char* desc_long)

        : name(name), console(console), tmtc(tmtc), units(units), 
          columns(columns), formattype(formattype), format(format), 
          desc_short(desc_short), desc_long(desc_long)
    {
    }
};
#endif
