CXXFLAGS="-Wall -I ./src/ -Wno-unused -Wno-deprecated  -Wno-write-strings -Wno-free-nonheap-object"

flex -d -o cool-flex-lexer.cc ./cool.flex

g++ $CXXFLAGS -c cool-flex-lexer.cc -o cool-flex-lexer.o
g++ $CXXFLAGS -c utilities.cc -o utilities.o
g++ $CXXFLAGS -c stringtab.cc -o stringtab.o
g++ $LDFLAGS $CXXFLAGS *.o lexer-test.cc -o lexer-test