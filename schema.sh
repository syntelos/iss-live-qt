#!/bin/bash
#
## Generates
#
#    ISSLSchematic.h
#    ISSLSchema.h
#    ISSLSchema.cpp
#    ISSLConsole.h
#    ISSLConsole.cpp
#    ./schema/*.{h,cpp}
#

if javac schema.java
then
    java schema
fi
