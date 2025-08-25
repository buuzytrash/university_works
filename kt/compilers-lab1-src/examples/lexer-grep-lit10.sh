#!/bin/sh

DIR="folly"

#REGEXP="0[0-7]+'?[uUlLzZ]*"
#REGEXP="0[xX][0-9a-fA-F]+'?[uUlLzZ]*"
# REGEXP="[.+-]?[0-9]*\.[(0-9)|p]*?+([eE][-+]?[0-9|F|f|L|l]+)?"
# REGEXP="[1-9][(0-9)|uUlLzZ]*"
# REGEXP='((0[xX][0-9a-fA-F]+\.|0[xX][0-9a-fA-F]*\.[0-9a-fA-F]+|0[xX][0-9a-fA-F]+\.)[pP][-+]?[0-9]+[fFlL]?|(0|[1-9][0-9]*\.[0-9]*|\.?[0-9]+)[eE][-+]?[0-9]+[fFlL]?|0[xX][0-9a-fA-F]+[pP][-+]?[0-9]+[fFlL]?)'
REGEXP= '".*"'

for f in `find $DIR -name "bad.cpp"`; do
    echo "*** File $f"
    grep -E -o "$REGEXP" $f
done