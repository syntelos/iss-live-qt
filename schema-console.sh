#!/bin/bash

IFS=$(printf "\t")

cat schema.tsv | while read -s symbol console tmtc units columns formattype format desc_short desc_long
do
    echo ${console}
done | sort -u 
