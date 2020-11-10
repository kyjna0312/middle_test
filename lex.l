digit [0-9]
letter [a-zA-Z_]
delim [\t]
line [\n]
ws {delim}+

%{
#include "y.tab.h"
#include <string.h>

/* 추가한 부분 시작 */
#include "type.h"
extern A_ID *current_id;
extern int yyval;
/* 추가한 부분 끝 */

extern int line_no = 1;

char *makeString();
int checkIdentifier();
%}

%%
{ws} { }
{line} { line_no++; }
auto { return(AUTO_SYM); }
break { return(BREAK_SYM); }
case { return(CASE_SYM); }
continue { return(CONTINUE_SYM); }
default { return(DEFAULT_SYM); }
do { return(DO_SYM); }
else { return(ELSE_SYM); }
enum { return(ENUM_SYM); }
for { return(FOR_SYM); }
if { return(IF_SYM); }
return { return(RETURN_SYM); }
sizeof { return(SIZEOF_SYM); }
static { return(STATIC_SYM); }
struct { return(STRUCT_SYM); }
switch { return(SWITCH_SYM); }
typedef { return(TYPEDEF_SYM); }
union { return(UNION_SYM); }
while { return(WHILE_SYM); }

"\+\+" { return(PLUSPLUS); }
"\-\-" { return(MINUSMINUS); }
"\->" { return(ARROW); }
"<" { return(LSS); }
">" { return(GTR); }
"<=" { return(LEQ); }
">=" { return(GEQ); }
"==" { return(EQL); }
"!=" { return(NEQ); }
"&&" { return(AMPAMP); }
"||" { return(BARBAR); }
"\.\.\." { return(DOTDOTDOT); }
"\(" { return(LP); }
"\)" { return(RP); }
"\[" { return(LB); }
"\]" { return(RB); }
"\{" { return(LR); }
"\}" { return(RR); }
"\:" { return(COLON); }
"\." { return(PERIOD); }
"\," { return(COMMA); }
"\!" { return(EXCL); }
"\%" { return(PERCENT); }
"\&" { return(AMP); }
"\;" { return(SEMICOLON); }
"\+" { return(PLUS); }
"\-" { return(MINUS); }
"\=" { return(ASSIGN); }

{digit}+ {return(INTEGER_CONSTANT); }
{digit}+\.{digit}+ {return(FLOAT_CONSTANT); }
{letter}({letter}|{digit})* { return(checkIdentifier(yytext)); }
\"([^"\n]|\\["\n])*\" {return(STRING_LITERAL); }
\'([^'\n]|\'\')\' {return(CHARACTER_CONSTANT); }
"//"[^\n]* { }
%%
char *makeString(char *s){
	char *t;
	t = malloc(strlen(s)+1);
	strcpy(t, s);
	return(t);
}

int checkIdentifier(char *s){
	A_ID *id;
	char *t;

	id = current_id;

	while(id){
		if(strcmp(id -> name, s) == 0) break;

		id = id -> prev;
	}
	if(id==0){
		yylval = makeString(s);
		return(IDENTIFIER);}
	else if(id -> kind == ID_TYPE){
		yylval = id -> type;
		return(TYPE_IDENTIFIER);
	}
	else{
		yylval=id -> name;
		return(IDENTIFIER);
	}
}
/* 삭제한 부분 시작 */
/*
int checkIdentifier(char *s) {
	if (strcmp(s, "int") == 0)
		return TYPE_IDENTIFIER;
	else if (strcmp(s, "float") == 0)
		return TYPE_IDENTIFIER;
	else if (strcmp(s, "char") == 0)
		return TYPE_IDENTIFIER;
	else if (strcmp(s, "void") == 0)
		return TYPE_IDENTIFIER;
		
	return IDENTIFIER;
}

int yywrap() {
	return 1;
}
*/
/* 삭제한 부분 끝 */
