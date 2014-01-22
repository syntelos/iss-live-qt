
Abstract

    This package pulls JSON telemetry data from
    http://spacestationlive.jsc.nasa.gov/.  This directory builds as a
    command line application.

Quick start

    ./run.sh

Usage

    ./run.sh [CONSOLE|SYMBOL]*

    Watch any combination of consoles, e.g. "VVO" or "SPARTAN", or
    symbols, e.g. "S0000001" or "S0000003". Default "VVO".

Table "schema"

    File "schema.tsv" lists meta data as tab separated values with the
    following columns: name (symbol), console (mission control), tmtc
    (a derived symbol), units, columns, format type, format, short
    description, long description.  

ISSLClient*

    Primarily the HTTP protocol for talking to the Space State Live
    application.

ISSLSchema*

    Catalog largely generated from "schema.tsv".

Notes

    Data values

        Not all data values are well defined, from the service or in the
        schematic (catalog) meta data.  Types defined as enumerated in the
        schema may have mapped values from the network service.  

    Schema units

        The units detailed in the meta data (including "schema.tsv") are
        likely to contain bugs.  Assumptions like fluid quantities and gas
        pressures have been pulled from a cursory search and applied
        uniformly.  Some other assumptions, like seconds or minutes for
        time units, are far weaker.  Of course, many units are known from
        the descriptions.

Author

    John Pritchard
    Leonardo, NJ, US

    http://www.syntelos.com/

See also

    http://www.lightstreamer.com/
