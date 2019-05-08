%{
#include <stdio.h>
int yylex();
int ary[9] = {0,0,0,0,0,0,0,0,0};
int checkint =0;
int checkchar =0;
int checkpoint =0;
int checkarray =0;

%}

/*%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF ENUMERATION_CONSTANT
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN*/

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
/*
start_state
	: translation_unit
		{
			printf("	함수 = 			%d\n", ary[0]);
			printf("	수식 = 			%d\n", ary[1]);
			printf("	int 변수선언 = 		%d\n", ary[2]);
			printf("	char 변수선언 = 	%d\n", ary[3]);
			printf("	pointer 변수선언 = 	%d\n", ary[4]);
			printf("	배열변수선언 = 		%d\n", ary[5]);
			printf("	선택문 = 		%d\n", ary[6]);
			printf("	반복문 = 		%d\n", ary[7]);
			printf("	리턴문 = 		%d\n", ary[8]);
		}

	;*/

primary_expression
	: IDENTIFIER
	| constant
	| string
	| '(' expression ')'
	;

constant
   : I_CONSTANT
   | F_CONSTANT
   ;

string
   :STRING_LITERAL
   |FUNC_NAME
   ;


postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'{ary[0]++;}
	| postfix_expression '(' argument_expression_list ')'{ary[0]++;}
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER { ary[1]++; }
	| postfix_expression INC_OP { ary[1]++; }
	| postfix_expression DEC_OP { ary[1]++; }
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression { ary[1]++; }
	| DEC_OP unary_expression { ary[1]++; }
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression { ary[1]++; }
	| multiplicative_expression '/' cast_expression { ary[1]++; }
	| multiplicative_expression '%' cast_expression { ary[1]++; }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression { ary[1]++; }
	| additive_expression '-' multiplicative_expression { ary[1]++; }
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression { ary[1]++; }
	| shift_expression RIGHT_OP additive_expression { ary[1]++; }
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression { ary[1]++; }
	| relational_expression '>' shift_expression { ary[1]++; }
	| relational_expression LE_OP shift_expression { ary[1]++; }
	| relational_expression GE_OP shift_expression { ary[1]++; }
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression { ary[1]++; }
	| equality_expression NE_OP relational_expression { ary[1]++; }
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression { ary[1]++; }
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression { ary[1]++; }
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression { ary[1]++; }
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression { ary[1]++; }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression { ary[1]++; }
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression { ary[1]++; }
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression { ary[1]++; }
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	/*| declaration_specifiers init_declarator_list ';'
	{
		if( ic == 1 )
		{
			ary[2] += nc;
		}
		else if( cc == 1 )
		{
			ary[3] += nc;
		}
		nc = 0;
	}*/
	 { if(checkint==1)
   { ary[2]++; checkint=0; }
      else if(checkchar==1)
   { ary[3]++; checkchar=0;}
   }
   | declaration_specifiers init_declarator_list ';'
    { if ( checkint ==1)
   { ary[2]++; checkint =0;}
   else if(checkchar ==1)
   { ary[3]++; checkchar=0;}
   }
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator		/*{ nc++; }*/
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer { ary[1]++; }
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	/*: VOID				{ ic = 0; cc = 0; }
	| CHAR				{ ic = 0; cc = 1; }
	| SHORT				{ ic = 0; cc = 0; }
	| INT				{ ic = 1; cc = 0; }
	| LONG				{ ic = 0; cc = 0; }
	| FLOAT				{ ic = 0; cc = 0; }
	| DOUBLE			{ ic = 0; cc = 0; }
	| SIGNED			{ ic = 0; cc = 0; }
	| UNSIGNED			{ ic = 0; cc = 0; }
	| struct_or_union_specifier	{ ic = 0; cc = 0; }
	| enum_specifier		{ ic = 0; cc = 0; } */
	: VOID {checkint =0; checkchar=0;}
    | CHAR {checkint =0; checkchar=1;}
    | SHORT {checkint=0; checkchar=0;}
    | INT {checkint=1; checkchar=0;}
    | LONG {checkint=0; checkchar=0;}
    | FLOAT {checkint=0; checkchar=0;}
    | DOUBLE {checkint =0; checkchar=0;}
    | SIGNED {checkint=0; checkchar=0;}
    | UNSIGNED {checkint=0; checkchar=0;}
    | struct_or_union_specifier {checkint=0; checkchar=0;}
    | enum_specifier {checkint=0; checkchar=0;}
   // | TYPE_NAME {checkint=0; checkchar=0;}
	  ;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	/*{
		if( ic == 1 )
		{
			ary[2] += nc;
		}
		else if( cc == 1 )
		{
			ary[3] += nc;
		}
		nc = 0;
	}*/
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator /* { nc++; }*/
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression { ary[1]++; }
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator { /*if( pc == 1 ) ary[4]++; pp = 1;*/ checkpoint=1;  }
	| direct_declarator /*{ pp = 0; }*/
	;

direct_declarator
	/*: IDENTIFIER { pc = 1; ac = 0; }
	| '(' declarator ')' { pc = 1; ac = 0; }
	| direct_declarator '[' constant_expression ']' { ary[5]++; pc = 1; ac = 1; }
	| direct_declarator '[' ']' { ary[5]++; pc = 1; ac = 1; }
	| direct_declarator '(' parameter_type_list ')' { ic = 0; cc = 0; pc = 0; ac = 0; }
	| direct_declarator '(' identifier_list ')' { ic = 0; cc = 0; pc = 0; ac = 0; }
	| direct_declarator '(' ')' { ic = 0; cc = 0; pc = 0; ac = 0; }
	;*/
	   : IDENTIFIER
	 { if(checkpoint==1) ary[4]++;
     if(checkint==1) ary[2]++;
     if(checkchar==1) ary[3]++;
     checkpoint=0; checkint=0; checkchar=0;
   }
   | '(' declarator ')'
   | direct_declarator '[' constant_expression ']'
   { ary[5]++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
   | direct_declarator '[' ']'
   { ary[5]++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
   | direct_declarator '(' parameter_type_list ')'
   { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
          checkpoint=0; checkint=0; checkchar=0;
   }
   | direct_declarator '(' identifier_list ')'
   { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
    }
   | direct_declarator '(' ')'
   { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
   ;



pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	/*{
		if( pc == 1 && pp == 1 )
			ary[4]--;
		if( ac == 1 && pp == 1 )
			ary[5]--;
	}*/
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator {ary[4]++;}
	| pointer direct_abstract_declarator {ary[4]++;}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';' {ary[1]++;}
	;

selection_statement
	: IF '(' expression ')' statement { ary[6]++; }
	| IF '(' expression ')' statement ELSE statement { ary[6]++; }
	| SWITCH '(' expression ')' statement { ary[6]++; }
	;

iteration_statement
	: WHILE '(' expression ')' statement { ary[7]++; }
	| DO statement WHILE '(' expression ')' ';' { ary[7]++; }
	| FOR '(' expression_statement expression_statement ')' statement { ary[7]++; }
	| FOR '(' expression_statement expression_statement expression ')' statement { ary[7]++; }
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';' { ary[8]++; }
	| RETURN expression ';' { ary[8]++; }
	;

translation_unit
	: external_declaration

	;

external_declaration
	: function_definition
	| declaration
	/*| PRE IDENTIFIER IDENTIFIER primary_expression
	| PRE IDENTIFIER STRING_LITERAL
	| PRE IDENTIFIER '<' IDENTIFIER '>'
	| PRE IDENTIFIER '<' IDENTIFIER '.' IDENTIFIER '>'
	| USING IDENTIFIER IDENTIFIER ';'*/
	|IDENTIFIER '<' IDENTIFIER','IDENTIFIER'>'
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement { ary[0]++; if(checkint==1) ary[2]--; }
	| declaration_specifiers declarator compound_statement { ary[0]++; if(checkint==1) ary[2]--; }
	| declarator declaration_list compound_statement { ary[0]++; if(checkint==1) ary[2]--;}
	| declarator compound_statement { ary[0]++; if(checkint==1) ary[2]--;}
	;

%%

int main(void)
{
	yyparse();
	printf("	함수 = 			%d\n", ary[0]);
	printf("	수식 = 			%d\n", ary[1]);
	printf("	int 변수선언 = 		%d\n", ary[2]);
	printf("	char 변수선언 = 	%d\n", ary[3]);
	printf("	pointer 변수선언 = 	%d\n", ary[4]);
	printf("	배열변수선언 = 		%d\n", ary[5]);
	printf("	선택문 = 		%d\n", ary[6]);
	printf("	반복문 = 		%d\n", ary[7]);
	printf("	리턴문 = 		%d\n", ary[8]);
	return 0;
}

void yyerror(const char *str)
{
	fprintf(stderr,"error: %s\n",str);
}
