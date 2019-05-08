%{
unsigned int count_word=0;
unsigned int count_eq=0;
unsigned int count_cbo=0;
unsigned int count_cbc=0;
unsigned int count_mark=0;
unsigned int count_number=0;


%}

%%
[\t]+ ;
[A-Za-z][A-Za-z]*[ ] {count_word++;}
[a-zA-Z][A-Za-z]*[ ] {count_word++;}
[0 - 9]* {count_number++;}
[0 - 9]*\.[0 -9]* {count_number++;}
[}] {count_cbc++;}
[{] {count_cbo++;}
[=] {count_eq++;}
[+] {count_mark++;}
[-] {count_mark++;}
[!] {count_mark++;}
[?] {count_mark++;}
[\\] {count_mark++;}
[\|] {count_mark++;}
[(] {count_mark++;}
[)] {count_mark++;}
[*] {count_mark++;}
[]

.|\n ;
%%
int yywrap() {return 1;}
int main()
{
yylex();
printf("word = %d \n", count_word);
printf("count_eq = %d \n", count_eq);
printf("count_cbo = %d \n", count_cbo);
printf("count_cbc = %d \n", count_cbc);
printf("count_mark = %d \n", count_mark);
printf("count_number = %d \n", count_number);

}
