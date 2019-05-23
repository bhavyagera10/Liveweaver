#!/bin/bash
CFILE=$1
OBJFILE="${CFILE%.*}"
g++ $CFILE -o $OBJFILE
echo "Built file: $CFILE -> $OBJFILE"
./$OBJFILE