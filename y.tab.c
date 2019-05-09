/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LETTER = 258,
     NUM = 259,
     VOID = 260,
     CHAR = 261,
     SHORT = 262,
     INT = 263,
     LONG = 264,
     FLOAT = 265,
     DOUBLE = 266,
     IF = 267,
     ELSE = 268,
     THEN = 269,
     SWITCH = 270,
     CASE = 271,
     DEFAULT = 272,
     WHILE = 273,
     FOR = 274,
     RETURN = 275,
     INC_OP = 276,
     DEC_OP = 277,
     EQ_OP = 278,
     NE_OP = 279,
     LE_OP = 280,
     GE_OP = 281,
     MUL_ASS = 282,
     DIV_ASS = 283,
     ADD_ASS = 284,
     SUB_ASS = 285,
     LOWER_THEN_ELSE = 286
   };
#endif
/* Tokens.  */
#define LETTER 258
#define NUM 259
#define VOID 260
#define CHAR 261
#define SHORT 262
#define INT 263
#define LONG 264
#define FLOAT 265
#define DOUBLE 266
#define IF 267
#define ELSE 268
#define THEN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define WHILE 273
#define FOR 274
#define RETURN 275
#define INC_OP 276
#define DEC_OP 277
#define EQ_OP 278
#define NE_OP 279
#define LE_OP 280
#define GE_OP 281
#define MUL_ASS 282
#define DIV_ASS 283
#define ADD_ASS 284
#define SUB_ASS 285
#define LOWER_THEN_ELSE 286




/* Copy the first part of user declarations.  */
#line 1 "yacc_real.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 187 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      32,    33,    34,    37,    42,    38,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    43,
      39,    41,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    13,    17,    22,    25,
      28,    30,    33,    36,    38,    42,    46,    50,    52,    56,
      60,    62,    66,    70,    74,    78,    80,    84,    88,    90,
      94,    96,    98,   100,   102,   104,   106,   110,   113,   117,
     119,   123,   125,   129,   131,   133,   135,   137,   139,   141,
     143,   146,   148,   150,   154,   159,   163,   168,   173,   177,
     179,   182,   184,   188,   191,   194,   196,   198,   202,   204,
     206,   209,   213,   216,   220,   224,   229,   232,   236,   240,
     245,   247,   251,   256,   258,   262,   264,   266,   268,   270,
     272,   274,   279,   283,   286,   290,   294,   299,   301,   304,
     306,   309,   311,   314,   320,   328,   334,   340,   347,   355,
     358,   362,   364,   367,   369,   371,   376,   380,   384,   387,
     389,   392
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      83,     0,    -1,    86,    -1,     4,    -1,    32,    59,    33,
      -1,    50,    -1,    51,    32,    33,    -1,    51,    32,    59,
      33,    -1,    51,    21,    -1,    51,    22,    -1,    51,    -1,
      21,    52,    -1,    22,    52,    -1,    52,    -1,    53,    34,
      52,    -1,    53,    35,    52,    -1,    53,    36,    52,    -1,
      53,    -1,    54,    37,    53,    -1,    54,    38,    53,    -1,
      54,    -1,    55,    39,    54,    -1,    55,    40,    54,    -1,
      55,    25,    54,    -1,    55,    26,    54,    -1,    55,    -1,
      56,    23,    55,    -1,    56,    24,    55,    -1,    56,    -1,
      52,    58,    57,    -1,    41,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    57,    -1,    59,    42,    57,    -1,
      63,    43,    -1,    63,    61,    43,    -1,    62,    -1,    61,
      42,    62,    -1,    64,    -1,    64,    41,    72,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    66,    65,    -1,    65,    -1,    86,    -1,
      32,    64,    33,    -1,    65,    44,    56,    45,    -1,    65,
      44,    45,    -1,    65,    32,    67,    33,    -1,    65,    32,
      69,    33,    -1,    65,    32,    33,    -1,    34,    -1,    34,
      66,    -1,    68,    -1,    67,    42,    68,    -1,    63,    64,
      -1,    63,    70,    -1,    63,    -1,    86,    -1,    69,    42,
      86,    -1,    66,    -1,    71,    -1,    66,    71,    -1,    32,
      70,    33,    -1,    44,    45,    -1,    44,    56,    45,    -1,
      71,    44,    45,    -1,    71,    44,    56,    45,    -1,    32,
      33,    -1,    32,    67,    33,    -1,    71,    32,    33,    -1,
      71,    32,    67,    33,    -1,    57,    -1,    46,    73,    47,
      -1,    46,    73,    42,    47,    -1,    72,    -1,    73,    42,
      72,    -1,    75,    -1,    76,    -1,    79,    -1,    80,    -1,
      81,    -1,    82,    -1,    16,    56,    48,    74,    -1,    17,
      48,    74,    -1,    46,    47,    -1,    46,    78,    47,    -1,
      46,    77,    47,    -1,    46,    77,    78,    47,    -1,    60,
      -1,    77,    60,    -1,    74,    -1,    78,    74,    -1,    43,
      -1,    59,    43,    -1,    12,    32,    59,    33,    74,    -1,
      12,    32,    59,    33,    74,    13,    74,    -1,    15,    32,
      59,    33,    74,    -1,    18,    32,    59,    33,    74,    -1,
      19,    32,    79,    79,    33,    74,    -1,    19,    32,    79,
      79,    59,    33,    74,    -1,    20,    43,    -1,    20,    59,
      43,    -1,    84,    -1,    83,    84,    -1,    85,    -1,    60,
      -1,    63,    64,    77,    76,    -1,    63,    64,    76,    -1,
      64,    77,    76,    -1,    64,    76,    -1,     3,    -1,    86,
       4,    -1,    86,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    35,    38,    39,    40,    41,    42,
      45,    46,    47,    50,    51,    52,    53,    56,    57,    58,
      61,    62,    63,    64,    65,    68,    69,    70,    73,    74,
      77,    78,    79,    80,    81,    84,    85,    88,    89,   105,
     106,   109,   110,   113,   114,   115,   116,   117,   118,   119,
     122,   128,   131,   132,   133,   134,   135,   136,   137,   140,
     141,   144,   145,   148,   149,   150,   153,   154,   157,   158,
     159,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     173,   174,   175,   178,   179,   182,   183,   184,   185,   186,
     187,   190,   191,   194,   195,   196,   197,   200,   201,   204,
     205,   208,   209,   212,   213,   214,   217,   218,   219,   222,
     223,   226,   227,   230,   231,   234,   235,   236,   237,   240,
     241,   242
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LETTER", "NUM", "VOID", "CHAR", "SHORT",
  "INT", "LONG", "FLOAT", "DOUBLE", "IF", "ELSE", "THEN", "SWITCH", "CASE",
  "DEFAULT", "WHILE", "FOR", "RETURN", "INC_OP", "DEC_OP", "EQ_OP",
  "NE_OP", "LE_OP", "GE_OP", "MUL_ASS", "DIV_ASS", "ADD_ASS", "SUB_ASS",
  "LOWER_THEN_ELSE", "'('", "')'", "'*'", "'/'", "'%'", "'+'", "'-'",
  "'<'", "'>'", "'='", "','", "';'", "'['", "']'", "'{'", "'}'", "':'",
  "$accept", "primary_expression", "postfix_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "assignment_expression",
  "assignment_operator", "expression", "declaration",
  "init_declarator_list", "init_declarator", "type_specifier",
  "declarator", "direct_declarator", "pointer", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "return_statement",
  "translation_unit", "external_declaration", "function_definition", "ID", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    40,    41,    42,    47,    37,    43,    45,    60,
      62,    61,    44,    59,    91,    93,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      52,    52,    52,    53,    53,    53,    53,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    85,    85,    86,
      86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     4,     2,     2,
       1,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     1,     3,     2,     2,     1,     1,     3,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     6,     7,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2,     1,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   119,    43,    44,    45,    46,    47,    48,    49,     0,
      59,   114,     0,     0,    51,     0,     0,   111,   113,    52,
       0,    60,    37,     0,    39,    41,     0,    97,     0,   118,
       0,     0,     0,    50,     1,   112,   121,   120,    53,     0,
      38,     0,   116,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,    93,     5,    10,    13,
      17,    20,    25,    28,    35,     0,    99,    85,    86,     0,
       0,    87,    88,    89,    90,     2,    41,    98,   117,    58,
      65,     0,    61,     0,    66,    55,    13,     0,    40,     0,
      80,    42,   115,     0,     0,     0,     0,     0,     0,   109,
       0,    11,    12,     0,     8,     9,     0,    31,    32,    33,
      34,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,    95,     0,    94,   100,
       0,     0,    63,    68,    64,    69,    56,     0,    57,     0,
      54,    83,     0,     0,     0,     0,    92,     0,     0,   110,
       4,     6,     0,    29,    14,    15,    16,    18,    19,    23,
      24,    21,    22,    26,    27,    36,    96,    76,     0,     0,
      72,     0,    70,     0,     0,    62,    67,     0,    81,     0,
       0,    91,     0,     0,     7,    77,    71,    73,    78,     0,
      74,     0,    82,    84,   103,   105,   106,     0,     0,    79,
      75,     0,   107,     0,   104,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,    58,    59,    60,    61,    62,    63,    64,   112,
      65,    27,    23,    24,    28,    13,    14,    15,    81,    82,
      83,   134,   135,    91,   142,    66,    67,    68,    30,    70,
      71,    72,    73,    74,    16,    17,    18,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int16 yypact[] =
{
     406,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,     9,
     -26,  -122,    34,   187,   -18,    37,   397,  -122,  -122,   200,
     -14,  -122,  -122,    28,  -122,   110,   159,  -122,    34,  -122,
     187,   415,   305,   -18,  -122,  -122,  -122,  -122,  -122,     9,
    -122,    76,  -122,   187,  -122,    13,    15,   353,   -33,    32,
      46,   196,   353,   353,   353,  -122,  -122,  -122,   216,   160,
     195,   197,   115,   240,  -122,   236,  -122,  -122,  -122,   204,
     237,  -122,  -122,  -122,  -122,   200,    65,  -122,  -122,  -122,
      31,    70,  -122,   100,   200,  -122,  -122,   102,  -122,    76,
    -122,  -122,  -122,   353,   353,    81,   303,   353,   351,  -122,
     288,  -122,  -122,   116,  -122,  -122,   239,  -122,  -122,  -122,
    -122,  -122,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,  -122,  -122,   270,  -122,  -122,
     357,   307,  -122,    10,  -122,   -11,  -122,   290,  -122,   124,
    -122,  -122,    67,   235,   300,   303,  -122,   301,   351,  -122,
    -122,  -122,   311,  -122,  -122,  -122,  -122,   195,   195,   197,
     197,   197,   197,   115,   115,  -122,  -122,  -122,   328,   105,
    -122,   112,   -11,   436,   337,  -122,   200,    35,  -122,   303,
     303,  -122,   303,   272,  -122,  -122,  -122,  -122,  -122,   338,
    -122,   221,  -122,  -122,  -122,  -122,  -122,   303,   344,  -122,
    -122,   303,  -122,   303,  -122,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,   -30,   231,    64,   256,   -29,   -17,  -122,
     -44,    30,  -122,   113,     0,    16,   -10,    -6,  -121,    49,
    -122,    42,    94,   -83,  -122,   -69,  -122,   118,   362,   163,
     -87,  -122,  -122,  -122,  -122,   230,  -122,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      12,   129,    86,    87,    21,    33,   141,   100,    10,   168,
     103,   148,     1,     1,    31,    96,    12,    86,    95,    38,
      19,   173,   101,   102,    90,    20,    32,   146,    25,    19,
      11,    80,    19,   174,     1,    19,    19,     1,     1,    44,
       1,     9,   130,    10,    76,    93,    11,    94,    19,   143,
     144,    84,   189,   147,   131,    76,    52,    53,   129,    19,
      77,   183,   152,   130,    97,    10,     9,    54,    10,     9,
      39,    40,    90,    77,   133,   131,   181,    22,    98,     1,
      44,    89,   192,   154,   155,   156,    86,    86,    86,    86,
      86,    86,    86,    86,   193,   153,   132,    52,    53,    77,
      19,    86,   171,   136,   122,   123,    41,   165,    54,   177,
     194,   195,   137,   196,   178,     2,     3,     4,     5,     6,
       7,     8,    89,    33,   133,   122,   123,     1,   202,   145,
      80,    29,   204,   138,   205,   122,   123,    80,   186,   198,
     118,   119,   139,    42,    86,   191,    20,   140,    78,   150,
      19,    41,    88,    19,   120,   121,    26,   187,   124,   176,
      90,    92,     1,    44,     2,     3,     4,     5,     6,     7,
       8,    45,   169,    80,    46,    47,    48,    49,    50,    51,
      52,    53,   159,   160,   161,   162,   175,   107,   108,   109,
     110,    54,     2,     3,     4,     5,     6,     7,     8,     1,
      44,   111,    55,    36,    37,    26,    56,     1,    44,     2,
       3,     4,     5,     6,     7,     8,    45,    52,    53,    46,
      47,    48,    49,    50,    51,    52,    53,   172,    54,   113,
     114,   115,   127,    26,   116,   117,    54,   104,   105,    99,
       1,    44,     1,    44,   122,   123,    35,    55,   106,    45,
      26,   126,    46,    47,    48,    49,    50,    51,    52,    53,
      52,    53,     0,   122,   123,     0,   200,     0,   179,    54,
       0,    54,   151,     1,    44,     1,    44,   124,   124,   125,
      55,     0,    45,    26,   128,    46,    47,    48,    49,    50,
      51,    52,    53,    52,    53,     2,     3,     4,     5,     6,
       7,     8,    54,     0,    54,   197,     1,    44,     1,    44,
       1,    44,     0,    55,     0,    45,    26,   166,    46,    47,
      48,    49,    50,    51,    52,    53,    52,    53,    52,    53,
     124,   149,     0,   180,   182,    54,     0,    54,     0,    54,
       1,    44,   124,   124,   184,     0,    55,   157,   158,    26,
      85,     0,   170,   124,     1,    44,     1,    44,    52,    53,
       1,   185,     2,     3,     4,     5,     6,     7,     8,    54,
     137,   199,    52,    53,    52,    53,     0,   203,   163,   164,
     137,     0,   190,    54,     0,    54,   124,    43,    69,   130,
     167,    10,     0,     0,    55,     0,     0,    34,     0,     0,
       1,   131,     2,     3,     4,     5,     6,     7,     8,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     9,
       0,    10,     0,     0,     0,     0,     0,     0,     9,     0,
      10,     2,     3,     4,     5,     6,     7,     8,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188
};

static const yytype_int16 yycheck[] =
{
       0,    70,    32,    32,    10,    15,    89,    51,    34,   130,
      54,    98,     3,     3,    32,    48,    16,    47,    47,    33,
       0,    32,    52,    53,    41,     9,    44,    96,    12,     9,
       0,    31,    12,    44,     3,    15,    16,     3,     3,     4,
       3,    32,    32,    34,    28,    32,    16,    32,    28,    93,
      94,    31,   173,    97,    44,    39,    21,    22,   127,    39,
      30,   148,   106,    32,    32,    34,    32,    32,    34,    32,
      42,    43,    89,    43,    80,    44,   145,    43,    32,     3,
       4,    46,    47,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   177,   112,    80,    21,    22,    69,
      80,   131,   131,    33,    23,    24,    41,   124,    32,    42,
     179,   180,    42,   182,    47,     5,     6,     7,     8,     9,
      10,    11,    46,   133,   130,    23,    24,     3,   197,    48,
     130,    13,   201,    33,   203,    23,    24,   137,    33,   183,
      25,    26,    42,    25,   174,   174,   130,    45,    30,    33,
     130,    41,    39,   133,    39,    40,    46,    45,    42,   139,
     177,    43,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   130,   173,    15,    16,    17,    18,    19,    20,
      21,    22,   118,   119,   120,   121,   137,    27,    28,    29,
      30,    32,     5,     6,     7,     8,     9,    10,    11,     3,
       4,    41,    43,     3,     4,    46,    47,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    21,    22,    15,
      16,    17,    18,    19,    20,    21,    22,   133,    32,    34,
      35,    36,    69,    46,    37,    38,    32,    21,    22,    43,
       3,     4,     3,     4,    23,    24,    16,    43,    32,    12,
      46,    47,    15,    16,    17,    18,    19,    20,    21,    22,
      21,    22,    -1,    23,    24,    -1,    45,    -1,    33,    32,
      -1,    32,    33,     3,     4,     3,     4,    42,    42,    43,
      43,    -1,    12,    46,    47,    15,    16,    17,    18,    19,
      20,    21,    22,    21,    22,     5,     6,     7,     8,     9,
      10,    11,    32,    -1,    32,    33,     3,     4,     3,     4,
       3,     4,    -1,    43,    -1,    12,    46,    47,    15,    16,
      17,    18,    19,    20,    21,    22,    21,    22,    21,    22,
      42,    43,    -1,    33,    33,    32,    -1,    32,    -1,    32,
       3,     4,    42,    42,    33,    -1,    43,   116,   117,    46,
      45,    -1,    45,    42,     3,     4,     3,     4,    21,    22,
       3,    33,     5,     6,     7,     8,     9,    10,    11,    32,
      42,    33,    21,    22,    21,    22,    -1,    33,   122,   123,
      42,    -1,    45,    32,    -1,    32,    42,    25,    26,    32,
      33,    34,    -1,    -1,    43,    -1,    -1,     0,    -1,    -1,
       3,    44,     5,     6,     7,     8,     9,    10,    11,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,     5,     6,     7,     8,     9,    10,    11,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    32,
      34,    60,    63,    64,    65,    66,    83,    84,    85,    86,
      64,    66,    43,    61,    62,    64,    46,    60,    63,    76,
      77,    32,    44,    65,     0,    84,     3,     4,    33,    42,
      43,    41,    76,    77,     4,    12,    15,    16,    17,    18,
      19,    20,    21,    22,    32,    43,    47,    50,    51,    52,
      53,    54,    55,    56,    57,    59,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    86,    64,    60,    76,    33,
      63,    67,    68,    69,    86,    45,    52,    56,    62,    46,
      57,    72,    76,    32,    32,    56,    48,    32,    32,    43,
      59,    52,    52,    59,    21,    22,    32,    27,    28,    29,
      30,    41,    58,    34,    35,    36,    37,    38,    25,    26,
      39,    40,    23,    24,    42,    43,    47,    78,    47,    74,
      32,    44,    64,    66,    70,    71,    33,    42,    33,    42,
      45,    72,    73,    59,    59,    48,    74,    59,    79,    43,
      33,    33,    59,    57,    52,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    55,    57,    47,    33,    67,    70,
      45,    56,    71,    32,    44,    68,    86,    42,    47,    33,
      33,    74,    33,    79,    33,    33,    33,    45,    33,    67,
      45,    56,    47,    72,    74,    74,    74,    33,    59,    33,
      45,    13,    74,    33,    74,    74
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 39 "yacc_real.y"
    {check_int = 0; check_char = 0; func_num++;}
    break;

  case 7:
#line 40 "yacc_real.y"
    {check_int = 0; check_char = 0; func_num++;}
    break;

  case 8:
#line 41 "yacc_real.y"
    {exp_num++;}
    break;

  case 9:
#line 42 "yacc_real.y"
    {exp_num++;}
    break;

  case 11:
#line 46 "yacc_real.y"
    {exp_num++;}
    break;

  case 12:
#line 47 "yacc_real.y"
    {exp_num++;}
    break;

  case 14:
#line 51 "yacc_real.y"
    {exp_num++;}
    break;

  case 15:
#line 52 "yacc_real.y"
    {exp_num++;}
    break;

  case 16:
#line 53 "yacc_real.y"
    {exp_num++;}
    break;

  case 18:
#line 57 "yacc_real.y"
    {exp_num++;}
    break;

  case 19:
#line 58 "yacc_real.y"
    {exp_num++;}
    break;

  case 21:
#line 62 "yacc_real.y"
    {exp_num++;}
    break;

  case 22:
#line 63 "yacc_real.y"
    {exp_num++;}
    break;

  case 23:
#line 64 "yacc_real.y"
    {exp_num++;}
    break;

  case 24:
#line 65 "yacc_real.y"
    {exp_num++;}
    break;

  case 26:
#line 69 "yacc_real.y"
    {exp_num++;}
    break;

  case 27:
#line 70 "yacc_real.y"
    {exp_num++;}
    break;

  case 29:
#line 74 "yacc_real.y"
    {exp_num++;}
    break;

  case 38:
#line 89 "yacc_real.y"
    {
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
    break;

  case 39:
#line 105 "yacc_real.y"
    {tree[i] = "\t\t     init_declarator"; i++;}
    break;

  case 41:
#line 109 "yacc_real.y"
    {tree[i] = "\t\t\tdeclarator"; i++;}
    break;

  case 42:
#line 110 "yacc_real.y"
    {exp_num++;}
    break;

  case 44:
#line 114 "yacc_real.y"
    {check_char = 1;}
    break;

  case 46:
#line 116 "yacc_real.y"
    {check_int = 1;tree[i] = "type_specifier";i++;}
    break;

  case 50:
#line 122 "yacc_real.y"
    {
				if(check_arr == 1)
					arr_num--;
				tree[i] = "\t\tpointer  direct_declarator";
				i++;
			}
    break;

  case 52:
#line 131 "yacc_real.y"
    {tree[i] = "\t\t\t\tID"; i++;}
    break;

  case 54:
#line 133 "yacc_real.y"
    {check_int = 0; check_char = 0; arr_num++; check_arr = 1;}
    break;

  case 55:
#line 134 "yacc_real.y"
    {check_int = 0; check_char = 0; arr_num++; check_arr = 1;}
    break;

  case 56:
#line 135 "yacc_real.y"
    {check_int = 0; check_char = 0;}
    break;

  case 57:
#line 136 "yacc_real.y"
    {check_int = 0; check_char = 0;}
    break;

  case 58:
#line 137 "yacc_real.y"
    {check_int = 0; check_char = 0;}
    break;

  case 59:
#line 140 "yacc_real.y"
    {check_ptr = 1;}
    break;

  case 60:
#line 141 "yacc_real.y"
    {check_ptr = 1;}
    break;

  case 103:
#line 212 "yacc_real.y"
    {sel_num++;}
    break;

  case 104:
#line 213 "yacc_real.y"
    {sel_num++;}
    break;

  case 105:
#line 214 "yacc_real.y"
    {sel_num++;}
    break;

  case 106:
#line 217 "yacc_real.y"
    {loop_num++;}
    break;

  case 107:
#line 218 "yacc_real.y"
    {loop_num++;}
    break;

  case 108:
#line 219 "yacc_real.y"
    {loop_num++;}
    break;

  case 109:
#line 222 "yacc_real.y"
    {ret_num++;}
    break;

  case 110:
#line 223 "yacc_real.y"
    {ret_num++;}
    break;

  case 111:
#line 226 "yacc_real.y"
    {tree[i] = "\t      translation_unit\n\n\t    external_declaration"; }
    break;

  case 113:
#line 230 "yacc_real.y"
    {func_num++;}
    break;

  case 114:
#line 231 "yacc_real.y"
    {tree[i] = "\t\tdeclaration"; i++;}
    break;


/* Line 1267 of yacc.c.  */
#line 1872 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 246 "yacc_real.y"

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


