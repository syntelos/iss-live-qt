
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Set;
import java.util.StringTokenizer;

/**
 * OPERATION
 * 
 * Generates the following files: ISSLSchematic.h, ISSLSchema.h,
 * ISSLSchema.cpp, ISSLConsole.h, ISSLConsole.cpp, and all of the H
 * and CPP files in the directory named "schema".
 * 
 * DESIGN NOTES
 * 
 * Generates object class types for telemetry symbols as a possible
 * (future) point of extension.  For example in parsing upstream data
 * objects or values.  It would be possible to use only enumerated
 * types, at the cost of (loosing) the binding to more complex
 * programming language objects.
 */
public class schema
{
    public final String name, console, tmtc, units, columns, formattype, format, desc_short, desc_long;

    public schema(String name, String console, String tmtc, String units, String columns, String formattype, String format, String desc_short, String desc_long){

        this.name = name;
        this.console = console;
        this.tmtc = tmtc;
        this.units = units;
        this.columns = columns;
        this.formattype = formattype;
        this.format = format;
        this.desc_short = desc_short;
        this.desc_long = desc_long;
    }


    public static void main(String[] argv){
        File schema = new File("schema.tsv");
        if (schema.exists()){

            PrintStream out;
            try {
                schema[] list;
                int count, term;
                String[] keys;

                ArrayList<schema> list_schema = new ArrayList();
                HashMap<String,schema[]> map_console = new HashMap();
                HashMap<String,schema[]> map_prefixes = new HashMap();

                DataInputStream in = new DataInputStream(new FileInputStream(schema));
                String linin;
                while (null != (linin = in.readLine())){

                    StringTokenizer strtok = new StringTokenizer(linin,"\t");

                    schema schematic = new schema(strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken(),strtok.nextToken());

                    list_schema.add(schematic);

                    schema[] console = map_console.get(schematic.console);
                    {
                        if (null == console)
                            console = new schema[]{schematic};
                        else {
                            int len = console.length;
                            schema[] copier = new schema[len+1];
                            System.arraycopy(console,0,copier,0,len);
                            copier[len] = schematic;
                            console = copier;
                        }
                        map_console.put(schematic.console,console);
                    }

                    String prefix = schematic.name.substring(0,1);
                    {
                        schema[] prefixes = map_prefixes.get(prefix);
                        if (null == prefixes)
                            prefixes = new schema[]{schematic};
                        else {
                            int len = prefixes.length;
                            schema[] copier = new schema[len+1];
                            System.arraycopy(prefixes,0,copier,0,len);
                            copier[len] = schematic;
                            prefixes = copier;
                        }
                        map_prefixes.put(prefix,prefixes);
                    }
                }
                in.close();
                /*
                 */
                File top_dir = new File(".");
                File schema_dir = new File("schema");
                File tgt;

                /*
                 */
                tgt = new File(top_dir,"ISSLSchematic.h");
                System.out.println(tgt);
                out = new PrintStream(new FileOutputStream(tgt));

                out.println("/*");
                out.println(" * ISS Live Qt");
                out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                out.println(" *");
                out.println(" * This program is free software: you can redistribute it and/or");
                out.println(" * modify it under the terms of the GNU Lesser General Public License");
                out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                out.println(" * version 3 of the License, or (at your option) any later version.");
                out.println(" *");
                out.println(" * This program is distributed in the hope that it will be useful, but");
                out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                out.println(" * and GPL for more details.");
                out.println(" *");
                out.println(" * You should have received a copy of the LGPL and GPL along with this");
                out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                out.println(" */");
                out.println("#ifndef _ISSL_ISSLSchematic_H");
                out.println("#define _ISSL_ISSLSchematic_H");
                out.println();
                out.println("/*!");
                out.println(" * ");
                out.println(" */");
                out.println("struct ISSLSchematic {");
                out.println();
                out.println("    const char *name, *console, *tmtc, *units, *columns, *formattype, *format, *desc_short, *desc_long;");
                out.println();
                out.println("    ISSLSchematic(const char* name, const char* console, const char* tmtc, const char* units, const char* columns, const char* formattype, const char* format, const char* desc_short, const char* desc_long)");
                out.println();
                out.println("        : name(name), console(console), tmtc(tmtc), units(units), ");
                out.println("          columns(columns), formattype(formattype), format(format), ");
                out.println("          desc_short(desc_short), desc_long(desc_long)");
                out.println("    {");
                out.println("    }");
                out.println("};");
                out.println("#endif");
                out.close();
                /*
                 */
                tgt = new File(top_dir,"ISSLSchema.h");
                System.out.println(tgt);
                out = new PrintStream(new FileOutputStream(tgt));

                out.println("/*");
                out.println(" * ISS Live Qt");
                out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                out.println(" *");
                out.println(" * This program is free software: you can redistribute it and/or");
                out.println(" * modify it under the terms of the GNU Lesser General Public License");
                out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                out.println(" * version 3 of the License, or (at your option) any later version.");
                out.println(" *");
                out.println(" * This program is distributed in the hope that it will be useful, but");
                out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                out.println(" * and GPL for more details.");
                out.println(" *");
                out.println(" * You should have received a copy of the LGPL and GPL along with this");
                out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                out.println(" */");
                out.println("#ifndef _ISSL_ISSLSchema_H");
                out.println("#define _ISSL_ISSLSchema_H");
                out.println();
                out.println("#include \"ISSLSchematic.h\"");
                out.println();

                out.println("struct ISSLSchema {");
                out.println("    /*!");
                out.println("     * ");
                out.println("     */");
                out.println("    enum Type {");
                out.println("        TypeUnknown = 0,");

                count = list_schema.size();
                term = (count-1);

                for (int cc = 0; cc < count; cc++){
                    schema schematic = list_schema.get(cc);
                    if (cc < term)
                        out.printf ("        Type%s,%n",schematic.name);
                    else
                        out.printf ("        Type%s%n",schematic.name);
                }

                out.println("    };");
                out.println();
                out.println("    /*!");
                out.println("     * ");
                out.println("     */");
                out.println("    static Type TypeOf(const char* name);");
                out.println("    /*!");
                out.println("     * ");
                out.println("     */");
                out.println("    static const ISSLSchematic& For(Type type);");
                out.println();
                out.println("};");
                out.println("#endif");
                out.close();

                tgt = new File(top_dir,"ISSLSchema.cpp");
                System.out.println(tgt);
                out = new PrintStream(new FileOutputStream(tgt));

                out.println("/*");
                out.println(" * ISS Live Qt");
                out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                out.println(" *");
                out.println(" * This program is free software: you can redistribute it and/or");
                out.println(" * modify it under the terms of the GNU Lesser General Public License");
                out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                out.println(" * version 3 of the License, or (at your option) any later version.");
                out.println(" *");
                out.println(" * This program is distributed in the hope that it will be useful, but");
                out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                out.println(" * and GPL for more details.");
                out.println(" *");
                out.println(" * You should have received a copy of the LGPL and GPL along with this");
                out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                out.println(" */");
                out.println("#include <cstring>");
                out.println();
                out.println("#include \"ISSLSchema.h\"");
                out.println();

                count = list_schema.size();
                term = (count-1);

                for (int cc = 0; cc < count; cc++){
                    schema schematic = list_schema.get(cc);
                    out.printf ("#include \"%s.h\"%n",schematic.name);
                }

                out.println();
                out.println("ISSLSchema::Type ISSLSchema::TypeOf(const char* name){");
                out.println("    switch(name[0]){");

                keys = new String[0];
                keys = map_prefixes.keySet().toArray(keys);
                count = keys.length;
                term = (count-1);

                for (int cc = 0; cc < count; cc++){

                    String prefix = keys[cc];
                    out.printf ("    case '%s':{%n",prefix);

                    list = map_prefixes.get(prefix);

                    for (int ll = 0, llen = list.length, lt = (llen-1); ll < llen; ll++){
                        schema schematic = list[ll];
                        if (0 == ll)
                            out.printf ("        if (0 == strcmp(\"%s\",name))%n",schematic.name);
                        else 
                            out.printf ("        else if (0 == strcmp(\"%s\",name))%n",schematic.name);

                        out.printf ("            return ISSLSchema::Type%s;%n",schematic.name);
                    }
                    out.println("        else ");
                    out.println("            return ISSLSchema::TypeUnknown;");
                    out.printf ("    }%n");
                }

                out.println("    default:");
                out.println("        return ISSLSchema::TypeUnknown;");
                out.println("    }");
                out.println("}");
                out.println();
                out.println("const ISSLSchematic& ISSLSchema::For(ISSLSchema::Type type){");
                out.println("    switch(type){");

                count = list_schema.size();
                term = (count-1);

                for (int cc = 0; cc < count; cc++){
                    schema schematic = list_schema.get(cc);
                    if (cc < term)
                        out.printf ("    case ISSLSchema::Type%s:%n",schematic.name);
                    else 
                        out.printf ("    default:%n",schematic.name);

                    out.printf ("        return %s::I;%n",schematic.name);
                }
                out.println("    }");
                out.println("}");
                out.close();
                /*
                 */
                for (schema schematic: list_schema){

                    tgt = new File(schema_dir,schematic.name+".h");
                    System.out.println(tgt);
                    out = new PrintStream(new FileOutputStream(tgt));

                    out.println("/*");
                    out.println(" * ISS Live Qt");
                    out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                    out.println(" *");
                    out.println(" * This program is free software: you can redistribute it and/or");
                    out.println(" * modify it under the terms of the GNU Lesser General Public License");
                    out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                    out.println(" * version 3 of the License, or (at your option) any later version.");
                    out.println(" *");
                    out.println(" * This program is distributed in the hope that it will be useful, but");
                    out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                    out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                    out.println(" * and GPL for more details.");
                    out.println(" *");
                    out.println(" * You should have received a copy of the LGPL and GPL along with this");
                    out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                    out.println(" */");
                    out.printf ("#ifndef _ISSL_%s_H%n",schematic.name);
                    out.printf ("#define _ISSL_%s_H%n",schematic.name);
                    out.println();
                    out.println("#include \"ISSLSchematic.h\"");
                    out.println();
                    out.println("/*!");
                    out.println(" * ");
                    out.println(" */");
                    out.printf ("struct %s : public ISSLSchematic {%n",schematic.name);
                    out.println();
                    out.printf ("    %s();%n",schematic.name);
                    out.println();
                    out.printf ("    static const %s I;%n",schematic.name);
                    out.println("};");
                    out.println("#endif");

                    out.close();

                    tgt = new File(schema_dir,schematic.name+".cpp");
                    System.out.println(tgt);
                    out = new PrintStream(new FileOutputStream(tgt));

                    out.println("/*");
                    out.println(" * ISS Live Qt");
                    out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                    out.println(" *");
                    out.println(" * This program is free software: you can redistribute it and/or");
                    out.println(" * modify it under the terms of the GNU Lesser General Public License");
                    out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                    out.println(" * version 3 of the License, or (at your option) any later version.");
                    out.println(" *");
                    out.println(" * This program is distributed in the hope that it will be useful, but");
                    out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                    out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                    out.println(" * and GPL for more details.");
                    out.println(" *");
                    out.println(" * You should have received a copy of the LGPL and GPL along with this");
                    out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                    out.println(" */");
                    out.println();
                    out.printf ("#include \"%s.h\"%n",schematic.name);
                    out.println();
                    out.printf ("const %s %s::I;%n",schematic.name,schematic.name);
                    out.println();
                    out.printf ("%s::%s()%n",schematic.name,schematic.name);
                    out.printf( "    : ISSLSchematic(\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\")%n", schematic.name, schematic.console, schematic.tmtc, schematic.units, schematic.columns, schematic.formattype, schematic.format, schematic.desc_short, schematic.desc_long);
                    out.println("{");
                    out.println("}");
                    out.println();
                    out.close();
                }
                /*
                 */
                tgt = new File(top_dir,"ISSLConsole.h");
                System.out.println(tgt);
                out = new PrintStream(new FileOutputStream(tgt));

                out.println("/*");
                out.println(" * ISS Live Qt");
                out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                out.println(" *");
                out.println(" * This program is free software: you can redistribute it and/or");
                out.println(" * modify it under the terms of the GNU Lesser General Public License");
                out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                out.println(" * version 3 of the License, or (at your option) any later version.");
                out.println(" *");
                out.println(" * This program is distributed in the hope that it will be useful, but");
                out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                out.println(" * and GPL for more details.");
                out.println(" *");
                out.println(" * You should have received a copy of the LGPL and GPL along with this");
                out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                out.println(" */");
                out.println("#ifndef _ISSL_ISSLConsole_H");
                out.println("#define _ISSL_ISSLConsole_H");
                out.println();
                out.println("#include <QList>");
                out.println("#include <QString>");
                out.println();
                out.println("#include \"ISSLSchematic.h\"");
                out.println();
                out.println("/*!");
                out.println(" * ");
                out.println(" */");
                out.println("struct ISSLConsole {");
                out.println();
                out.println("    enum Type {");
                out.println("        TypeUnknown = 0,");

                keys = new String[0];
                keys = map_console.keySet().toArray(keys);
                count = keys.length;
                term = (count-1);
                int cc = 0;
                for (String console: keys){

                    out.printf ("        /*%n");
                    out.printf ("         * %s%n",console);
                    out.printf ("         */%n");
                    if (cc < term)
                        out.printf ("        Type%s,%n",console);
                    else
                        out.printf ("        Type%s%n",console);

                    cc++;
                }
                out.println("    };");
                out.println();
                out.println("    static Type TypeOf(const char* name);");
                out.println();
                out.println("    static const ISSLConsole& For(Type type);");
                out.println();
                out.println("    static QList<ISSLConsole::Type> Types();");
                out.println();
                out.println("    static QList<QString> Names();");
                out.println();
                out.println("    const char* name;");
                out.println();
                out.println("    ISSLConsole(const char* name);");
                out.println();
                out.println("    virtual QList<ISSLSchematic> schematic() const = 0;");
                out.println();
                out.println("    virtual QString join(const QString& sep) const = 0;");
                out.println();
                out.println("};");
                out.println("#endif");

                out.close();

                tgt = new File(top_dir,"ISSLConsole.cpp");
                System.out.println(tgt);
                out = new PrintStream(new FileOutputStream(tgt));

                out.println("/*");
                out.println(" * ISS Live Qt");
                out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                out.println(" *");
                out.println(" * This program is free software: you can redistribute it and/or");
                out.println(" * modify it under the terms of the GNU Lesser General Public License");
                out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                out.println(" * version 3 of the License, or (at your option) any later version.");
                out.println(" *");
                out.println(" * This program is distributed in the hope that it will be useful, but");
                out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                out.println(" * and GPL for more details.");
                out.println(" *");
                out.println(" * You should have received a copy of the LGPL and GPL along with this");
                out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                out.println(" */");
                out.println();
                out.println("#include <cstring>");
                out.println();
                out.println("#include \"ISSLConsole.h\"");
                out.println();
                out.println("ISSLConsole::ISSLConsole(const char* name)");
                out.println("    : name(name)");
                out.println("{");
                out.println("}");
                out.println();

                for (String console: map_console.keySet()){

                    out.printf ("#include \"%s.h\"%n",console);
                }
                out.println();
                out.println("ISSLConsole::Type ISSLConsole::TypeOf(const char* name){");

                keys = new String[0];
                keys = map_console.keySet().toArray(keys);
                count = keys.length;
                term = (count-1);
                cc = 0;
                for (String console: keys){

                    if (0 == cc)
                        out.printf ("    if (0 == strcmp(\"%s\",name))%n",console);
                    else 
                        out.printf ("    else if (0 == strcmp(\"%s\",name))%n",console);

                    out.printf ("        return ISSLConsole::Type%s;%n",console);
                    cc++;
                }
                out.printf ("    else %n");
                out.printf ("        return ISSLConsole::TypeUnknown;%n");
                out.println("}");
                out.println();

                out.println("const ISSLConsole& ISSLConsole::For(ISSLConsole::Type type){");
                out.println("    switch(type){");

                cc = 0;
                for (String console: keys){

                    if (cc < term)
                        out.printf ("    case ISSLConsole::Type%s:%n",console);
                    else 
                        out.printf ("    default:%n");

                    out.printf ("        return %s::I;%n",console);
                    cc++;
                }
                out.println("    }");
                out.println("}");
                out.println();
                out.println("QList<ISSLConsole::Type> ISSLConsole::Types(){");
                out.println("    QList<ISSLConsole::Type> re;");
                cc = 0;
                for (String console: keys){

                    out.printf ("    re += ISSLConsole::Type%s;%n",console);
                    cc++;
                }
                out.println("    return re;");
                out.println("}");
                out.println();
                out.println("QList<QString> ISSLConsole::Names(){");
                out.println("    QList<QString> re;");

                cc = 0;
                for (String console: keys){

                    out.printf ("    re.append(%s::I.name);%n",console);
                    cc++;
                }
                out.println("    return re;");
                out.println("}");
                out.println();


                out.close();

                cc = 0;
                for (String console: keys){

                    tgt = new File(schema_dir,console+".h");
                    System.out.println(tgt);
                    out = new PrintStream(new FileOutputStream(tgt));

                    out.println("/*");
                    out.println(" * ISS Live Qt");
                    out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                    out.println(" *");
                    out.println(" * This program is free software: you can redistribute it and/or");
                    out.println(" * modify it under the terms of the GNU Lesser General Public License");
                    out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                    out.println(" * version 3 of the License, or (at your option) any later version.");
                    out.println(" *");
                    out.println(" * This program is distributed in the hope that it will be useful, but");
                    out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                    out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                    out.println(" * and GPL for more details.");
                    out.println(" *");
                    out.println(" * You should have received a copy of the LGPL and GPL along with this");
                    out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                    out.println(" */");
                    out.printf ("#ifndef _ISSL_%s_H%n",console);
                    out.printf ("#define _ISSL_%s_H%n",console);
                    out.println();
                    out.println("#include <QList>");
                    out.println("#include <QString>");
                    out.println();
                    out.println("#include \"ISSLConsole.h\"");
                    out.println("#include \"ISSLSchema.h\"");
                    out.println();
                    out.println("/*!");
                    out.println(" * ");
                    out.println(" */");
                    out.printf ("struct %s : public ISSLConsole {%n",console);
                    out.println();
                    out.printf ("    %s();%n",console);
                    out.println();
                    out.printf ("    static const %s I;%n",console);
                    out.println();
                    out.println("    virtual QList<ISSLSchematic> schematic() const;");
                    out.println();
                    out.println("    virtual QString join(const QString& sep) const;");
                    out.println();
                    out.println(" private:");
                    out.println("    static const ISSLSchema::Type Set[];");
                    out.println("    static const uint Count;");
                    out.println("};");
                    out.println("#endif");

                    out.close();

                    tgt = new File(schema_dir,console+".cpp");
                    System.out.println(tgt);
                    out = new PrintStream(new FileOutputStream(tgt));

                    out.println("/*");
                    out.println(" * ISS Live Qt");
                    out.println(" * Copyright (C) 2014, John Pritchard, Syntelos");
                    out.println(" *");
                    out.println(" * This program is free software: you can redistribute it and/or");
                    out.println(" * modify it under the terms of the GNU Lesser General Public License");
                    out.println(" * (LGPL and GPL) as published by the Free Software Foundation, either");
                    out.println(" * version 3 of the License, or (at your option) any later version.");
                    out.println(" *");
                    out.println(" * This program is distributed in the hope that it will be useful, but");
                    out.println(" * WITHOUT ANY WARRANTY; without even the implied warranty of");
                    out.println(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the LGPL");
                    out.println(" * and GPL for more details.");
                    out.println(" *");
                    out.println(" * You should have received a copy of the LGPL and GPL along with this");
                    out.println(" * program.  If not, see <http://www.gnu.org/licenses/>.");
                    out.println(" */");
                    out.println();
                    out.printf ("#include \"%s.h\"%n",console);
                    out.println();
                    list = map_console.get(console);

                    for (int ll = 0, llen = list.length, lt = (llen-1); ll < llen; ll++){

                        out.printf ("#include \"%s.h\"%n",list[ll].name);
                    }

                    out.println();
                    out.printf ("const %s %s::I;%n",console,console);
                    out.println();
                    out.printf ("const ISSLSchema::Type %s::Set[] = {%n",console);

                    for (int ll = 0, llen = list.length, lt = (llen-1); ll < llen; ll++){

                        if (0 < lt)
                            out.printf ("    ISSLSchema::Type%s,%n",list[ll].name);
                        else
                            out.printf ("    ISSLSchema::Type%s%n",list[ll].name);
                    }
                    out.println("};");
                    out.printf ("const uint %s::Count = %d%n;",console,list.length);
                    out.println();
                    out.printf ("%s::%s()%n",console,console);
                    out.printf( "    : ISSLConsole(\"%s\")%n", console);
                    out.println("{");
                    out.println("}");
                    out.println();
                    out.printf ("QList<ISSLSchematic> %s::schematic() const {%n",console);
                    out.println("    QList<ISSLSchematic> re;");
                    out.println("    uint cc;");
                    out.println("    for (cc = 0; cc < Count; cc++){");
                    out.println("        ISSLSchematic sch = ISSLSchema::For(Set[cc]);");
                    out.println("        re += sch;");
                    out.println("    }");
                    out.println("    return re;");
                    out.println("}");
                    out.println();
                    out.printf ("QString %s::join(const QString& sep) const {%n",console);
                    out.println("    QString re;");
                    out.println("    uint cc;");
                    out.println("    for (cc = 0; cc < Count; cc++){");
                    out.println("        ISSLSchematic sch = ISSLSchema::For(Set[cc]);");
                    out.println("        if (0 != cc)");
                    out.println("            re += sep;");
                    out.println("        re += sch.name;");
                    out.println("    }");
                    out.println("    return re;");
                    out.println("}");
                    out.println();

                    out.close();

                    cc++;
                }

            }
            catch (Exception exc){
                exc.printStackTrace();
                System.exit(1);
            }
        }
        else {
            System.err.println("Error: file not found 'schema.txt'");
            System.exit(1);
        }
    }
}
