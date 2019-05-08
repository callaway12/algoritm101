/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     SUB_ASS = 285
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

