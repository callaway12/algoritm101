%{
unsigned int count=0;
%}
%%
[\t]+ ;
love|Love|LOVE {count++;}
.|\n ;
%%
int yywrap() {return 1;}
int main()
{
yylex();
printf("number of love=%d\n",count);
}

