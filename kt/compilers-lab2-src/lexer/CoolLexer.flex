%{
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "CoolParser.h"
#include "CoolLexer.h"

#undef YY_DECL
#define YY_DECL int CoolLexer::yylex()
#define ERROR -1;

int comment_lvl = 0;

%}

/*Numbers*/
digit [0-9]
integer [0-9]+

/*ALPHA*/
capital_alpha [A-Z]
lower_alpha [a-z]
STR ({capital_alpha}|{lower_alpha})
white_space [ \t]*

/*IDENTIFIERS*/
identifier_type [A-Z][A-Za-z_0-9]*
identifier_object [a-z][A-Za-z_0-9]*
identifier_other [A-Za-z_0-9]~

%option batch noyywrap c++
%option yylineno
%option yyclass="CoolLexer"

%start STR 
%start COMMENT_INLINE
%start COMMENT

%%


<INITIAL>"--" {BEGIN(COMMENT_INLINE);}
<COMMENT_INLINE>[^\n]+ {}
<COMMENT_INLINE><<EOF>> {BEGIN(INITIAL);}
<COMMENT_INLINE>\n {lineno++;
                    BEGIN(INITIAL);}


<INITIAL>"(*" {comment_lvl++;
                BEGIN(COMMENT);}
<INITIAL>"*)"       { Error("Wrong comment close-bracket");
                     BEGIN(INITIAL); return ERROR; }

<COMMENT>"(*" {comment_lvl++;}

<COMMENT><<EOF>> {BEGIN(INITIAL);
                    Error("Error comment");}
")*" {Error("Wrong comment close-bracket"); BEGIN(INITIAL);}

<COMMENT>\n {lineno++;}
<COMMENT>[^\n*(]* {}
<COMMENT>[*()] {}
<COMMENT>"*)" {comment_lvl--;
                if (comment_lvl == 0)
                BEGIN(INITIAL);}

<INITIAL>(\") {yymore();
               BEGIN(STR);}
<STR>\n {Error("one_line_string");
        BEGIN(INITIAL);
        lineno++;
        return 0;}
<STR><<EOF>> {return 0;} 
<STR>\0 {return 0;}
<STR>[^\\\"\n]* {yymore();}
<STR>\\[^\n]    {yymore();}
<STR>\\\n       {lineno++;
                yymore();}
<STR>\"        {yymore();
                Escape();
                BEGIN(INITIAL);
                return TOKEN_STR;}

(?i:class)        return TOKEN_KW_CLASS;
(?i:else)         return TOKEN_KW_ELSE;
f(?i:alse)        return TOKEN_KW_FALSE;
(?i:fi)           return TOKEN_KW_FI;
(?i:if)           return TOKEN_KW_IF;
(?i:in)           return TOKEN_KW_IN;
(?i:inherits)     return TOKEN_KW_INHERITS;
(?i:isvoid)       return TOKEN_KW_ISVOID;
(?i:let)          return TOKEN_KW_LET;
(?i:loop)         return TOKEN_KW_LOOP;
(?i:pool)         return TOKEN_KW_POOL;
(?i:then)         return TOKEN_KW_THEN;
(?i:while)        return TOKEN_KW_WHILE;
(?i:case)         return TOKEN_KW_CASE;
(?i:esac)         return TOKEN_KW_ESAC;
(?i:new)          return TOKEN_KW_NEW;
(?i:of)           return TOKEN_KW_OF;
(?i:not)          return TOKEN_KW_NOT;
t(?i:rue)         return TOKEN_KW_TRUE;
{identifier_type}   return TOKEN_IDENT_TYPE;
{identifier_object} return TOKEN_IDENT_OBJECT;
{identifier_other}  return TOKEN_IDENT_OTHER;
=>            return TOKEN_DARROW;
(<-)            return TOKEN_ASSIGN;
"*"          return TOKEN_MULT;
"+"              return TOKEN_PLUS;
"-"             return TOKEN_MINUS;
"/"            return TOKEN_DIV;
"="             return TOKEN_EQ;
"<" return TOKEN_LESS;
">" return TOKEN_MORE;
"<=" return TOKEN_LE;
">=" return TOKEN_ME;
"\("  return TOKEN_L_PARENT;
"\)" return TOKEN_R_PARENT;
"\["      return TOKEN_L_BRACKET;
"\]"     return TOKEN_R_BRACKET;
"\{"        return TOKEN_L_BRACE;
"\}"       return TOKEN_R_BRACE;
"."               return TOKEN_DOT;
";"         return TOKEN_SEMICOLON;
":"             return TOKEN_COLON;
","             return TOKEN_COMMA;
"~"             return TOKEN_TILDA;
@                return TOKEN_AT;
{integer} return TOKEN_INT;


\n                   lineno++;
{white_space}   {/* skip spaces */}
.               Error("unrecognized character");

%%

void CoolLexer::Error(const char* msg) const
{
    std::cerr << "Lexer error (line " << lineno << "): " << msg << ": lexeme '" << YYText() << "'\n";
    std::exit(YY_EXIT_FAILURE);
}

void CoolLexer::Escape(){
    const char *input = yytext;
    char *output = yytext;
    input++; // Skip opening '\"'
    while (*(input + 1) /* Skip closing '\"' */ ) {
        if (*input == '\\') {
            input++; // Skip '\\'
            switch (*input) {
                case 'n': *output++ = '\n'; break;
                case 't': *output++ = '\t'; break;
                case 'f': *output++ = '\f'; break;
                case 'b': *output++ = '\b'; break;
                default: *output++ = *input;
            }
        } else {
            *output++ = *input;
        }
        input++;
    }
    *output = '\0';
    std::string str = yytext;
    std::cout <<"CODE_SYMBOL:  ";
    for(char ch : str){
        std::cout << static_cast<int>(ch) << " ";
    }
    std::cout << "\n";
}