%{
	#include<stdio.h>
	int i = 0;
	char *tree[100];
	int func_num = 0;
	int exp_num = 0;
	int int_num = 0;
	int char_num = 0;
	int ptr_num = 0;
	int arr_num = 0;
	int sel_num = 0;
	int loop_num = 0;
	int ret_num = 0;
	int check_int = 0;
	int check_char = 0;
	int check_ptr = 0;
	int check_arr = 0;
%}

%token LETTER NUM
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE
%token IF ELSE THEN SWITCH CASE DEFAULT WHILE FOR RETURN

%token INC_OP DEC_OP EQ_OP NE_OP LE_OP GE_OP
%token MUL_ASS DIV_ASS ADD_ASS SUB_ASS

%right THEN ELSE


%token IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL SIZEOF ENUMERATION_CONSTANT
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN  FUNC_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER TYPEDEF_NAME
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS USING PRE

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression	: ID
			| NUM
			| '(' expression ')'
			;

postfix_expression	: primary_expression
			| postfix_expression '(' ')'	{check_int = 0; check_char = 0; func_num++;}
			| postfix_expression '(' expression ')'	{check_int = 0; check_char = 0; func_num++;}
			| postfix_expression INC_OP	{exp_num++;}
			| postfix_expression DEC_OP	{exp_num++;}
			;

unary_expression	: postfix_expression
			| INC_OP unary_expression	{exp_num++;}
			| DEC_OP unary_expression	{exp_num++;}
			;

multiplicative_expression : unary_expression
			| multiplicative_expression '*' unary_expression	{exp_num++;}
			| multiplicative_expression '/' unary_expression	{exp_num++;}
			| multiplicative_expression '%' unary_expression	{exp_num++;}
			;

additive_expression	: multiplicative_expression
			| additive_expression '+' multiplicative_expression	{exp_num++;}
			| additive_expression '-' multiplicative_expression	{exp_num++;}
			;

relational_expression	: additive_expression
			| relational_expression '<' additive_expression		{exp_num++;}
			| relational_expression '>' additive_expression		{exp_num++;}
			| relational_expression LE_OP additive_expression	{exp_num++;}
			| relational_expression GE_OP additive_expression	{exp_num++;}
			;

equality_expression	: relational_expression
			| equality_expression EQ_OP relational_expression	{exp_num++;}
			| equality_expression NE_OP relational_expression	{exp_num++;}
			;

assignment_expression	: equality_expression
			| unary_expression assignment_operator assignment_expression	{exp_num++;}
			;

assignment_operator	: '='
			| MUL_ASS
			| DIV_ASS
			| ADD_ASS
			| SUB_ASS
			;

expression		: assignment_expression
			| expression ',' assignment_expression
			;

declaration		: type_specifier ';'
			| type_specifier init_declarator_list ';' {
				if(check_ptr == 1)
					ptr_num++;
				else{
					if(check_int == 1)
						int_num++;
					if(check_char == 1)
						char_num++;
				}
				check_ptr = 0;
				check_int = 0;
				check_char = 0;
				tree[i] = "type_specifier    init_declarator_list     ';'"; i++;
			}
			;

init_declarator_list	: init_declarator	{tree[i] = "\t\t     init_declarator"; i++;}
			| init_declarator_list ',' init_declarator
			;

init_declarator		: declarator	{tree[i] = "\t\t\tdeclarator"; i++;}
			| declarator '=' initializer	{exp_num++;}
			;

type_specifier		: VOID
			| CHAR		{check_char = 1;}
			| SHORT
			| INT		{check_int = 1;tree[i] = "type_specifier";i++;}
			| LONG
			| FLOAT
			| DOUBLE
			;

declarator		: pointer direct_declarator{
				if(check_arr == 1)
					arr_num--;
				tree[i] = "\t\tpointer  direct_declarator";
				i++;
			}
			| direct_declarator
			;

direct_declarator	: ID							{tree[i] = "\t\t\t\tID"; i++;}
			| '(' declarator ')'
			| direct_declarator '[' equality_expression ']'		{check_int = 0; check_char = 0; arr_num++; check_arr = 1;}
			| direct_declarator '[' ']'				{check_int = 0; check_char = 0; arr_num++; check_arr = 1;}
			| direct_declarator '(' parameter_list ')'		{check_int = 0; check_char = 0;}
			| direct_declarator '(' identifier_list ')'		{check_int = 0; check_char = 0;}
			| direct_declarator '(' ')' 				{check_int = 0; check_char = 0;}
			;

pointer			: '*'			{check_ptr = 1;}
			| '*' pointer		{check_ptr = 1;}
			;

parameter_list		: parameter_declaration
			| parameter_list ',' parameter_declaration
			;

parameter_declaration	: type_specifier declarator
			| type_specifier abstract_declarator
			| type_specifier
			;

identifier_list		: ID
			| identifier_list ',' ID
			;

abstract_declarator	: pointer
			| direct_abstract_declarator
			| pointer direct_abstract_declarator
			;

direct_abstract_declarator : '(' abstract_declarator ')'
			| '[' ']'
			| '[' equality_expression ']'
			| direct_abstract_declarator '[' ']'
			| direct_abstract_declarator '[' equality_expression ']'
			| '(' ')'
			| '(' parameter_list ')'
			| direct_abstract_declarator '(' ')'
			| direct_abstract_declarator '(' parameter_list ')'
			;

initializer		: assignment_expression
			| '{' initializer_list '}'
			| '{' initializer_list ',' '}'
			;

initializer_list	: initializer
			| initializer_list ',' initializer
			;

statement		: labeled_statement
			| compound_statement
			| expression_statement
			| selection_statement
			| iteration_statement
			| return_statement
			;

labeled_statement	: CASE equality_expression ':' statement
			| DEFAULT ':' statement
			;

compound_statement	: '{' '}'
			| '{' statement_list '}'
			| '{' declaration_list '}'
			| '{' declaration_list statement_list '}'
			;

declaration_list	: declaration
			| declaration_list declaration
			;

statement_list		: statement
			| statement_list statement
			;

expression_statement	: ';'
			| expression ';'
			;

selection_statement	: IF '(' expression ')' statement   %prec THEN		{sel_num++;}
			| IF '(' expression ')' statement ELSE statement	{sel_num++;}
			| SWITCH '(' expression ')' statement			{sel_num++;}
			;

iteration_statement	: WHILE '(' expression ')' statement	{loop_num++;}
			| FOR '(' expression_statement expression_statement ')' statement	{loop_num++;}
			| FOR '(' expression_statement expression_statement expression ')' statement	{loop_num++;}
			;

return_statement	: RETURN ';'			{ret_num++;}
			| RETURN expression ';'		{ret_num++;}
			;

translation_unit	: external_declaration	{tree[i] = "\t      translation_unit\n\n\t    external_declaration";}
			| translation_unit external_declaration
			;

external_declaration	: function_definition {func_num++;}
			| declaration	{tree[i] = "\t\tdeclaration"; i++;}
			;

function_definition	: type_specifier declarator declaration_list compound_statement
			| type_specifier declarator compound_statement
			| declarator declaration_list compound_statement
			| declarator compound_statement
			;

ID			: LETTER
			| ID NUM
			| ID LETTER
			;


%%
#include<stdio.h>



int main(){
	yyparse();
	printf("함수 = %d\n",func_num);
	printf("수식 = %d\n",exp_num);
	printf("int 변수선언 = %d\n",int_num);
	printf("char 변수선언 = %d\n",char_num);
	printf("pointer 변수선언 = %d\n",ptr_num);
	printf("배열변수선언 = %d\n",arr_num);
	printf("선택문 = %d\n",sel_num);
	printf("반복문 = %d\n",loop_num);
	printf("리턴문 =  %d\n",ret_num);
	return 0;
}

yyerror(const char *str){
	fprintf(stderr, "error : %s\n",str);
}
