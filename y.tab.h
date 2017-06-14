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
     BOOL = 258,
     BREAK = 259,
     CASE = 260,
     CONST = 261,
     CONTINUE = 262,
     DEFAULT = 263,
     ELSE = 264,
     FALSE = 265,
     SWITCH = 266,
     FOR = 267,
     FUNC = 268,
     GO = 269,
     IF = 270,
     TRUE = 271,
     IMPORT = 272,
     INT = 273,
     NIL = 274,
     PRINT = 275,
     PRINTLN = 276,
     REAL = 277,
     RETURN = 278,
     STRING = 279,
     STRUCT = 280,
     TYPE = 281,
     VAR = 282,
     VOID = 283,
     WHILE = 284,
     READ = 285,
     STRING_CON = 286,
     REAL_CON = 287,
     BOOL_CON = 288,
     INT_CON = 289,
     ID = 290,
     LP = 291,
     RP = 292,
     LSB = 293,
     RSB = 294,
     LB = 295,
     RB = 296,
     SEMICOLON = 297,
     COLON = 298,
     COMMA = 299,
     PLUS = 300,
     SUB = 301,
     MUL = 302,
     DIV = 303,
     EXP = 304,
     REMAIN = 305,
     LESS = 306,
     LESSE = 307,
     MORE = 308,
     MOREE = 309,
     E = 310,
     NE = 311,
     AND = 312,
     OR = 313,
     NOT = 314,
     ASS = 315,
     PE = 316,
     SE = 317,
     ME = 318,
     DE = 319,
     MINUS = 320,
     POS = 321
   };
#endif
/* Tokens.  */
#define BOOL 258
#define BREAK 259
#define CASE 260
#define CONST 261
#define CONTINUE 262
#define DEFAULT 263
#define ELSE 264
#define FALSE 265
#define SWITCH 266
#define FOR 267
#define FUNC 268
#define GO 269
#define IF 270
#define TRUE 271
#define IMPORT 272
#define INT 273
#define NIL 274
#define PRINT 275
#define PRINTLN 276
#define REAL 277
#define RETURN 278
#define STRING 279
#define STRUCT 280
#define TYPE 281
#define VAR 282
#define VOID 283
#define WHILE 284
#define READ 285
#define STRING_CON 286
#define REAL_CON 287
#define BOOL_CON 288
#define INT_CON 289
#define ID 290
#define LP 291
#define RP 292
#define LSB 293
#define RSB 294
#define LB 295
#define RB 296
#define SEMICOLON 297
#define COLON 298
#define COMMA 299
#define PLUS 300
#define SUB 301
#define MUL 302
#define DIV 303
#define EXP 304
#define REMAIN 305
#define LESS 306
#define LESSE 307
#define MORE 308
#define MOREE 309
#define E 310
#define NE 311
#define AND 312
#define OR 313
#define NOT 314
#define ASS 315
#define PE 316
#define SE 317
#define ME 318
#define DE 319
#define MINUS 320
#define POS 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 28 "lala.y"
{
    struct
    {
        std::string* StringType;
        int value;
        char* type;
        std::string* strcon;
    }Token;
}
/* Line 1529 of yacc.c.  */
#line 191 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

