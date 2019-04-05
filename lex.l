%{
#include<stdio.h>
int words=0;
%}
%%

\n { words++;}
[\t 'love'] words++;

%%
main(void)
{
yyin= fopen("ex.txt","r");
yylex();

printf("\n\t%d words",words);

}
 
int yywrap()
{
return(1);
}