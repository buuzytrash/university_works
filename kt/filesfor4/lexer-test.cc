#include <unistd.h>
#include <cstdio>
#include "utilities.h"
#include "cool-parse.h"
#include "stringtab.h"

int curr_lineno;
std::FILE *token_file = stdin;
YYSTYPE cool_yylval;

int main()
{
    for (int t = cool_yylex(); t; t = cool_yylex())
    {
        print_cool_token(t);
    }

    idtable.print();
    stringtable.print();
    inttable.print();
}