#!/bin/bash

if [ -n "${1}" ]&&[ -f "${1}" ]
then
    IFS=''
    cat "${1}" | while read -s line
    do
        if [ -n "${line}" ]
        then
            line=$(echo "${line}" | sed 's%"%\\"%g')
            cat<<EOF
out.println("${line}");
EOF
        else
            cat<<EOF
out.println();
EOF
        fi
    done
else
    cat<<EOF>&2
Usage

    $0 codetext.file

Description

    Print java generator code to stdout.

EOF
    exit 1
fi

