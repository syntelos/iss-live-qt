
Abstract

    This package pulls JSON telemetry data from
    http://spacestationlive.jsc.nasa.gov/.  This directory builds as a
    command line application.

Prerequisites

    qt4
    qmake

Quick start

    qmake
    make
    ./iss-live

Usage

    ./iss-live [ ? | ?? | [CONSOLE|SYMBOL]* ]

    Watch any combination of consoles, e.g. "VVO" or "SPARTAN", or
    symbols, e.g. "S0000001" or "S0000003". Default "VVO".

    The command line argument "?" lists available consoles.

    The command line argument "??" lists available symbols by console.

    Any other command line argument is expected to be a console or
    telemetry symbol.  When recognized, the telemetry symbol or group
    will be added to the session.

Table "schema"

    File "schema.tsv" lists meta data as tab separated values with the
    following columns: name (symbol), console (mission control), tmtc
    (a derived symbol), units, columns, format type, format, short
    description, long description.  

Main.cpp

    Command line processor and example driver.

ISSLClient*

    Primarily the HTTP protocol for talking to the Space State Live
    application.

ISSLSchema*

    Catalog largely generated from "schema.tsv".

Notes

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
