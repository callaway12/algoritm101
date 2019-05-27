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
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     SIZEOF = 262,
     ENUMERATION_CONSTANT = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     FUNC_NAME = 285,
     TYPEDEF = 286,
     EXTERN = 287,
     STATIC = 288,
     AUTO = 289,
     REGISTER = 290,
     TYPEDEF_NAME = 291,
     CHAR = 292,
     SHORT = 293,
     INT = 294,
     LONG = 295,
     SIGNED = 296,
     UNSIGNED = 297,
     FLOAT = 298,
     DOUBLE = 299,
     CONST = 300,
     VOLATILE = 301,
     VOID = 302,
     STRUCT = 303,
     UNION = 304,
     ENUM = 305,
     ELLIPSIS = 306,
     USING = 307,
     PRE = 308,
     CASE = 309,
     DEFAULT = 310,
     IF = 311,
     ELSE = 312,
     SWITCH = 313,
     WHILE = 314,
     DO = 315,
     FOR = 316,
     GOTO = 317,
     CONTINUE = 318,
     BREAK = 319,
     RETURN = 320,
     LOWER_THEN_ELSE = 321
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define ENUMERATION_CONSTANT 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define FUNC_NAME 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define TYPEDEF_NAME 291
#define CHAR 292
#define SHORT 293
#define INT 294
#define LONG 295
#define SIGNED 296
#define UNSIGNED 297
#define FLOAT 298
#define DOUBLE 299
#define CONST 300
#define VOLATILE 301
#define VOID 302
#define STRUCT 303
#define UNION 304
#define ENUM 305
#define ELLIPSIS 306
#define USING 307
#define PRE 308
#define CASE 309
#define DEFAULT 310
#define IF 311
#define ELSE 312
#define SWITCH 313
#define WHILE 314
#define DO 315
#define FOR 316
#define GOTO 317
#define CONTINUE 318
#define BREAK 319
#define RETURN 320
#define LOWER_THEN_ELSE 321




/* Copy the first part of user declarations.  */
#line 1 "yacc_1.y"

#include <stdio.h>
int yylex();
int ary[9] = {0,0,0,0,0,0,0,0,0};
int checkint =0;
int checkchar =0;
int checkpoint =0;
int checkarray =0;



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
#line 249 "y.tab.c"

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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNRULES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      67,    68,    74,    75,    72,    76,    71,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    84,    90,    77,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    28,    32,    37,    41,    45,    48,    51,    53,
      57,    59,    62,    65,    68,    71,    76,    78,    80,    82,
      84,    86,    88,    90,    95,    97,   101,   105,   109,   111,
     115,   119,   121,   125,   129,   131,   135,   139,   143,   147,
     149,   153,   157,   159,   163,   165,   169,   171,   175,   177,
     181,   183,   187,   189,   195,   197,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   225,   229,
     231,   234,   238,   240,   243,   245,   248,   250,   253,   255,
     259,   261,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   303,
     308,   311,   313,   315,   317,   320,   324,   327,   329,   332,
     334,   336,   340,   342,   345,   349,   354,   360,   363,   365,
     369,   371,   375,   377,   379,   382,   384,   386,   390,   395,
     399,   404,   409,   413,   415,   418,   421,   425,   427,   430,
     432,   436,   438,   442,   445,   448,   450,   452,   456,   458,
     461,   463,   465,   468,   472,   475,   479,   483,   488,   491,
     495,   499,   504,   506,   510,   515,   517,   521,   523,   525,
     527,   529,   531,   533,   537,   542,   546,   549,   553,   557,
     562,   564,   567,   569,   572,   574,   577,   583,   591,   597,
     603,   611,   618,   626,   630,   633,   636,   639,   643,   645,
     647,   649,   656,   661,   665,   669
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,     3,    -1,    93,    -1,    94,    -1,    67,
     113,    68,    -1,     4,    -1,     5,    -1,     6,    -1,    30,
      -1,    92,    -1,    95,    69,   113,    70,    -1,    95,    67,
      68,    -1,    95,    67,    96,    68,    -1,    95,    71,     3,
      -1,    95,     9,     3,    -1,    95,    10,    -1,    95,    11,
      -1,   111,    -1,    96,    72,   111,    -1,    95,    -1,    10,
      97,    -1,    11,    97,    -1,    98,    99,    -1,     7,    97,
      -1,     7,    67,   140,    68,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    97,    -1,
      67,   140,    68,    99,    -1,    99,    -1,   100,    74,    99,
      -1,   100,    79,    99,    -1,   100,    80,    99,    -1,   100,
      -1,   101,    75,   100,    -1,   101,    76,   100,    -1,   101,
      -1,   102,    12,   101,    -1,   102,    13,   101,    -1,   102,
      -1,   103,    81,   102,    -1,   103,    82,   102,    -1,   103,
      14,   102,    -1,   103,    15,   102,    -1,   103,    -1,   104,
      16,   103,    -1,   104,    17,   103,    -1,   104,    -1,   105,
      73,   104,    -1,   105,    -1,   106,    83,   105,    -1,   106,
      -1,   107,    84,   106,    -1,   107,    -1,   108,    18,   107,
      -1,   108,    -1,   109,    19,   108,    -1,   109,    -1,   109,
      85,   113,    86,   110,    -1,   110,    -1,    97,   112,   111,
      -1,    87,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,   111,    -1,   113,    72,   111,    -1,   110,
      -1,   116,    88,    -1,   116,   117,    88,    -1,   119,    -1,
     119,   116,    -1,   120,    -1,   120,   116,    -1,   131,    -1,
     131,   116,    -1,   118,    -1,   117,    72,   118,    -1,   132,
      -1,   132,    87,   143,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,   121,    -1,   128,    -1,   122,     3,    89,
     123,    90,    -1,   122,    89,   123,    90,    -1,   122,     3,
      -1,    48,    -1,    49,    -1,   124,    -1,   123,   124,    -1,
     125,   126,    88,    -1,   120,   125,    -1,   120,    -1,   131,
     125,    -1,   131,    -1,   127,    -1,   126,    72,   127,    -1,
     132,    -1,    86,   114,    -1,   132,    86,   114,    -1,    50,
      89,   129,    90,    -1,    50,     3,    89,   129,    90,    -1,
      50,     3,    -1,   130,    -1,   129,    72,   130,    -1,     3,
      -1,     3,    87,   114,    -1,    45,    -1,    46,    -1,   134,
     133,    -1,   133,    -1,     3,    -1,    67,   132,    68,    -1,
     133,    69,   114,    70,    -1,   133,    69,    70,    -1,   133,
      67,   136,    68,    -1,   133,    67,   139,    68,    -1,   133,
      67,    68,    -1,    74,    -1,    74,   135,    -1,    74,   134,
      -1,    74,   135,   134,    -1,   131,    -1,   135,   131,    -1,
     137,    -1,   137,    72,    51,    -1,   138,    -1,   137,    72,
     138,    -1,   116,   132,    -1,   116,   141,    -1,   116,    -1,
       3,    -1,   139,    72,     3,    -1,   125,    -1,   125,   141,
      -1,   134,    -1,   142,    -1,   134,   142,    -1,    67,   141,
      68,    -1,    69,    70,    -1,    69,   114,    70,    -1,   142,
      69,    70,    -1,   142,    69,   114,    70,    -1,    67,    68,
      -1,    67,   136,    68,    -1,   142,    67,    68,    -1,   142,
      67,   136,    68,    -1,   111,    -1,    89,   144,    90,    -1,
      89,   144,    72,    90,    -1,   143,    -1,   144,    72,   143,
      -1,   146,    -1,   147,    -1,   150,    -1,   151,    -1,   152,
      -1,   153,    -1,     3,    86,   145,    -1,    54,   114,    86,
     145,    -1,    55,    86,   145,    -1,    89,    90,    -1,    89,
     149,    90,    -1,    89,   148,    90,    -1,    89,   148,   149,
      90,    -1,   115,    -1,   148,   115,    -1,   145,    -1,   149,
     145,    -1,    88,    -1,   113,    88,    -1,    56,    67,   113,
      68,   145,    -1,    56,    67,   113,    68,   145,    57,   145,
      -1,    58,    67,   113,    68,   145,    -1,    59,    67,   113,
      68,   145,    -1,    60,   145,    59,    67,   113,    68,    88,
      -1,    61,    67,   150,   150,    68,   145,    -1,    61,    67,
     150,   150,   113,    68,   145,    -1,    62,     3,    88,    -1,
      63,    88,    -1,    64,    88,    -1,    65,    88,    -1,    65,
     113,    88,    -1,   155,    -1,   156,    -1,   115,    -1,     3,
      81,     3,    72,     3,    82,    -1,   116,   132,   148,   147,
      -1,   116,   132,   147,    -1,   132,   148,   147,    -1,   132,
     147,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    59,    60,    64,    65,
      70,    71,    72,    73,    74,    75,    76,    77,    81,    82,
      86,    87,    88,    89,    90,    91,    95,    96,    97,    98,
      99,   100,   104,   105,   109,   110,   111,   112,   116,   117,
     118,   122,   123,   124,   128,   129,   130,   131,   132,   136,
     137,   138,   142,   143,   147,   148,   152,   153,   157,   158,
     162,   163,   167,   168,   172,   173,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   191,   192,   196,
     200,   218,   227,   228,   229,   230,   231,   232,   236,   237,
     241,   242,   246,   247,   248,   249,   250,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   280,   281,
     282,   286,   287,   291,   292,   296,   311,   312,   313,   314,
     318,   319,   323,   324,   325,   329,   330,   331,   335,   336,
     340,   341,   345,   346,   350,   351,   363,   369,   370,   377,
     384,   391,   398,   410,   411,   412,   413,   417,   418,   423,
     424,   428,   429,   433,   440,   441,   445,   446,   450,   451,
     455,   456,   457,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   473,   474,   475,   479,   480,   484,   485,   486,
     487,   488,   489,   493,   494,   495,   499,   500,   501,   502,
     506,   507,   511,   512,   516,   517,   521,   522,   523,   527,
     528,   529,   530,   534,   535,   536,   537,   538,   542,   547,
     548,   554,   558,   559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "SIZEOF", "ENUMERATION_CONSTANT", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "FUNC_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "TYPEDEF_NAME", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "USING", "PRE", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "LOWER_THEN_ELSE", "'('", "')'", "'['", "']'", "'.'",
  "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "constant", "string", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    61,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   123,   123,   124,   125,   125,   125,   125,
     126,   126,   127,   127,   127,   128,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   144,   144,   145,   145,   145,
     145,   145,   145,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   151,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   154,   155,
     155,   155,   156,   156,   156,   156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     3,     4,     5,     2,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     1,
       1,     6,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   136,    92,    93,    94,    95,    96,    98,    99,   100,
     101,   104,   105,   102,   103,   132,   133,    97,   111,   112,
       0,     0,   143,   210,     0,    82,    84,   106,     0,   107,
      86,     0,   135,     0,     0,   208,   209,     0,   127,     0,
     136,     0,   147,   145,   144,    80,     0,    88,    90,    83,
      85,   110,     0,    87,     0,   190,     0,   215,     0,     0,
       0,   134,     1,     0,     0,   130,     0,   128,   137,   148,
     146,     0,    81,     0,   213,     0,     0,   117,     0,   113,
       0,   119,     2,     6,     7,     8,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,   194,   186,
      10,     3,     4,    20,    32,     0,    34,    38,    41,    44,
      49,    52,    54,    56,    58,    60,    62,    64,    77,     0,
     192,   177,   178,     0,     0,   179,   180,   181,   182,    90,
     191,   214,   156,   142,   155,     0,   149,   151,     0,     2,
     139,    32,    79,     0,     0,     0,     0,     0,   125,    89,
       0,   172,    91,   212,     0,   116,   109,   114,     0,     0,
     120,   122,   118,     0,     0,    24,     0,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,   204,   205,   206,
       0,     0,   158,     0,     0,    16,    17,     0,     0,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      66,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   195,   188,     0,   187,   193,     0,     0,
     153,   160,   154,   161,   140,     0,   141,     0,   138,     0,
     126,   131,   129,   175,     0,   108,   123,     0,   115,     0,
     183,     0,     0,   185,     0,     0,     0,     0,     0,   203,
     207,     5,     0,   160,   159,     0,    15,    12,     0,    18,
       0,    14,    65,    35,    36,    37,    39,    40,    42,    43,
      47,    48,    45,    46,    50,    51,    53,    55,    57,    59,
      61,     0,    78,   189,   168,     0,     0,   164,     0,   162,
       0,     0,   150,   152,   157,   211,     0,   173,   121,   124,
      25,   184,     0,     0,     0,     0,     0,    33,    13,     0,
      11,     0,   169,   163,   165,   170,     0,   166,     0,   174,
     176,   196,   198,   199,     0,     0,     0,    19,    63,   171,
     167,     0,     0,   201,     0,   197,   200,   202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   112,   113,   278,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   211,   129,   153,    55,    56,    46,    47,    25,    26,
      27,    28,    78,    79,    80,   169,   170,    29,    66,    67,
      30,    41,    32,    33,    44,   305,   146,   147,   148,   193,
     306,   243,   162,   254,   130,   131,   132,    58,   134,   135,
     136,   137,   138,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -204
static const yytype_int16 yypact[] =
{
     993,   -53,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
       5,     8,    76,  -204,    14,  1243,  1243,  -204,     6,  -204,
    1243,  1093,   139,    12,    86,  -204,  -204,    80,    44,   105,
    -204,    55,  -204,  -204,    76,  -204,   -22,  -204,  1073,  -204,
    -204,    54,   960,  -204,   281,  -204,    14,  -204,  1093,  1041,
     223,   139,  -204,    74,   105,    64,   -51,  -204,  -204,  -204,
    -204,     8,  -204,   564,  -204,  1093,   960,   960,   412,  -204,
      61,   960,    96,  -204,  -204,  -204,   809,   885,   885,  -204,
     897,   102,   126,   146,   154,   547,   158,   233,   163,   166,
     585,   692,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   145,   354,   897,  -204,   112,   -19,   205,
      34,   215,   170,   177,   162,   249,    -5,  -204,  -204,    19,
    -204,  -204,  -204,   357,   433,  -204,  -204,  -204,  -204,   182,
    -204,  -204,  -204,  -204,    50,   209,   206,  -204,   -10,  -204,
    -204,  -204,  -204,   210,   276,   -18,   897,   105,  -204,  -204,
     564,  -204,  -204,  -204,   891,  -204,  -204,  -204,   897,    60,
    -204,   195,  -204,   547,   692,  -204,   897,  -204,  -204,   196,
     547,   897,   897,   897,   224,   640,   201,  -204,  -204,  -204,
     106,    73,    75,   226,   299,  -204,  -204,   676,   897,   300,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,   897,  -204,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,  -204,  -204,   471,  -204,  -204,   945,   768,
    -204,     7,  -204,   155,  -204,  1222,  -204,   301,  -204,   225,
    -204,  -204,  -204,  -204,    -1,  -204,  -204,    61,  -204,   897,
    -204,   237,   547,  -204,   113,   127,   128,   239,   640,  -204,
    -204,  -204,  1146,   168,  -204,   897,  -204,  -204,   130,  -204,
     172,  -204,  -204,  -204,  -204,  -204,   112,   112,   -19,   -19,
     205,   205,   205,   205,    34,    34,   215,   170,   177,   162,
     249,     1,  -204,  -204,  -204,   241,   264,  -204,   247,   155,
    1190,   780,  -204,  -204,  -204,  -204,   509,  -204,  -204,  -204,
    -204,  -204,   547,   547,   547,   897,   796,  -204,  -204,   897,
    -204,   897,  -204,  -204,  -204,  -204,   265,  -204,   268,  -204,
    -204,  -204,  -204,  -204,   133,   547,   147,  -204,  -204,  -204,
    -204,   547,   246,  -204,   547,  -204,  -204,  -204
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,  -204,  -204,   -55,  -204,   -88,    42,
      31,    43,    49,   121,   122,   123,   124,   120,  -204,   -56,
     -21,  -204,   -78,   -50,     3,     0,  -204,   294,  -204,   -34,
    -204,  -204,   290,   -72,   -36,  -204,    95,  -204,   308,   216,
      33,    13,   -31,   -15,  -204,   -58,  -204,   140,  -204,   212,
    -124,  -203,  -136,  -204,   -83,  -204,   -12,    83,   251,  -169,
    -204,  -204,  -204,  -204,  -204,  -204
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      24,   145,    61,    23,   152,   151,   167,    43,    38,    51,
      40,    40,   184,    31,   230,    40,   268,    40,    77,    57,
     242,   157,   190,   191,   253,    49,    50,   212,    37,    70,
      53,   175,   177,   178,   152,   151,    74,    48,   309,   158,
     179,   165,    77,    77,    77,   172,   141,    77,   220,   221,
      71,   237,   161,    40,   157,    42,   216,   217,   246,   144,
     151,   140,   247,   163,    40,   192,    72,    77,   274,   139,
     309,   316,   250,   232,   238,    21,   239,    69,   140,    21,
     231,    21,    22,    63,   139,    81,    62,   331,    22,   317,
     260,   232,   167,   171,    39,    52,   191,   263,   191,   326,
     152,   151,    45,   264,   265,   266,   251,   233,    65,    81,
      81,    81,   152,   151,    81,   222,   223,   238,   256,   239,
     280,    15,    16,    68,    22,   283,   284,   285,    21,   241,
      77,    75,   257,    64,    81,    22,   140,   133,   192,   161,
      77,   271,   272,    76,   239,   232,   154,   168,   258,    22,
      22,   156,   237,   301,   194,   195,   196,   240,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   279,   273,   232,   321,
     340,   322,   173,   152,   151,   232,   213,   327,   180,   308,
     282,   214,   215,   181,   270,   323,   324,    81,   328,   232,
     232,   352,   329,   152,   151,   232,    59,    81,    60,   319,
      61,   302,   197,   182,   198,   354,   199,   218,   219,   232,
     151,   183,   310,   241,   311,   185,   149,    83,    84,    85,
      86,   224,   225,    87,    88,   272,   186,   239,   144,   341,
     342,   343,   330,   226,   232,   144,   228,   344,   346,   288,
     289,   187,   336,    89,   188,   152,   151,   273,   286,   287,
     227,   338,   353,   290,   291,   292,   293,   229,   355,    73,
     171,   357,   144,   294,   295,   348,   151,   244,   245,   249,
     248,   259,   262,   267,    82,    83,    84,    85,    86,   269,
     101,    87,    88,   150,   275,   161,   102,   103,   104,   105,
     106,   107,   276,   281,   314,   320,   325,   315,   347,   332,
     144,    89,     2,     3,     4,     5,     6,   334,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   333,   349,   356,    90,    91,    92,   350,    93,
      94,    95,    96,    97,    98,    99,   100,   296,   101,   297,
     300,   298,   318,   299,   102,   103,   104,   105,   106,   107,
      82,    83,    84,    85,    86,   159,   164,    87,    88,   108,
      54,   109,   155,   252,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   235,   313,   261,    89,     2,     3,
       4,     5,     6,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,    82,    83,    84,    85,
      86,   210,     0,    87,    88,   108,    54,   234,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,     0,
       0,    87,    88,     0,     0,     0,     0,    90,    91,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,     0,
     101,    89,   166,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   149,    83,    84,    85,    86,     0,     0,    87,
      88,   108,    54,   236,     0,    90,    91,    92,     0,    93,
      94,    95,    96,    97,    98,    99,   100,     0,   101,    89,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
      82,    83,    84,    85,    86,     0,     0,    87,    88,   108,
      54,   303,     0,     0,     0,     0,     0,   149,    83,    84,
      85,    86,     0,     0,    87,    88,   101,    89,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   149,    83,
      84,    85,    86,     0,    89,    87,    88,     0,   160,   339,
       0,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,    89,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,   101,     0,     0,     0,   108,    54,   102,   103,   104,
     105,   106,   107,   149,    83,    84,    85,    86,     0,     0,
      87,    88,   101,   160,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
      89,     0,     0,   189,     0,     0,     0,     0,     0,   149,
      83,    84,    85,    86,     0,     0,    87,    88,     0,     0,
       0,     0,     0,     0,     0,   149,    83,    84,    85,    86,
       0,     0,    87,    88,     0,     0,    89,   101,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,    89,     0,     0,     0,     0,     0,   108,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   101,   277,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   149,    83,    84,    85,    86,     0,     0,    87,    88,
       0,     0,     0,   149,    83,    84,    85,    86,     0,     0,
      87,    88,     0,     0,     0,     0,     0,     0,    89,   149,
      83,    84,    85,    86,     0,     0,    87,    88,     0,     0,
      89,     0,   149,    83,    84,    85,    86,     0,     0,    87,
      88,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,     0,   307,    89,
       0,   102,   103,   104,   105,   106,   107,   101,     0,     0,
     337,     0,     0,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,   101,   345,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   174,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   149,    83,
      84,    85,    86,     0,     0,    87,    88,     0,     0,     0,
     149,    83,    84,    85,    86,     0,     0,    87,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,   176,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     2,     3,     4,     5,
       6,   255,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,   238,   304,   239,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,   143,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     2,     3,     4,     5,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,    54,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,   304,   239,     0,     0,     0,     0,
      22,     2,     3,     4,     5,     6,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,   335,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   312,     2,     3,     4,     5,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    59,    33,     0,    60,    60,    78,    22,     3,     3,
       3,     3,    95,     0,    19,     3,   185,     3,    52,    31,
     144,    72,   100,   101,   160,    25,    26,   115,    81,    44,
      30,    86,    87,    88,    90,    90,    48,    24,   241,    90,
      90,    77,    76,    77,    78,    81,    58,    81,    14,    15,
      72,   134,    73,     3,    72,    22,    75,    76,    68,    59,
     115,    58,    72,    75,     3,   101,    88,   101,   192,    56,
     273,    72,    90,    72,    67,    67,    69,    44,    75,    67,
      85,    67,    74,     3,    71,    52,     0,    86,    74,    90,
     173,    72,   164,    80,    89,    89,   174,   180,   176,   268,
     156,   156,    88,   181,   182,   183,   156,    88,     3,    76,
      77,    78,   168,   168,    81,    81,    82,    67,   168,    69,
     198,    45,    46,    68,    74,   213,   214,   215,    67,   144,
     164,    48,    72,    89,   101,    74,   133,    54,   174,   160,
     174,    68,    67,    89,    69,    72,    72,    86,    88,    74,
      74,    87,   235,   231,     9,    10,    11,   144,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   197,   192,    72,   262,
     316,    68,    86,   239,   239,    72,    74,   275,    86,   239,
     211,    79,    80,    67,    88,    68,    68,   164,    68,    72,
      72,    68,    72,   259,   259,    72,    67,   174,    69,   259,
     241,   232,    67,    67,    69,    68,    71,    12,    13,    72,
     275,    67,    67,   238,    69,    67,     3,     4,     5,     6,
       7,    16,    17,    10,    11,    67,     3,    69,   238,   322,
     323,   324,    70,    73,    72,   245,    84,   325,   326,   218,
     219,    88,   310,    30,    88,   311,   311,   272,   216,   217,
      83,   311,   345,   220,   221,   222,   223,    18,   351,    87,
     257,   354,   272,   224,   225,   331,   331,    68,    72,     3,
      70,    86,    86,    59,     3,     4,     5,     6,     7,    88,
      67,    10,    11,    70,    68,   316,    73,    74,    75,    76,
      77,    78,     3,     3,     3,    68,    67,    82,   329,    68,
     310,    30,    31,    32,    33,    34,    35,    70,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    68,    68,    88,    54,    55,    56,    70,    58,
      59,    60,    61,    62,    63,    64,    65,   226,    67,   227,
     230,   228,   257,   229,    73,    74,    75,    76,    77,    78,
       3,     4,     5,     6,     7,    71,    76,    10,    11,    88,
      89,    90,    64,   157,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   133,   245,   174,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,     3,     4,     5,     6,
       7,    87,    -1,    10,    11,    88,    89,    90,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    30,    90,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    88,    89,    90,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    30,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    67,    30,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,     3,     4,
       5,     6,     7,    -1,    30,    10,    11,    -1,    89,    90,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    30,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    88,    89,    73,    74,    75,
      76,    77,    78,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    67,    89,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    -1,    -1,    30,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    88,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    67,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    30,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,
      30,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    30,
      -1,    73,    74,    75,    76,    77,    78,    67,    -1,    -1,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    31,    32,    33,    34,
      35,    90,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     3,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    68,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    89,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    68,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    67,    74,   115,   116,   119,   120,   121,   122,   128,
     131,   132,   133,   134,   154,   155,   156,    81,     3,    89,
       3,   132,   131,   134,   135,    88,   117,   118,   132,   116,
     116,     3,    89,   116,    89,   115,   116,   147,   148,    67,
      69,   133,     0,     3,    89,     3,   129,   130,    68,   131,
     134,    72,    88,    87,   147,   148,    89,   120,   123,   124,
     125,   131,     3,     4,     5,     6,     7,    10,    11,    30,
      54,    55,    56,    58,    59,    60,    61,    62,    63,    64,
      65,    67,    73,    74,    75,    76,    77,    78,    88,    90,
      92,    93,    94,    95,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   113,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   132,
     115,   147,     3,    68,   116,   136,   137,   138,   139,     3,
      70,    97,   110,   114,    72,   129,    87,    72,    90,   118,
      89,   111,   143,   147,   123,   125,    90,   124,    86,   126,
     127,   132,   125,    86,    67,    97,    67,    97,    97,   114,
      86,    67,    67,    67,   145,    67,     3,    88,    88,    88,
     113,   113,   125,   140,     9,    10,    11,    67,    69,    71,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      87,   112,    99,    74,    79,    80,    75,    76,    12,    13,
      14,    15,    81,    82,    16,    17,    73,    83,    84,    18,
      19,    85,    72,    88,    90,   149,    90,   145,    67,    69,
     132,   134,   141,   142,    68,    72,    68,    72,    70,     3,
      90,   114,   130,   143,   144,    90,   114,    72,    88,    86,
     145,   140,    86,   145,   113,   113,   113,    59,   150,    88,
      88,    68,    67,   134,   141,    68,     3,    68,    96,   111,
     113,     3,   111,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   103,   103,   104,   105,   106,   107,
     108,   113,   111,    90,    68,   136,   141,    70,   114,   142,
      67,    69,    51,   138,     3,    82,    72,    90,   127,   114,
      68,   145,    68,    68,    68,    67,   150,    99,    68,    72,
      70,    86,    68,    68,    70,    68,   136,    70,   114,    90,
     143,   145,   145,   145,   113,    68,   113,   111,   110,    68,
      70,    57,    68,   145,    68,   145,    88,   145
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
        case 12:
#line 72 "yacc_1.y"
    {ary[0]++;}
    break;

  case 13:
#line 73 "yacc_1.y"
    {ary[0]++;}
    break;

  case 15:
#line 75 "yacc_1.y"
    { ary[1]++; }
    break;

  case 16:
#line 76 "yacc_1.y"
    { ary[1]++; }
    break;

  case 17:
#line 77 "yacc_1.y"
    { ary[1]++; }
    break;

  case 21:
#line 87 "yacc_1.y"
    { ary[1]++; }
    break;

  case 22:
#line 88 "yacc_1.y"
    { ary[1]++; }
    break;

  case 35:
#line 110 "yacc_1.y"
    { ary[1]++; }
    break;

  case 36:
#line 111 "yacc_1.y"
    { ary[1]++; }
    break;

  case 37:
#line 112 "yacc_1.y"
    { ary[1]++; }
    break;

  case 39:
#line 117 "yacc_1.y"
    { ary[1]++; }
    break;

  case 40:
#line 118 "yacc_1.y"
    { ary[1]++; }
    break;

  case 42:
#line 123 "yacc_1.y"
    { ary[1]++; }
    break;

  case 43:
#line 124 "yacc_1.y"
    { ary[1]++; }
    break;

  case 45:
#line 129 "yacc_1.y"
    { ary[1]++; }
    break;

  case 46:
#line 130 "yacc_1.y"
    { ary[1]++; }
    break;

  case 47:
#line 131 "yacc_1.y"
    { ary[1]++; }
    break;

  case 48:
#line 132 "yacc_1.y"
    { ary[1]++; }
    break;

  case 50:
#line 137 "yacc_1.y"
    { ary[1]++; }
    break;

  case 51:
#line 138 "yacc_1.y"
    { ary[1]++; }
    break;

  case 53:
#line 143 "yacc_1.y"
    { ary[1]++; }
    break;

  case 55:
#line 148 "yacc_1.y"
    { ary[1]++; }
    break;

  case 57:
#line 153 "yacc_1.y"
    { ary[1]++; }
    break;

  case 59:
#line 158 "yacc_1.y"
    { ary[1]++; }
    break;

  case 61:
#line 163 "yacc_1.y"
    { ary[1]++; }
    break;

  case 63:
#line 168 "yacc_1.y"
    { ary[1]++; }
    break;

  case 65:
#line 173 "yacc_1.y"
    { ary[1]++; }
    break;

  case 80:
#line 213 "yacc_1.y"
    { if(checkint==1)
   { ary[2]++; checkint=0; }
      else if(checkchar==1)
   { ary[3]++; checkchar=0;}
   }
    break;

  case 81:
#line 219 "yacc_1.y"
    { if ( checkint ==1)
   { ary[2]++; checkint =0;}
   else if(checkchar ==1)
   { ary[3]++; checkchar=0;}
   }
    break;

  case 91:
#line 242 "yacc_1.y"
    { ary[1]++; }
    break;

  case 97:
#line 265 "yacc_1.y"
    {checkint =0; checkchar=0;}
    break;

  case 98:
#line 266 "yacc_1.y"
    {checkint =0; checkchar=1;}
    break;

  case 99:
#line 267 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 100:
#line 268 "yacc_1.y"
    {checkint=1; checkchar=0;}
    break;

  case 101:
#line 269 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 102:
#line 270 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 103:
#line 271 "yacc_1.y"
    {checkint =0; checkchar=0;}
    break;

  case 104:
#line 272 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 105:
#line 273 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 106:
#line 274 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 107:
#line 275 "yacc_1.y"
    {checkint=0; checkchar=0;}
    break;

  case 131:
#line 341 "yacc_1.y"
    { ary[1]++; }
    break;

  case 134:
#line 350 "yacc_1.y"
    { /*if( pc == 1 ) ary[4]++; pp = 1;*/ checkpoint=1;  }
    break;

  case 136:
#line 364 "yacc_1.y"
    { if(checkpoint==1) ary[4]++;
     if(checkint==1) ary[2]++;
     if(checkchar==1) ary[3]++;
     checkpoint=0; checkint=0; checkchar=0;
   }
    break;

  case 138:
#line 371 "yacc_1.y"
    { ary[5]++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
    break;

  case 139:
#line 378 "yacc_1.y"
    { ary[5]++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
    break;

  case 140:
#line 385 "yacc_1.y"
    { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
          checkpoint=0; checkint=0; checkchar=0;
   }
    break;

  case 141:
#line 392 "yacc_1.y"
    { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
    }
    break;

  case 142:
#line 399 "yacc_1.y"
    { //funcnum++;
     if(checkpoint==1) ary[4]--;
     if(checkint==1) ary[2]--;
     if(checkchar==1) ary[3]--;
     checkpoint=0; checkint=0; checkchar=0;
   }
    break;

  case 161:
#line 456 "yacc_1.y"
    {ary[4]++;}
    break;

  case 162:
#line 457 "yacc_1.y"
    {ary[4]++;}
    break;

  case 195:
#line 517 "yacc_1.y"
    {ary[1]++;}
    break;

  case 196:
#line 521 "yacc_1.y"
    { ary[6]++; }
    break;

  case 197:
#line 522 "yacc_1.y"
    { ary[6]++; }
    break;

  case 198:
#line 523 "yacc_1.y"
    { ary[6]++; }
    break;

  case 199:
#line 527 "yacc_1.y"
    { ary[7]++; }
    break;

  case 200:
#line 528 "yacc_1.y"
    { ary[7]++; }
    break;

  case 201:
#line 529 "yacc_1.y"
    { ary[7]++; }
    break;

  case 202:
#line 530 "yacc_1.y"
    { ary[7]++; }
    break;

  case 206:
#line 537 "yacc_1.y"
    { ary[8]++; }
    break;

  case 207:
#line 538 "yacc_1.y"
    { ary[8]++; }
    break;

  case 212:
#line 558 "yacc_1.y"
    { ary[0]++; if(checkint==1) ary[2]--; }
    break;

  case 213:
#line 559 "yacc_1.y"
    { ary[0]++; if(checkint==1) ary[2]--; }
    break;

  case 214:
#line 560 "yacc_1.y"
    { ary[0]++; if(checkint==1) ary[2]--;}
    break;

  case 215:
#line 561 "yacc_1.y"
    { ary[0]++; if(checkint==1) ary[2]--;}
    break;


/* Line 1267 of yacc.c.  */
#line 2365 "y.tab.c"
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


#line 564 "yacc_1.y"


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

yyerror(const char *str)
{
	fprintf(stderr,"error: %s\n",str);
}

