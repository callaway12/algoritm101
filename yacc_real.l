%{
	#include <string.h>
	#include "y.tab.h"
	extern int yylval;
%}

letter		[a-zA-Z]
num		[0-9]+
id		{letter}({letter}|{num})*

%%

[\t ]+
[\t\n]+

int		{return INT;}
char		{return CHAR;}
short		{return SHORT;}
void		{return VOID;}
long		{return LONG;}
float		{return FLOAT;}
double		{return DOUBLE;}

if		{return IF;}
else		{return ELSE;}
then		{return THEN;}
switch		{return SWITCH;}
case		{return CASE;}
default		{return DEFAULT;}
while		{return WHILE;}
for		{return FOR;}

return		{return RETURN;}

"=="		{return EQ_OP;}
"!="		{return NE_OP;}
"<="		{return LE_OP;}
">="		{return GE_OP;}
"++"		{return INC_OP;}
"--"		{return DEC_OP;}

"*="		{return MUL_ASS;}
"/="		{return DIV_ASS;}
"+="		{return ADD_ASS;}
"-="		{return SUB_ASS;}

{letter}	{return LETTER;}
{num}		{return NUM;}
.		{return yytext[0];}

%%

int yywrap(){
	return 1;
}
