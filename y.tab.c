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




/* Copy the first part of user declarations.  */
#line 1 "lala.y"

#include "lex.yy.c"
#include "hw2.h"
#include "type_check.cpp"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
FILE *jasm;
vector<string> funlptmp;
type_check tc = type_check();

#define Trace(t)        printf(t)

int label=0;
string optmp;
void yyerror(char *msg);
int deterglobal=-1;
int jvm_index = 0;
int local_index = 0;


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
/* Line 193 of yacc.c.  */
#line 263 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 276 "y.tab.c"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  197

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
       0,     0,     3,     6,     8,    10,    13,    15,    17,    19,
      21,    24,    26,    27,    28,    29,    30,    42,    44,    46,
      48,    50,    52,    55,    60,    61,    66,    68,    70,    72,
      74,    80,    84,    91,    95,   102,   103,   107,   108,   112,
     115,   117,   120,   122,   124,   126,   128,   132,   136,   140,
     144,   148,   152,   156,   160,   164,   167,   171,   175,   179,
     182,   184,   186,   188,   190,   192,   194,   199,   201,   206,
     210,   212,   216,   220,   224,   229,   233,   236,   238,   241,
     242,   243,   252,   253,   257,   258,   260,   262,   266,   270,
     272,   274,   276,   278,   282,   285,   287,   289,   291,   293,
     295,   297,   300,   301,   302,   311,   312,   313,   320,   321,
     327,   328,   332,   333,   338
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    69,    71,    -1,    71,    -1,    70,    -1,
      70,    69,    -1,    80,    -1,    83,    -1,    82,    -1,    73,
      -1,    71,    73,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      13,    78,    35,    74,    36,    75,    79,    76,    37,    77,
      91,    -1,    18,    -1,    28,    -1,     3,    -1,    24,    -1,
      22,    -1,    35,    78,    -1,    79,    44,    35,    78,    -1,
      -1,     6,    35,    60,    81,    -1,    31,    -1,    16,    -1,
      10,    -1,    34,    -1,    27,    35,    78,    60,    81,    -1,
      27,    35,    78,    -1,    27,    35,    38,    81,    39,    78,
      -1,    35,    60,    87,    -1,    35,    38,    34,    39,    60,
      87,    -1,    -1,    20,    85,    87,    -1,    -1,    21,    86,
      87,    -1,    30,    35,    -1,    23,    -1,    23,    87,    -1,
      93,    -1,   110,    -1,    89,    -1,   112,    -1,    87,    45,
      87,    -1,    87,    46,    87,    -1,    87,    47,    87,    -1,
      87,    48,    87,    -1,    87,    55,    87,    -1,    87,    54,
      87,    -1,    87,    52,    87,    -1,    87,    51,    87,    -1,
      87,    53,    87,    -1,    59,    87,    -1,    87,    56,    87,
      -1,    87,    58,    87,    -1,    87,    57,    87,    -1,    46,
      87,    -1,    88,    -1,    81,    -1,   112,    -1,    89,    -1,
      81,    -1,    35,    -1,    35,    38,    34,    39,    -1,    89,
      -1,    35,    36,    90,    37,    -1,    35,    36,    37,    -1,
      87,    -1,    90,    44,    87,    -1,    40,    69,    72,    -1,
      40,    84,    72,    -1,    40,    69,    92,    72,    -1,    40,
      92,    72,    -1,    40,    72,    -1,    84,    -1,    84,    92,
      -1,    -1,    -1,    15,    36,    99,    37,    94,    98,    95,
      96,    -1,    -1,     9,    97,    98,    -1,    -1,    84,    -1,
      91,    -1,   100,    57,   100,    -1,   100,    58,   100,    -1,
     100,    -1,    16,    -1,    10,    -1,    88,    -1,    88,   101,
      88,    -1,    59,    88,    -1,    53,    -1,    54,    -1,    55,
      -1,    51,    -1,    52,    -1,    56,    -1,    12,    36,    -1,
      -1,    -1,    84,    42,    99,   104,    42,    84,   105,    37,
      -1,    -1,    -1,    99,   106,    42,    84,   107,    37,    -1,
      -1,    84,    42,    99,   108,    37,    -1,    -1,    37,    99,
     109,    -1,    -1,   102,   111,   103,    98,    -1,    14,    35,
      36,    90,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    70,    73,    73,    76,    76,    76,    79,
      80,    82,    97,   109,   112,   115,    96,   135,   135,   135,
     135,   135,   137,   149,   160,   163,   176,   176,   176,   176,
     179,   192,   208,   217,   232,   238,   237,   246,   245,   253,
     258,   259,   263,   264,   265,   266,   278,   284,   289,   294,
     299,   304,   309,   314,   319,   324,   330,   336,   342,   348,
     354,   357,   365,   366,   372,   379,   394,   401,   403,   425,
     433,   437,   443,   444,   445,   446,   447,   449,   450,   463,
     467,   463,   481,   480,   486,   488,   489,   491,   492,   493,
     499,   499,   499,   500,   515,   517,   520,   523,   526,   529,
     532,   536,   548,   552,   547,   559,   562,   558,   569,   568,
     576,   575,   584,   583,   592
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "BREAK", "CASE", "CONST",
  "CONTINUE", "DEFAULT", "ELSE", "FALSE", "SWITCH", "FOR", "FUNC", "GO",
  "IF", "TRUE", "IMPORT", "INT", "NIL", "PRINT", "PRINTLN", "REAL",
  "RETURN", "STRING", "STRUCT", "TYPE", "VAR", "VOID", "WHILE", "READ",
  "STRING_CON", "REAL_CON", "BOOL_CON", "INT_CON", "ID", "LP", "RP", "LSB",
  "RSB", "LB", "RB", "SEMICOLON", "COLON", "COMMA", "PLUS", "SUB", "MUL",
  "DIV", "EXP", "REMAIN", "LESS", "LESSE", "MORE", "MOREE", "E", "NE",
  "AND", "OR", "NOT", "ASS", "PE", "SE", "ME", "DE", "MINUS", "POS",
  "$accept", "program", "declarations", "declar", "function", "end",
  "func", "@1", "@2", "@3", "@4", "type", "formal_argument", "constant",
  "value", "variable", "array", "statement", "@5", "@6", "expression",
  "element", "fun_in", "sp", "compound", "morestatement", "condition",
  "@7", "@8", "else_con", "@9", "soc", "bool_expr", "bool_type", "bool_op",
  "for_start", "looptemp", "@10", "@11", "@12", "@13", "@14", "@15",
  "loop", "@16", "pro_in", 0
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    72,    74,    75,    76,    77,    73,    78,    78,    78,
      78,    78,    79,    79,    79,    80,    81,    81,    81,    81,
      82,    82,    83,    84,    84,    85,    84,    86,    84,    84,
      84,    84,    84,    84,    84,    84,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    91,    92,    92,    94,
      95,    93,    97,    96,    96,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   102,   104,   105,   103,   106,   107,   103,   108,   103,
     109,   103,   111,   110,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     1,     1,     1,     1,
       2,     1,     0,     0,     0,     0,    11,     1,     1,     1,
       1,     1,     2,     4,     0,     4,     1,     1,     1,     1,
       5,     3,     6,     3,     6,     0,     3,     0,     3,     2,
       1,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     4,     1,     4,     3,
       1,     3,     3,     3,     4,     3,     2,     1,     2,     0,
       0,     8,     0,     3,     0,     1,     1,     3,     3,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     8,     0,     0,     6,     0,     5,
       0,     3,     0,     4,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     4,     3,     9,     6,
       8,     7,     0,    19,    17,    21,    20,    18,     0,     0,
       1,     2,     5,    10,     0,    12,     0,    31,    28,    27,
      26,    29,    25,     0,     0,     0,    13,     0,    30,    24,
      32,     0,    14,    22,     0,     0,     0,    15,    23,     0,
       0,    16,     0,     0,     0,    35,    37,    40,     0,     0,
      11,     0,    76,     0,    44,     0,    42,   112,    43,    45,
     101,     0,     0,     0,     0,    65,     0,     0,    61,    41,
      60,    63,    62,    39,     0,     0,     0,    72,    77,     0,
      73,    78,    75,     0,     0,    28,    27,     0,    64,    92,
      67,     0,    89,    36,    38,     0,    59,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,     0,    33,    74,    65,     0,     0,    67,
     105,     0,     0,    94,    98,    99,    95,    96,    97,   100,
       0,    79,     0,     0,     0,    46,    47,    48,    49,    53,
      52,    54,    51,    50,    56,    58,    57,    68,     0,     0,
       0,   110,     0,     0,    85,    86,   113,   114,    93,     0,
      87,    88,    66,    71,     0,     0,   111,   102,     0,    80,
      34,    66,     0,     0,   106,    84,     0,   109,     0,    82,
      81,   103,   107,     0,     0,    83,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    62,     8,    33,    39,    45,
      49,    18,    42,     9,    78,    10,    11,    88,    73,    74,
     121,    80,    81,   122,   165,    91,    66,   169,   185,   190,
     193,   166,   101,   102,   140,    67,   131,   182,   194,   163,
     188,   183,   176,    68,    93,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -108
static const yytype_int16 yypact[] =
{
     119,    29,     6,    36,    91,    85,    27,    85,  -108,  -108,
    -108,  -108,    19,  -108,  -108,  -108,  -108,  -108,    82,   156,
    -108,    85,  -108,  -108,   211,  -108,   211,    62,  -108,  -108,
    -108,  -108,  -108,    88,    96,   211,  -108,     6,  -108,   106,
    -108,     6,    98,  -108,   112,   111,     6,  -108,  -108,   109,
     184,  -108,   115,   120,   124,  -108,  -108,   154,   126,   -20,
    -108,   203,  -108,   203,  -108,   128,  -108,  -108,  -108,  -108,
    -108,   131,    26,   154,   154,    15,   154,   154,  -108,   229,
    -108,  -108,  -108,  -108,    21,   137,   154,  -108,   243,   128,
    -108,  -108,  -108,   142,   154,  -108,  -108,   219,  -108,   263,
    -108,   138,   -37,   229,   229,   147,  -108,   257,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
    -108,   229,   -34,   143,   229,  -108,    10,    26,   141,   144,
    -108,   216,    52,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
     219,  -108,    26,    26,   148,    79,    79,  -108,  -108,    68,
      68,    68,    68,    68,    68,   257,   244,  -108,   154,   132,
     157,  -108,    26,   151,  -108,  -108,  -108,  -108,  -108,   216,
    -108,  -108,  -108,   229,   154,   158,  -108,   165,   243,  -108,
     229,   132,   153,   166,  -108,   197,   243,  -108,   171,  -108,
    -108,  -108,  -108,   216,   172,  -108,  -108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,     0,  -108,   205,    34,    66,  -108,  -108,  -108,
    -108,   -14,  -108,  -108,    -9,  -108,  -108,   -48,  -108,  -108,
      -8,   -68,   -50,   118,   167,   -42,  -108,  -108,  -108,  -108,
    -108,  -107,   -86,    -3,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -109
static const yytype_int16 yytable[] =
{
      64,    69,    63,   157,    99,    27,    22,   130,    65,    13,
     158,    64,    69,    64,    69,    32,    84,    34,    85,    89,
     142,   143,   100,    40,    14,    99,    38,    43,    15,   133,
      16,    28,    48,     1,    17,    53,    95,    29,    64,    69,
      86,   161,    96,   129,    69,   128,    84,   100,   160,    79,
      61,    84,    30,   105,     3,    31,    75,    30,   120,    99,
      31,    75,   179,    98,    12,   103,   104,    76,   106,   107,
      86,    19,   168,    23,    99,    99,   177,   100,   124,    24,
      77,    64,    69,   164,    98,    97,   195,    23,    98,   167,
     100,    20,   100,   100,    99,    87,   158,    90,     2,    92,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   100,   108,   109,   110,   111,    25,    98,    64,
      69,   164,    35,   125,    36,     1,   110,   111,    64,    69,
     184,    98,     2,    98,    98,    37,    64,    69,   191,   170,
     171,    41,    44,    64,    69,   164,     3,    46,    47,    50,
     173,    70,    95,    98,    52,    71,    53,    54,    96,    13,
      72,    83,    55,    56,    28,    57,   180,    94,    53,    60,
      29,   123,    58,    30,    14,   141,    31,   126,    15,   127,
      16,   144,   159,   162,    17,    30,   -44,   172,    31,    75,
       1,   175,   174,   178,    26,   186,    52,   181,    53,    54,
      76,    97,  -108,   187,    55,    56,   189,    57,   192,   196,
      21,     3,   132,    77,    58,    52,    51,    53,    54,    59,
       0,    28,     0,    55,    56,    60,    57,    29,    52,    28,
      53,    54,     0,    58,     0,    29,    55,    56,    59,    57,
       0,     0,    30,     0,    60,    31,    58,     0,     0,     0,
      30,    59,     0,    31,    75,    52,    50,    53,    54,     0,
       0,     0,     0,    55,    56,     0,    57,     0,     0,     0,
       0,     0,     0,    58,   108,   109,   110,   111,    59,     0,
     112,   113,   114,   115,   116,   117,   118,   119,     0,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   108,   109,   110,   111,     0,     0,   112,   113,
     114,   115,   116,   117,   134,   135,   136,   137,   138,   139
};

static const yytype_int16 yycheck[] =
{
      50,    50,    50,    37,    72,    19,     6,    93,    50,     3,
      44,    61,    61,    63,    63,    24,    36,    26,    38,    61,
      57,    58,    72,    37,    18,    93,    35,    41,    22,    97,
      24,    10,    46,     6,    28,    14,    10,    16,    88,    88,
      60,   127,    16,    93,    93,    93,    36,    97,    38,    57,
      50,    36,    31,    38,    27,    34,    35,    31,    37,   127,
      34,    35,   169,    72,    35,    73,    74,    46,    76,    77,
      60,    35,   140,     7,   142,   143,   162,   127,    86,    60,
      59,   131,   131,   131,    93,    59,   193,    21,    97,    37,
     140,     0,   142,   143,   162,    61,    44,    63,    13,    65,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   162,    45,    46,    47,    48,    35,   127,   169,
     169,   169,    60,    89,    36,     6,    47,    48,   178,   178,
     178,   140,    13,   142,   143,    39,   186,   186,   186,   142,
     143,    35,    44,   193,   193,   193,    27,    35,    37,    40,
     158,    36,    10,   162,    12,    35,    14,    15,    16,     3,
      36,    35,    20,    21,    10,    23,   174,    36,    14,    41,
      16,    34,    30,    31,    18,    37,    34,    35,    22,    37,
      24,    34,    39,    42,    28,    31,    42,    39,    34,    35,
       6,    34,    60,    42,    38,    42,    12,    39,    14,    15,
      46,    59,    37,    37,    20,    21,     9,    23,    37,    37,
       5,    27,    94,    59,    30,    12,    49,    14,    15,    35,
      -1,    10,    -1,    20,    21,    41,    23,    16,    12,    10,
      14,    15,    -1,    30,    -1,    16,    20,    21,    35,    23,
      -1,    -1,    31,    -1,    41,    34,    30,    -1,    -1,    -1,
      31,    35,    -1,    34,    35,    12,    40,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    45,    46,    47,    48,    35,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    51,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    13,    27,    68,    69,    70,    71,    73,    80,
      82,    83,    35,     3,    18,    22,    24,    28,    78,    35,
       0,    71,    69,    73,    60,    35,    38,    78,    10,    16,
      31,    34,    81,    74,    81,    60,    36,    39,    81,    75,
      78,    35,    79,    78,    44,    76,    35,    37,    78,    77,
      40,    91,    12,    14,    15,    20,    21,    23,    30,    35,
      41,    69,    72,    84,    89,    92,    93,   102,   110,   112,
      36,    35,    36,    85,    86,    35,    46,    59,    81,    87,
      88,    89,   112,    35,    36,    38,    60,    72,    84,    92,
      72,    92,    72,   111,    36,    10,    16,    59,    81,    88,
      89,    99,   100,    87,    87,    38,    87,    87,    45,    46,
      47,    48,    51,    52,    53,    54,    55,    56,    57,    58,
      37,    87,    90,    34,    87,    72,    35,    37,    84,    89,
      99,   103,    90,    88,    51,    52,    53,    54,    55,    56,
     101,    37,    57,    58,    34,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    37,    44,    39,
      38,    99,    42,   106,    84,    91,    98,    37,    88,    94,
     100,   100,    39,    87,    60,    34,   109,    99,    42,    98,
      87,    39,   104,   108,    84,    95,    42,    37,   107,     9,
      96,    84,    37,    97,   105,    98,    37
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
        case 11:
#line 83 "lala.y"
    {
            // fprintf(jasm, "}\n");
            del();
            // tc.printlocal();
            tc.deletlocal();
            local_index=0;
        }
    break;

  case 12:
#line 97 "lala.y"
    {   
                if(lookup((yyvsp[(3) - (3)].Token).StringType->c_str())==true){
                    return 1;
                }
                else{
                    insert((yyvsp[(3) - (3)].Token).StringType->c_str());
                }
                if(strcmp((yyvsp[(3) - (3)].Token).StringType->c_str(), "main") == 0)
                    fprintf(jasm, "method public static void main(java.lang.String[]");
                else
                    fprintf(jasm, "method public static %s %s(", (yyvsp[(2) - (3)].Token).type,(yyvsp[(3) - (3)].Token).StringType);
            }
    break;

  case 13:
#line 109 "lala.y"
    {
                create();
            }
    break;

  case 14:
#line 112 "lala.y"
    {

            }
    break;

  case 15:
#line 115 "lala.y"
    {
                for(int i = 0;i < funlptmp.size();i++)
                {
                    fprintf(jasm, ", %s", funlptmp[i].c_str());
                }
                fprintf(jasm, ")\n");
                fprintf(jasm, "max_stack 15\n");
                fprintf(jasm, "max_locals 15\n");
                fprintf(jasm, "{\n");
                tc.add((yyvsp[(3) - (9)].Token).StringType->c_str(), (yyvsp[(2) - (9)].Token).type, funlptmp.size());
                funlptmp.clear();
            }
    break;

  case 16:
#line 127 "lala.y"
    {   
                if(strcmp((yyvsp[(3) - (11)].Token).StringType->c_str(), "main") == 0)
                    fprintf(jasm, "return\n");
                fprintf(jasm, "}\n");

            }
    break;

  case 17:
#line 135 "lala.y"
    {(yyval.Token).type=strdup("int");}
    break;

  case 18:
#line 135 "lala.y"
    {(yyval.Token).type=strdup("void");}
    break;

  case 19:
#line 135 "lala.y"
    {(yyval.Token).type=strdup("bool");}
    break;

  case 20:
#line 135 "lala.y"
    {(yyval.Token).type=strdup("string");}
    break;

  case 21:
#line 135 "lala.y"
    {(yyval.Token).type=strdup("real");}
    break;

  case 22:
#line 138 "lala.y"
    {
                    if(lookup((yyvsp[(1) - (2)].Token).StringType->c_str())==true)
                        return 1;
                    else
                        insert((yyvsp[(1) - (2)].Token).StringType->c_str());
                    funlptmp.push_back((yyvsp[(2) - (2)].Token).type);
                    if(getIndex()==0)
                        tc.add((yyvsp[(1) - (2)].Token).StringType->c_str(), (yyvsp[(2) - (2)].Token).type, jvm_index++);
                    else
                        tc.addlocal((yyvsp[(1) - (2)].Token).StringType->c_str(), (yyvsp[(2) - (2)].Token).type, local_index++);
                }
    break;

  case 23:
#line 150 "lala.y"
    {
                    if(lookup((yyvsp[(3) - (4)].Token).StringType->c_str())==true)
                        return 1;
                    else
                        insert((yyvsp[(3) - (4)].Token).StringType->c_str());
                    funlptmp.push_back((yyvsp[(4) - (4)].Token).type);
                    if(getIndex()==0)
                        tc.add((yyvsp[(3) - (4)].Token).StringType->c_str(), (yyvsp[(4) - (4)].Token).type, jvm_index++);
                    else
                        tc.addlocal((yyvsp[(3) - (4)].Token).StringType->c_str(), (yyvsp[(4) - (4)].Token).type, local_index++);
                }
    break;

  case 25:
#line 164 "lala.y"
    {
                if(lookup((yyvsp[(2) - (4)].Token).StringType->c_str())==true)
                    return 1;
                else
                    insert((yyvsp[(2) - (4)].Token).StringType->c_str());
                if(getIndex()==0)
                    tc.add((yyvsp[(2) - (4)].Token).StringType->c_str(), "int", jvm_index++);
                else
                    tc.addlocal((yyvsp[(2) - (4)].Token).StringType->c_str(), "int", local_index++);
            }
    break;

  case 26:
#line 176 "lala.y"
    {(yyval.Token).strcon=(yyvsp[(1) - (1)].Token).strcon;(yyval.Token).type="string";}
    break;

  case 27:
#line 176 "lala.y"
    {(yyval.Token).value=1;}
    break;

  case 28:
#line 176 "lala.y"
    {(yyval.Token).value=0;}
    break;

  case 29:
#line 176 "lala.y"
    {(yyval.Token).value=(yyvsp[(1) - (1)].Token).value;(yyval.Token).type="int";}
    break;

  case 30:
#line 180 "lala.y"
    {

            if(lookup((yyvsp[(2) - (5)].Token).StringType->c_str())==true)
                return 1;
            else
                insert((yyvsp[(2) - (5)].Token).StringType->c_str());
            fprintf(jasm, "field static int %s = %d\n",(yyvsp[(2) - (5)].Token).StringType->c_str(),(yyvsp[(5) - (5)].Token).value );
            if(getIndex()==0)
                tc.add((yyvsp[(2) - (5)].Token).StringType->c_str(), (yyvsp[(3) - (5)].Token).type, jvm_index++);
            else
                tc.addlocal((yyvsp[(2) - (5)].Token).StringType->c_str(), (yyvsp[(3) - (5)].Token).type, local_index++);
        }
    break;

  case 31:
#line 193 "lala.y"
    {

            if(lookup((yyvsp[(2) - (3)].Token).StringType->c_str())==true)
                return 1;
            else
                insert((yyvsp[(2) - (3)].Token).StringType->c_str());
            fprintf(jasm, "field static int %s\n",(yyvsp[(2) - (3)].Token).StringType->c_str());
            if(getIndex()==0)
                tc.add((yyvsp[(2) - (3)].Token).StringType->c_str(), (yyvsp[(3) - (3)].Token).type, jvm_index++);
            else
                tc.addlocal((yyvsp[(2) - (3)].Token).StringType->c_str(), (yyvsp[(3) - (3)].Token).type, local_index++);

        }
    break;

  case 32:
#line 209 "lala.y"
    {
            if(lookup((yyvsp[(2) - (6)].Token).StringType->c_str())==true)
                return 1;
            else
                insert((yyvsp[(2) - (6)].Token).StringType->c_str());
        }
    break;

  case 33:
#line 218 "lala.y"
    {
                if(alllookup((yyvsp[(1) - (3)].Token).StringType->c_str())==false)
                    return 1;
        
                if(tc.find_local_index((yyvsp[(1) - (3)].Token).StringType->c_str())==-1)
                {
                    if(tc.find_global_index((yyvsp[(1) - (3)].Token).StringType->c_str())==-1)
                        return 1;
                    else
                        fprintf(jasm, "putstatic int example.%s\n", (yyvsp[(1) - (3)].Token).StringType->c_str());
                }
            else
                fprintf(jasm, "istore %d\n", tc.find_local_index((yyvsp[(1) - (3)].Token).StringType->c_str()));
            }
    break;

  case 34:
#line 233 "lala.y"
    {
                if(alllookup((yyvsp[(1) - (6)].Token).StringType->c_str())==false)
                    return 1;
            }
    break;

  case 35:
#line 238 "lala.y"
    {
                fprintf(jasm, "getstatic java.io.PrintStream java.lang.System.out\n" );
            }
    break;

  case 36:
#line 241 "lala.y"
    {
                fprintf(jasm, "invokevirtual void java.io.PrintStream.print(" );
                fprintf(jasm, "%s)\n" , (yyvsp[(3) - (3)].Token).type);
            }
    break;

  case 37:
#line 246 "lala.y"
    {
                fprintf(jasm, "getstatic java.io.PrintStream java.lang.System.out\n" );
            }
    break;

  case 38:
#line 249 "lala.y"
    {
                fprintf(jasm, "ldc %s\n" , (yyvsp[(3) - (3)].Token).strcon->c_str());
                fprintf(jasm, "invokevirtual void java.io.PrintStream.println(java.lang.String)\n" );
            }
    break;

  case 39:
#line 254 "lala.y"
    {
                if(alllookup((yyvsp[(2) - (2)].Token).StringType->c_str())==false)
                    return 1;
            }
    break;

  case 41:
#line 260 "lala.y"
    {
                fprintf(jasm, "ireturn\n" );
            }
    break;

  case 46:
#line 279 "lala.y"
    {
        // tc.printlocal();
        fprintf(jasm, "iadd\n" );
        (yyval.Token).type = (yyvsp[(1) - (3)].Token).type;
    }
    break;

  case 47:
#line 285 "lala.y"
    {
        fprintf(jasm, "isub\n" );
        (yyval.Token).type = (yyvsp[(1) - (3)].Token).type;
    }
    break;

  case 48:
#line 290 "lala.y"
    {
        fprintf(jasm, "imul\n" );
        (yyval.Token).type = (yyvsp[(1) - (3)].Token).type;
    }
    break;

  case 49:
#line 295 "lala.y"
    {
        fprintf(jasm, "idiv\n" );
        (yyval.Token).type = (yyvsp[(1) - (3)].Token).type;
    }
    break;

  case 50:
#line 300 "lala.y"
    {
        fprintf(jasm, "ifeq\n" );
        (yyval.Token).type = "boolean";
    }
    break;

  case 51:
#line 305 "lala.y"
    {
        fprintf(jasm, "ifge\n" );
        (yyval.Token).type = "boolean";
    }
    break;

  case 52:
#line 310 "lala.y"
    {
        fprintf(jasm, "ifle\n" );
        (yyval.Token).type = "boolean";
    }
    break;

  case 53:
#line 315 "lala.y"
    {
        fprintf(jasm, "iflt\n" );
        (yyval.Token).type = "boolean";
    }
    break;

  case 54:
#line 320 "lala.y"
    {
        fprintf(jasm, "ifgt\n" );
        (yyval.Token).type = "boolean";
    }
    break;

  case 55:
#line 325 "lala.y"
    {
        fprintf(jasm, "ixor\n" );
        (yyval.Token).type = "boolean";

    }
    break;

  case 56:
#line 331 "lala.y"
    {
        fprintf(jasm, "ifne\n" );
        (yyval.Token).type = "boolean";

    }
    break;

  case 57:
#line 337 "lala.y"
    {
        fprintf(jasm, "ior\n");
        (yyval.Token).type = "boolean";

    }
    break;

  case 58:
#line 343 "lala.y"
    {
        fprintf(jasm, "iand\n" );
        (yyval.Token).type = "boolean";

    }
    break;

  case 59:
#line 349 "lala.y"
    {
        fprintf(jasm, "ineg\n" ); 
        (yyval.Token).type = "int";
 
    }
    break;

  case 60:
#line 354 "lala.y"
    {
        (yyval.Token) = (yyvsp[(1) - (1)].Token);
    }
    break;

  case 61:
#line 358 "lala.y"
    {
        cout<<(yyvsp[(1) - (1)].Token).type<<endl;
        if((yyvsp[(1) - (1)].Token).type=="int")
            fprintf(jasm, "sipush %d\n", (yyvsp[(1) - (1)].Token).value);
        cout<<"!!!!!!!!!"<<endl;
        (yyval.Token) = (yyvsp[(1) - (1)].Token);
    }
    break;

  case 64:
#line 372 "lala.y"
    {
            cout<<(yyvsp[(1) - (1)].Token).type<<endl;
            if((yyvsp[(1) - (1)].Token).type=="int")
            fprintf(jasm, "sipush %d\n", (yyvsp[(1) - (1)].Token).value);
            cout<<"!!!!!!!!!"<<endl;
            (yyval.Token) = (yyvsp[(1) - (1)].Token);
        }
    break;

  case 65:
#line 380 "lala.y"
    {
            (yyval.Token) = (yyvsp[(1) - (1)].Token);
            (yyval.Token).type = "int";
            if(tc.find_local_index((yyvsp[(1) - (1)].Token).StringType->c_str())==-1)
            {
                if(tc.find_global_index((yyvsp[(1) - (1)].Token).StringType->c_str())==-1)
                    return 1;
                else
                    fprintf(jasm, "getstatic int proj3.%s\n", (yyvsp[(1) - (1)].Token).StringType->c_str());
            }
            else
                fprintf(jasm, "iload %d\n", tc.find_local_index((yyvsp[(1) - (1)].Token).StringType->c_str()));   
            (yyval.Token).StringType=(yyvsp[(1) - (1)].Token).StringType;
        }
    break;

  case 66:
#line 395 "lala.y"
    {
            if(alllookup((yyvsp[(1) - (4)].Token).StringType->c_str())==false)
                return 1;
            (yyval.Token).StringType=(yyvsp[(1) - (4)].Token).StringType;
            (yyval.Token) = (yyvsp[(1) - (4)].Token);
        }
    break;

  case 68:
#line 404 "lala.y"
    {
            if(alllookup((yyvsp[(1) - (4)].Token).StringType->c_str())==false)
                return 1;
            if(lookup((yyvsp[(3) - (4)].Token).StringType->c_str())==true){
                return 1;
            }
            if(tc.find_global_index((yyvsp[(1) - (4)].Token).StringType->c_str()) > 0)
            {
                fprintf(jasm, "invokestatic int proj3.%s(int", (yyvsp[(1) - (4)].Token).StringType->c_str());
                // cout<<$1.StringType->c_str() << $1.value-1<<endl;
                for(int i = 0; i < tc.find_global_index((yyvsp[(1) - (4)].Token).StringType->c_str()) - 1; i++)
                {
                    fprintf(jasm, ", int");
                }
                fprintf(jasm,")\n");
            }
            else
                fprintf(jasm, "invokestatic int proj3.%s()\n", (yyvsp[(1) - (4)].Token).StringType->c_str());
            (yyval.Token).StringType=(yyvsp[(1) - (4)].Token).StringType;
            (yyval.Token) = (yyvsp[(1) - (4)].Token);
        }
    break;

  case 69:
#line 426 "lala.y"
    {
            if(alllookup((yyvsp[(1) - (3)].Token).StringType->c_str())==false)
                return 1;
            (yyval.Token).StringType=(yyvsp[(1) - (3)].Token).StringType;
            (yyval.Token) = (yyvsp[(1) - (3)].Token);
        }
    break;

  case 70:
#line 434 "lala.y"
    {
        (yyval.Token).StringType=(yyvsp[(1) - (1)].Token).StringType;
    }
    break;

  case 71:
#line 438 "lala.y"
    {
        (yyval.Token).StringType=(yyvsp[(3) - (3)].Token).StringType;
    }
    break;

  case 79:
#line 463 "lala.y"
    {
                create();
                
            }
    break;

  case 80:
#line 467 "lala.y"
    {
                label++;
                fprintf(jasm, "goto L%d\n", label);
            }
    break;

  case 81:
#line 471 "lala.y"
    {
                fprintf(jasm, "L%d:\n", label);
                label=0;
            }
    break;

  case 82:
#line 481 "lala.y"
    {
                fprintf(jasm, "L%d:\n", label-1);
            }
    break;

  case 83:
#line 484 "lala.y"
    { 
                create();
            }
    break;

  case 93:
#line 501 "lala.y"
    {
                fprintf(jasm, "isub\n" );
                fprintf(jasm, "%s L%d\n",optmp.c_str(),label);
                fprintf(jasm, "iconst_0\n" );
                fprintf(jasm, "goto L%d\n", label+1);
                //Ltrue
                fprintf(jasm, "L%d:\n",label);
                fprintf(jasm, "iconst_1\n");
                //Lfalse
                fprintf(jasm, "L%d:\n",label+1);
                //exit
                fprintf(jasm, "ifeq L%d\n",label+2);
                label+=2;
            }
    break;

  case 95:
#line 517 "lala.y"
    {
                optmp="ifgt";
            }
    break;

  case 96:
#line 520 "lala.y"
    {
                optmp="ifge";
            }
    break;

  case 97:
#line 523 "lala.y"
    {
                optmp="ifeq";
            }
    break;

  case 98:
#line 526 "lala.y"
    {
                optmp="iflt";
            }
    break;

  case 99:
#line 529 "lala.y"
    {
                optmp="ifle";
            }
    break;

  case 100:
#line 532 "lala.y"
    {
                optmp="ifne";
            }
    break;

  case 101:
#line 537 "lala.y"
    {
            }
    break;

  case 102:
#line 548 "lala.y"
    {
                //body
                fprintf(jasm, "goto L%d\n",label+1);
            }
    break;

  case 103:
#line 552 "lala.y"
    {
                fprintf(jasm, "L%d:\n",label+2);
            }
    break;

  case 104:
#line 555 "lala.y"
    {
                create(); 
            }
    break;

  case 105:
#line 559 "lala.y"
    {
                fprintf(jasm, "goto L%d\n",label+1);
            }
    break;

  case 106:
#line 562 "lala.y"
    {
                fprintf(jasm, "L%d:\n",label+2);
            }
    break;

  case 107:
#line 565 "lala.y"
    {
                create();
            }
    break;

  case 108:
#line 569 "lala.y"
    {
                fprintf(jasm, "goto L%d\n",label+1);
            }
    break;

  case 109:
#line 572 "lala.y"
    {
                create();
            }
    break;

  case 110:
#line 576 "lala.y"
    {
                fprintf(jasm, "goto L%d\n",label+1);
            }
    break;

  case 111:
#line 579 "lala.y"
    {
                create();
            }
    break;

  case 112:
#line 584 "lala.y"
    {
                fprintf(jasm, "L%d:\n",label);
                label++;
            }
    break;

  case 113:
#line 588 "lala.y"
    {
                fprintf(jasm, "L%d:\n",label);
            }
    break;

  case 114:
#line 593 "lala.y"
    {
            (yyval.Token).StringType=(yyvsp[(2) - (5)].Token).StringType;
        }
    break;


/* Line 1267 of yacc.c.  */
#line 2377 "y.tab.c"
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


#line 601 "lala.y"


void yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

int main(int argc, char *argv[])
{
    create(); 

    jasm = fopen("B10315028.jasm","w");
    fprintf(jasm,"class proj3\n");
    fprintf(jasm,"{\n");

    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */


    dump();
    tc.printTc();
    fprintf(jasm, "}\n");

    return 0;
}
