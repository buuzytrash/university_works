#!/bin/sh

DIR="folly"

REGEXP="for|if|while "

for f in `find $DIR -name "bad.cpp"`; do
    echo "*** File $f"
    grep -E -o $REGEXP $f
done
