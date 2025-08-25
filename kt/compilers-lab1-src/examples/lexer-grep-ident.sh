#!/bin/sh

DIR="folly"

REGEXP="[_|a-z|A-Z][_|a-z|A-Z|0-9]* "

for f in `find $DIR -name "*.cpp"`; do
    echo "*** File $f"
    grep -E -o "$REGEXP" $f
done
