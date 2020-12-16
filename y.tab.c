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
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     AUTO_SYM = 264,
     STATIC_SYM = 265,
     TYPEDEF_SYM = 266,
     STRUCT_SYM = 267,
     ENUM_SYM = 268,
     SIZEOF_SYM = 269,
     UNION_SYM = 270,
     IF_SYM = 271,
     ELSE_SYM = 272,
     WHILE_SYM = 273,
     DO_SYM = 274,
     FOR_SYM = 275,
     CONTINUE_SYM = 276,
     BREAK_SYM = 277,
     RETURN_SYM = 278,
     SWITCH_SYM = 279,
     CASE_SYM = 280,
     DEFAULT_SYM = 281,
     PLUS = 282,
     MINUS = 283,
     PLUSPLUS = 284,
     MINUSMINUS = 285,
     BAR = 286,
     AMP = 287,
     BARBAR = 288,
     AMPAMP = 289,
     STAR = 290,
     SLASH = 291,
     PERCENT = 292,
     ASSIGN = 293,
     ARROW = 294,
     COLON = 295,
     SEMICOLON = 296,
     DOTDOTDOT = 297,
     PERIOD = 298,
     COMMA = 299,
     EXCL = 300,
     LSS = 301,
     GTR = 302,
     LEQ = 303,
     GEQ = 304,
     EQL = 305,
     NEQ = 306,
     LP = 307,
     RP = 308,
     LB = 309,
     RB = 310,
     LR = 311,
     RR = 312
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define AUTO_SYM 264
#define STATIC_SYM 265
#define TYPEDEF_SYM 266
#define STRUCT_SYM 267
#define ENUM_SYM 268
#define SIZEOF_SYM 269
#define UNION_SYM 270
#define IF_SYM 271
#define ELSE_SYM 272
#define WHILE_SYM 273
#define DO_SYM 274
#define FOR_SYM 275
#define CONTINUE_SYM 276
#define BREAK_SYM 277
#define RETURN_SYM 278
#define SWITCH_SYM 279
#define CASE_SYM 280
#define DEFAULT_SYM 281
#define PLUS 282
#define MINUS 283
#define PLUSPLUS 284
#define MINUSMINUS 285
#define BAR 286
#define AMP 287
#define BARBAR 288
#define AMPAMP 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define ARROW 294
#define COLON 295
#define SEMICOLON 296
#define DOTDOTDOT 297
#define PERIOD 298
#define COMMA 299
#define EXCL 300
#define LSS 301
#define GTR 302
#define LEQ 303
#define GEQ 304
#define EQL 305
#define NEQ 306
#define LP 307
#define RP 308
#define LB 309
#define RB 310
#define LR 311
#define RR 312




/* Copy the first part of user declarations.  */
#line 2 "kim.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include <stdio.h>
#include "support_func.h"

extern int line_no, syntax_err, current_level;
extern char *yytext;
extern A_ID *current_id;
extern int yylex();
extern A_NODE *root;
extern A_TYPE *int_type;



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
#line 235 "y.tab.c"

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    15,    20,
      21,    25,    26,    28,    30,    33,    37,    39,    41,    44,
      47,    49,    51,    53,    54,    56,    58,    62,    64,    68,
      70,    74,    76,    80,    82,    84,    86,    87,    88,    96,
      97,    98,   105,   108,   110,   112,   114,   117,   121,   123,
     127,   129,   130,   137,   138,   144,   147,   149,   153,   155,
     156,   161,   164,   166,   168,   171,   173,   177,   182,   183,
     189,   190,   192,   194,   198,   200,   204,   207,   210,   211,
     213,   215,   217,   220,   224,   228,   233,   237,   242,   243,
     245,   247,   250,   252,   254,   256,   258,   260,   262,   267,
     271,   272,   278,   280,   283,   289,   297,   303,   309,   317,
     323,   329,   330,   332,   336,   339,   342,   343,   345,   347,
     351,   352,   354,   356,   358,   360,   362,   366,   368,   370,
     374,   376,   380,   382,   384,   386,   388,   392,   396,   398,
     402,   406,   410,   414,   416,   418,   422,   426,   428,   432,
     436,   440,   442,   447,   449,   452,   455,   458,   461,   464,
     467,   470,   473,   478,   480,   485,   490,   494,   498,   501,
     504,   506,   508,   510,   512,   514,   518
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    -1,    60,    61,    -1,
      62,    -1,    67,    -1,    -1,    68,    92,    63,   107,    -1,
      -1,    92,    64,   107,    -1,    -1,    66,    -1,    67,    -1,
      66,    67,    -1,    68,    70,    41,    -1,    75,    -1,    69,
      -1,    75,    68,    -1,    69,    68,    -1,     9,    -1,    10,
      -1,    11,    -1,    -1,    71,    -1,    72,    -1,    71,    44,
      72,    -1,    92,    -1,    92,    38,    73,    -1,   118,    -1,
      56,    74,    57,    -1,    73,    -1,    74,    44,    73,    -1,
      76,    -1,    86,    -1,     4,    -1,    -1,    -1,    81,     3,
      77,    56,    78,    82,    57,    -1,    -1,    -1,    81,    79,
      56,    80,    82,    57,    -1,    81,     3,    -1,    12,    -1,
      15,    -1,    83,    -1,    82,    83,    -1,    75,    84,    41,
      -1,    85,    -1,    84,    44,    85,    -1,    92,    -1,    -1,
      13,     3,    87,    56,    89,    57,    -1,    -1,    13,    88,
      56,    89,    57,    -1,    13,     3,    -1,    90,    -1,    89,
      44,    90,    -1,     3,    -1,    -1,     3,    91,    38,   119,
      -1,    93,    94,    -1,    94,    -1,    35,    -1,    35,    93,
      -1,     3,    -1,    52,    92,    53,    -1,    94,    54,   117,
      55,    -1,    -1,    94,    52,    95,    96,    53,    -1,    -1,
      97,    -1,    98,    -1,    98,    44,    42,    -1,    99,    -1,
      98,    44,    99,    -1,    68,    92,    -1,    68,   100,    -1,
      -1,   101,    -1,   102,    -1,    93,    -1,    93,   102,    -1,
      52,   101,    53,    -1,    54,   117,    55,    -1,   102,    54,
     117,    55,    -1,    52,    96,    53,    -1,   102,    52,    96,
      53,    -1,    -1,   104,    -1,   105,    -1,   104,   105,    -1,
     106,    -1,   107,    -1,   109,    -1,   110,    -1,   111,    -1,
     114,    -1,    25,   118,    40,   105,    -1,    26,    40,   105,
      -1,    -1,    56,   108,    65,   103,    57,    -1,    41,    -1,
     119,    41,    -1,    16,    52,   119,    53,   105,    -1,    16,
      52,   119,    53,   105,    17,   105,    -1,    24,    52,   119,
      53,   105,    -1,    18,    52,   119,    53,   105,    -1,    19,
     105,    18,    52,   119,    53,    41,    -1,    20,    52,   112,
      53,   105,    -1,   113,    41,   113,    41,   113,    -1,    -1,
     119,    -1,    23,   119,    41,    -1,    21,    41,    -1,    22,
      41,    -1,    -1,   116,    -1,   121,    -1,   116,    44,   121,
      -1,    -1,   118,    -1,   119,    -1,   120,    -1,   121,    -1,
     122,    -1,   134,    38,   121,    -1,   123,    -1,   124,    -1,
     123,    33,   124,    -1,   125,    -1,   124,    34,   125,    -1,
     126,    -1,   127,    -1,   128,    -1,   129,    -1,   128,    50,
     129,    -1,   128,    51,   129,    -1,   130,    -1,   129,    46,
     130,    -1,   129,    47,   130,    -1,   129,    48,   130,    -1,
     129,    49,   130,    -1,   131,    -1,   132,    -1,   131,    27,
     132,    -1,   131,    28,   132,    -1,   133,    -1,   132,    35,
     133,    -1,   132,    36,   133,    -1,   132,    37,   133,    -1,
     134,    -1,    52,   137,    53,   133,    -1,   135,    -1,    29,
     134,    -1,    30,   134,    -1,    32,   133,    -1,    35,   133,
      -1,    45,   133,    -1,    28,   133,    -1,    27,   133,    -1,
      14,   134,    -1,    14,    52,   137,    53,    -1,   136,    -1,
     135,    54,   119,    55,    -1,   135,    52,   115,    53,    -1,
     135,    43,     3,    -1,   135,    39,     3,    -1,   135,    29,
      -1,   135,    30,    -1,     3,    -1,     6,    -1,     5,    -1,
       7,    -1,     8,    -1,    52,   119,    53,    -1,    68,   100,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    34,    35,    39,    40,    44,    44,    45,
      45,    49,    50,    54,    55,    59,    63,    64,    65,    66,
      70,    71,    72,    76,    77,    81,    82,    86,    87,    91,
      92,    96,    97,   101,   102,   103,   107,   107,   107,   108,
     108,   108,   109,   113,   114,   118,   119,   123,   127,   128,
     132,   136,   136,   137,   137,   138,   142,   143,   147,   148,
     148,   152,   153,   157,   158,   162,   163,   164,   165,   165,
     169,   170,   174,   175,   179,   180,   184,   185,   189,   190,
     194,   195,   196,   200,   201,   202,   203,   204,   208,   209,
     213,   214,   218,   219,   220,   221,   222,   223,   227,   228,
     232,   232,   236,   237,   241,   242,   243,   247,   248,   249,
     253,   257,   258,   262,   263,   264,   268,   269,   273,   274,
     278,   279,   283,   287,   291,   295,   296,   300,   304,   305,
     309,   310,   314,   318,   322,   326,   327,   328,   332,   333,
     334,   335,   336,   340,   344,   345,   346,   350,   351,   352,
     353,   357,   358,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   375,   376,   377,   378,   379,   380,   381,
     385,   386,   387,   388,   389,   390,   394
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "STAR", "SLASH",
  "PERCENT", "ASSIGN", "ARROW", "COLON", "SEMICOLON", "DOTDOTDOT",
  "PERIOD", "COMMA", "EXCL", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ",
  "LP", "RP", "LB", "RB", "LR", "RR", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", 0
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    21,    22,    43,    53,    44,    63,
       0,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,    64,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,     0,   161,   160,
     151,   159,     0,   154,   155,   156,   157,   158,    78,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,     0,
     116,     0,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,   166,     0,   117,   118,
       0,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,     0,
       0,     0,   101,    91,   103,    86,    83,    84,     0,     0,
     119,    49,     0,     0,     0,     0,     0,   112,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    43,
      26,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   265,   266,   221,   187,   188,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -266
static const yytype_int16 yypact[] =
{
     268,  -266,  -266,  -266,  -266,  -266,  -266,    13,  -266,     6,
      40,    46,   268,  -266,  -266,  -266,    40,   379,   379,  -266,
      45,  -266,  -266,    25,    91,     7,    23,  -266,    41,  -266,
    -266,    62,    63,  -266,   -19,  -266,  -266,    75,    92,    97,
      91,  -266,   335,   104,   139,  -266,  -266,    40,   127,    97,
     107,  -266,  -266,  -266,   379,  -266,  -266,  -266,  -266,  -266,
     368,   335,   335,   401,   401,   335,   335,   335,   302,   112,
    -266,  -266,  -266,  -266,  -266,   148,   168,  -266,  -266,  -266,
      86,   142,  -266,   143,   138,  -266,   161,   296,  -266,   139,
     167,    30,  -266,  -266,   183,   127,  -266,  -266,  -266,  -266,
     165,   379,    17,   177,  -266,   189,  -266,   302,  -266,  -266,
    -266,  -266,   335,  -266,  -266,  -266,  -266,  -266,    -3,   184,
     185,  -266,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,  -266,  -266,   236,   237,
     335,   335,    39,   203,   139,  -266,  -266,    47,   165,    40,
      27,  -266,   190,   379,  -266,    40,   240,   335,  -266,    24,
    -266,  -266,   130,  -266,   286,   192,   250,   140,  -266,  -266,
     335,   168,  -266,   142,   142,  -266,  -266,  -266,  -266,   138,
     138,  -266,  -266,  -266,  -266,  -266,  -266,   195,   212,  -266,
     202,  -266,   335,  -266,   127,  -266,    32,    67,  -266,  -266,
    -266,  -266,   206,   214,   190,   215,   223,   227,   335,   217,
     335,   230,  -266,   216,   190,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,   233,  -266,   229,   231,   221,   130,   379,   335,
    -266,  -266,  -266,  -266,  -266,   335,  -266,  -266,  -266,  -266,
    -266,    40,   335,   335,   269,   335,  -266,  -266,   245,   335,
     248,   190,  -266,  -266,  -266,  -266,  -266,  -266,   238,   234,
    -266,  -266,   247,   265,   241,   266,   280,  -266,  -266,   270,
     190,  -266,  -266,  -266,   190,   190,   335,   190,   335,   190,
    -266,   305,  -266,   271,  -266,   292,  -266,   190,   295,   335,
    -266,  -266,  -266
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,   315,  -266,  -266,  -266,  -266,  -266,   -89,
       5,  -266,  -266,  -266,   297,   -84,  -266,   -82,  -266,  -266,
    -266,  -266,  -266,  -266,   197,  -129,  -266,   105,  -266,  -266,
    -266,   262,   208,  -266,    -9,    -5,   -15,  -266,   -52,  -266,
    -266,   191,   235,   -61,   -87,  -266,  -266,  -189,  -266,    90,
    -266,  -266,  -266,  -266,  -266,  -265,  -266,  -266,  -266,  -147,
     -45,   -42,  -266,  -126,  -266,  -266,   239,   243,  -266,  -266,
    -266,    61,   100,  -266,    93,   -32,    -6,  -266,  -266,   249
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int16 yytable[] =
{
      71,    28,   103,    97,    27,    16,    71,    34,    40,   184,
     226,   146,   154,   285,   189,   244,    25,    16,   149,    48,
       1,   201,    35,    36,   292,   253,   119,     1,     1,   109,
     111,     2,     9,   115,   116,   117,     2,    -7,    94,     6,
       7,     9,     8,     1,     6,     7,    29,     8,    37,   166,
      97,   157,     9,    71,   108,   110,   110,   113,   114,   110,
     110,   110,   271,   -51,   223,   119,   149,   201,   149,   156,
     119,   157,   227,   118,   144,     9,   156,    10,   157,    44,
     227,   280,   259,   144,   200,   281,   282,   145,   284,   239,
     286,   194,    10,   158,    45,   225,   191,   159,   290,   190,
     181,   182,   183,    46,   195,   225,   155,    47,   240,   260,
     238,   241,   118,   167,   149,    71,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,    53,
      55,   -36,    56,    57,    58,    59,   124,   125,   233,    98,
     199,    60,    90,    41,    40,    42,    94,    28,    51,    97,
     237,   159,    71,    52,    61,    62,    63,    64,   155,    65,
      89,   167,    66,    99,   110,   250,   248,   121,    71,     2,
     130,   131,    67,   132,   133,   134,   258,     6,     7,    68,
       8,   122,   228,    95,   229,   173,   174,    71,   126,   127,
     128,   129,   166,    55,   157,    56,    57,    58,    59,   135,
     262,   263,   123,   267,    60,   -59,   202,   269,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    61,    62,    63,
      64,    48,    65,   179,   180,    66,   175,   176,   177,   178,
     163,   212,   199,   164,   283,    67,   267,   169,   170,   185,
     186,   192,    68,     1,     2,   232,    52,   267,   234,     3,
       4,     5,     6,     7,     2,     8,   235,   236,   242,     3,
       4,     5,     6,     7,   246,     8,   243,   245,   247,   249,
     251,     1,     2,   252,   254,     9,   257,     3,     4,     5,
       6,     7,   255,     8,   256,     9,   268,   264,   270,   273,
       2,   272,   156,   276,   157,     3,     4,     5,     6,     7,
     274,     8,   166,     9,   157,    55,     2,    56,    57,    58,
      59,     3,     4,     5,     6,     7,    60,     8,   275,   277,
      10,   278,   287,   279,   288,   136,   137,    30,   230,    61,
      62,    63,    64,   289,    65,   138,   291,    66,    55,   139,
      56,    57,    58,    59,    93,   196,   261,    67,   140,    60,
     141,   142,   193,   168,    68,   231,   165,     0,     0,     0,
       0,   171,    61,    62,    63,    64,   172,    65,     0,     0,
      66,    55,     0,    56,    57,    58,    59,     0,     0,     0,
      67,     0,    60,     2,     0,     0,     0,    68,     3,     4,
       5,     6,     7,     0,     8,    61,    62,    63,    64,     0,
      65,     0,     0,    66,    55,     0,    56,    57,    58,    59,
       0,     0,     0,    67,     0,    60,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,    65,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      42,    10,    54,    48,     9,     0,    48,    16,    23,   135,
     157,    95,   101,   278,   140,   204,     3,    12,   100,    38,
       3,   150,    17,    18,   289,   214,    68,     3,     3,    61,
      62,     4,    35,    65,    66,    67,     4,    56,    47,    12,
      13,    35,    15,     3,    12,    13,     0,    15,     3,    52,
      95,    54,    35,    95,    60,    61,    62,    63,    64,    65,
      66,    67,   251,    56,   153,   107,   148,   196,   150,    52,
     112,    54,   159,    68,    44,    35,    52,    52,    54,    56,
     167,   270,   229,    44,    57,   274,   275,    57,   277,    57,
     279,    44,    52,   102,    53,   156,    57,   102,   287,   141,
     132,   133,   134,    41,    57,   166,   101,    44,    41,   235,
     194,    44,   107,   118,   196,   157,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    39,
       3,    56,     5,     6,     7,     8,    50,    51,   170,    49,
     149,    14,     3,    52,   159,    54,   155,   156,    56,   194,
     192,   156,   194,    56,    27,    28,    29,    30,   153,    32,
      56,   166,    35,    56,   170,   210,   208,    55,   210,     4,
      27,    28,    45,    35,    36,    37,   228,    12,    13,    52,
      15,    33,    52,    56,    54,   124,   125,   229,    46,    47,
      48,    49,    52,     3,    54,     5,     6,     7,     8,    38,
     242,   243,    34,   245,    14,    38,    16,   249,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    38,    32,   130,   131,    35,   126,   127,   128,   129,
      53,    41,   241,    44,   276,    45,   278,    53,    53,     3,
       3,    38,    52,     3,     4,    53,    56,   289,    53,     9,
      10,    11,    12,    13,     4,    15,    44,    55,    52,     9,
      10,    11,    12,    13,    41,    15,    52,    52,    41,    52,
      40,     3,     4,    57,    41,    35,    55,     9,    10,    11,
      12,    13,    53,    15,    53,    35,    41,    18,    40,    55,
       4,    53,    52,    52,    54,     9,    10,    11,    12,    13,
      53,    15,    52,    35,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    53,    53,
      52,    41,    17,    53,    53,    29,    30,    12,    42,    27,
      28,    29,    30,    41,    32,    39,    41,    35,     3,    43,
       5,     6,     7,     8,    47,   148,   241,    45,    52,    14,
      54,    89,   144,   118,    52,   164,   107,    -1,    -1,    -1,
      -1,   122,    27,    28,    29,    30,   123,    32,    -1,    -1,
      35,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      45,    -1,    14,     4,    -1,    -1,    -1,    52,     9,    10,
      11,    12,    13,    -1,    15,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,     3,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    45,    -1,    14,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    15,    35,
      52,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,     3,    88,    93,    92,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    52,    54,    87,    56,    53,    41,    44,    38,    63,
      77,    56,    56,   107,    95,     3,     5,     6,     7,     8,
      14,    27,    28,    29,    30,    32,    35,    45,    52,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    56,
       3,    89,    90,    72,    92,    56,    73,   118,   107,    56,
      80,   108,    68,    96,    97,    98,    99,    52,   134,   133,
     134,   133,    52,   134,   134,   133,   133,   133,    68,   119,
     137,    55,    33,    34,    50,    51,    46,    47,    48,    49,
      27,    28,    35,    36,    37,    38,    29,    30,    39,    43,
      52,    54,    89,    91,    44,    57,    73,    74,    78,    75,
      82,    83,    65,    66,    67,    68,    52,    54,    92,    93,
     100,   101,   102,    53,    44,   137,    52,    93,   100,    53,
      53,   124,   125,   129,   129,   130,   130,   130,   130,   132,
     132,   133,   133,   133,   121,     3,     3,   115,   116,   121,
     119,    57,    38,    90,    44,    57,    82,    84,    85,    92,
      57,    83,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    41,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   119,    67,    96,   101,   117,   102,    52,    54,
      42,    99,    53,   133,    53,    44,    55,   119,    73,    57,
      41,    44,    52,    52,   105,    52,    41,    41,   119,    52,
     118,    40,    57,   105,    41,    53,    53,    55,    96,   117,
     121,    85,   119,   119,    18,   112,   113,   119,    41,   119,
      40,   105,    53,    55,    53,    53,    52,    53,    41,    53,
     105,   105,   105,   119,   105,   113,   105,    17,    53,    41,
     105,    41,   113
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
        case 2:
#line 30 "kim.y"
    {root=makeNode(N_PROGRAM, NIL, (yyvsp[(1) - (1)]), NIL); checkForwardReference();}
    break;

  case 3:
#line 34 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 4:
#line 35 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 5:
#line 39 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 6:
#line 40 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 7:
#line 44 "kim.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));}
    break;

  case 8:
#line 44 "kim.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));}
    break;

  case 9:
#line 45 "kim.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(1) - (1)]), makeSpecifier(int_type, 0));}
    break;

  case 10:
#line 45 "kim.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 11:
#line 49 "kim.y"
    {(yyval)=NIL;}
    break;

  case 12:
#line 50 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 13:
#line 54 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 14:
#line 55 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 15:
#line 59 "kim.y"
    {(yyval)=setDeclaratorListSpecifier((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));}
    break;

  case 16:
#line 63 "kim.y"
    {(yyval)=makeSpecifier((yyvsp[(1) - (1)]), 0);}
    break;

  case 17:
#line 64 "kim.y"
    {(yyval)=makeSpecifier(0, (yyvsp[(1) - (1)]));}
    break;

  case 18:
#line 65 "kim.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), 0);}
    break;

  case 19:
#line 66 "kim.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]), 0, (yyvsp[(1) - (2)]));}
    break;

  case 20:
#line 70 "kim.y"
    {(yyval)=S_AUTO;}
    break;

  case 21:
#line 71 "kim.y"
    {(yyval)=S_STATIC;}
    break;

  case 22:
#line 72 "kim.y"
    {(yyval)=S_TYPEDEF;}
    break;

  case 23:
#line 76 "kim.y"
    {(yyval)=makeDummyIdentifier();}
    break;

  case 24:
#line 77 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 25:
#line 81 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 26:
#line 82 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 27:
#line 86 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 28:
#line 87 "kim.y"
    {(yyval)=setDeclaratorInit((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 29:
#line 91 "kim.y"
    {(yyval)=makeNode(N_INIT_LIST_ONE, NIL, (yyvsp[(1) - (1)]), NIL);}
    break;

  case 30:
#line 92 "kim.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 31:
#line 96 "kim.y"
    {(yyval)=makeNode(N_INIT_LIST, (yyvsp[(1) - (1)]), NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
    break;

  case 32:
#line 97 "kim.y"
    {(yyval)=makeNodeList(N_INIT_LIST, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 33:
#line 101 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 34:
#line 102 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 35:
#line 103 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 36:
#line 107 "kim.y"
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), ID_STRUCT);}
    break;

  case 37:
#line 107 "kim.y"
    {(yyval)=current_id; current_level++;}
    break;

  case 38:
#line 107 "kim.y"
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[(3) - (7)]), (yyvsp[(6) - (7)])); current_level--; current_id=(yyvsp[(5) - (7)]);}
    break;

  case 39:
#line 108 "kim.y"
    {(yyval)=makeType((yyvsp[(1) - (1)]));}
    break;

  case 40:
#line 108 "kim.y"
    {(yyval)=current_id;current_level++;}
    break;

  case 41:
#line 108 "kim.y"
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[(2) - (6)]),(yyvsp[(5) - (6)])); current_level--; current_id=(yyvsp[(4) - (6)]);}
    break;

  case 42:
#line 109 "kim.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), ID_STRUCT);}
    break;

  case 43:
#line 113 "kim.y"
    {(yyval)=T_STRUCT;}
    break;

  case 44:
#line 114 "kim.y"
    {(yyval)=T_UNION;}
    break;

  case 45:
#line 118 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 46:
#line 119 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 47:
#line 123 "kim.y"
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));}
    break;

  case 48:
#line 127 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 49:
#line 128 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 50:
#line 132 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 51:
#line 136 "kim.y"
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM, (yyvsp[(2) - (2)]), ID_ENUM);}
    break;

  case 52:
#line 136 "kim.y"
    {(yyval)=setTypeField((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));}
    break;

  case 53:
#line 137 "kim.y"
    {(yyval)=makeType(T_ENUM);}
    break;

  case 54:
#line 137 "kim.y"
    {(yyval)=setTypeField((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));}
    break;

  case 55:
#line 138 "kim.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM, (yyvsp[(2) - (2)]), ID_ENUM);}
    break;

  case 56:
#line 142 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 57:
#line 143 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 58:
#line 147 "kim.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])), ID_ENUM_LITERAL);}
    break;

  case 59:
#line 148 "kim.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])), ID_ENUM_LITERAL);}
    break;

  case 60:
#line 148 "kim.y"
    {(yyval)=setDeclaratorInit((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));}
    break;

  case 61:
#line 152 "kim.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));}
    break;

  case 62:
#line 153 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 63:
#line 157 "kim.y"
    {(yyval)=makeType(T_POINTER);}
    break;

  case 64:
#line 158 "kim.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]), makeType(T_POINTER));}
    break;

  case 65:
#line 162 "kim.y"
    {(yyval)=makeIdentifier((yyvsp[(1) - (1)]));}
    break;

  case 66:
#line 163 "kim.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 67:
#line 164 "kim.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(1) - (4)]), setTypeExpr(makeType(T_ARRAY), (yyvsp[(3) - (4)])));}
    break;

  case 68:
#line 165 "kim.y"
    {(yyval)=current_id; current_level++;}
    break;

  case 69:
#line 165 "kim.y"
    {checkForwardReference(); current_id=(yyvsp[(3) - (5)]); current_level--; (yyval)=setDeclaratorElementType((yyvsp[(1) - (5)]), setTypeField(makeType(T_FUNC), (yyvsp[(4) - (5)])));}
    break;

  case 70:
#line 169 "kim.y"
    {(yyval)=NIL;}
    break;

  case 71:
#line 170 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 72:
#line 174 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 73:
#line 175 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]), setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
    break;

  case 74:
#line 179 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 75:
#line 180 "kim.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 76:
#line 184 "kim.y"
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));}
    break;

  case 77:
#line 185 "kim.y"
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), (yyvsp[(2) - (2)])), (yyvsp[(1) - (2)]));}
    break;

  case 78:
#line 189 "kim.y"
    {(yyval)=NIL;}
    break;

  case 79:
#line 190 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 80:
#line 194 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 81:
#line 195 "kim.y"
    {(yyval)=makeType(T_POINTER);}
    break;

  case 82:
#line 196 "kim.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]), makeType(T_POINTER));}
    break;

  case 83:
#line 200 "kim.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 84:
#line 201 "kim.y"
    {(yyval)=setTypeExpr(makeType(T_ARRAY), (yyvsp[(2) - (3)]));}
    break;

  case 85:
#line 202 "kim.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]), setTypeExpr(makeType(T_ARRAY), (yyvsp[(3) - (4)])));}
    break;

  case 86:
#line 203 "kim.y"
    {(yyval)=setTypeExpr(makeType(T_FUNC), (yyvsp[(2) - (3)]));}
    break;

  case 87:
#line 204 "kim.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]), setTypeExpr(makeType(T_FUNC), (yyvsp[(3) - (4)])));}
    break;

  case 88:
#line 208 "kim.y"
    {(yyval)=makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
    break;

  case 89:
#line 209 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 90:
#line 213 "kim.y"
    {(yyval)=makeNode(N_STMT_LIST, (yyvsp[(1) - (1)]), NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
    break;

  case 91:
#line 214 "kim.y"
    {(yyval)=makeNodeList(N_STMT_LIST, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 92:
#line 218 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 93:
#line 219 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 94:
#line 220 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 95:
#line 221 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 96:
#line 222 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 97:
#line 223 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 98:
#line 227 "kim.y"
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[(2) - (4)]), NIL, (yyvsp[(4) - (4)]));}
    break;

  case 99:
#line 228 "kim.y"
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT, NIL, (yyvsp[(3) - (3)]), NIL);}
    break;

  case 100:
#line 232 "kim.y"
    {(yyval)=current_id; current_level++;}
    break;

  case 101:
#line 232 "kim.y"
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND, (yyvsp[(3) - (5)]), NIL, (yyvsp[(4) - (5)])); current_id=(yyvsp[(2) - (5)]); current_level--;}
    break;

  case 102:
#line 236 "kim.y"
    {(yyval)=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
    break;

  case 103:
#line 237 "kim.y"
    {(yyval)=makeNode(N_STMT_EXPRESSION, NIL, (yyvsp[(1) - (2)]), NIL);}
    break;

  case 104:
#line 241 "kim.y"
    {(yyval)=makeNode(N_STMT_IF, (yyvsp[(3) - (5)]), NIL, (yyvsp[(5) - (5)]));}
    break;

  case 105:
#line 242 "kim.y"
    {(yyval)=makeNode(N_STMT_IF_ELSE, (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));}
    break;

  case 106:
#line 243 "kim.y"
    {(yyval)=makeNode(N_STMT_SWITCH, (yyvsp[(3) - (5)]), NIL, (yyvsp[(5) - (5)]));}
    break;

  case 107:
#line 247 "kim.y"
    {(yyval)=makeNode(N_STMT_WHILE, (yyvsp[(3) - (5)]), NIL, (yyvsp[(5) - (5)]));}
    break;

  case 108:
#line 248 "kim.y"
    {(yyval)=makeNode(N_STMT_DO, (yyvsp[(2) - (7)]), NIL, (yyvsp[(5) - (7)]));}
    break;

  case 109:
#line 249 "kim.y"
    {(yyval)=makeNode(N_STMT_FOR, (yyvsp[(3) - (5)]), NIL, (yyvsp[(5) - (5)]));}
    break;

  case 110:
#line 253 "kim.y"
    {(yyval)=makeNode(N_FOR_EXP, (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));}
    break;

  case 111:
#line 257 "kim.y"
    {(yyval)=NIL;}
    break;

  case 112:
#line 258 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 113:
#line 262 "kim.y"
    {(yyval)=makeNode(N_STMT_RETURN, NIL, (yyvsp[(2) - (3)]), NIL);}
    break;

  case 114:
#line 263 "kim.y"
    {(yyval)=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
    break;

  case 115:
#line 264 "kim.y"
    {(yyval)=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
    break;

  case 116:
#line 268 "kim.y"
    {(yyval)=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
    break;

  case 117:
#line 269 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 118:
#line 273 "kim.y"
    {(yyval)=makeNode(N_ARG_LIST, (yyvsp[(1) - (1)]), NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
    break;

  case 119:
#line 274 "kim.y"
    {(yyval)=makeNodeList(N_ARG_LIST, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));}
    break;

  case 120:
#line 278 "kim.y"
    {(yyval)=NIL;}
    break;

  case 121:
#line 279 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 122:
#line 283 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 123:
#line 287 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 124:
#line 291 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 125:
#line 295 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 126:
#line 296 "kim.y"
    {(yyval)=makeNode(N_EXP_ASSIGN, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 127:
#line 300 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 128:
#line 304 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 129:
#line 305 "kim.y"
    {(yyval)=makeNode(N_EXP_OR, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 130:
#line 309 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 131:
#line 310 "kim.y"
    {(yyval)=makeNode(N_EXP_AND, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 132:
#line 314 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 133:
#line 318 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 134:
#line 322 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 135:
#line 326 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 136:
#line 327 "kim.y"
    {(yyval)=makeNode(N_EXP_EQL, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 137:
#line 328 "kim.y"
    {(yyval)=makeNode(N_EXP_NEQ, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 138:
#line 332 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 139:
#line 333 "kim.y"
    {(yyval)=makeNode(N_EXP_LSS, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 140:
#line 334 "kim.y"
    {(yyval)=makeNode(N_EXP_GTR, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 141:
#line 335 "kim.y"
    {(yyval)=makeNode(N_EXP_LEQ, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 142:
#line 336 "kim.y"
    {(yyval)=makeNode(N_EXP_GEQ, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 143:
#line 340 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 144:
#line 344 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 145:
#line 345 "kim.y"
    {(yyval)=makeNode(N_EXP_ADD, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 146:
#line 346 "kim.y"
    {(yyval)=makeNode(N_EXP_SUB, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 147:
#line 350 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 148:
#line 351 "kim.y"
    {(yyval)=makeNode(N_EXP_MUL, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 149:
#line 352 "kim.y"
    {(yyval)=makeNode(N_EXP_DIV, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 150:
#line 353 "kim.y"
    {(yyval)=makeNode(N_EXP_MOD, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 151:
#line 357 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 152:
#line 358 "kim.y"
    {(yyval)=makeNode(N_EXP_CAST, (yyvsp[(2) - (4)]), NIL, (yyvsp[(4) - (4)]));}
    break;

  case 153:
#line 362 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 154:
#line 363 "kim.y"
    {(yyval)=makeNode(N_EXP_PRE_INC, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 155:
#line 364 "kim.y"
    {(yyval)=makeNode(N_EXP_PRE_DEC, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 156:
#line 365 "kim.y"
    {(yyval)=makeNode(N_EXP_AMP, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 157:
#line 366 "kim.y"
    {(yyval)=makeNode(N_EXP_STAR, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 158:
#line 367 "kim.y"
    {(yyval)=makeNode(N_EXP_NOT, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 159:
#line 368 "kim.y"
    {(yyval)=makeNode(N_EXP_MINUS, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 160:
#line 369 "kim.y"
    {(yyval)=makeNode(N_EXP_PLUS, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 161:
#line 370 "kim.y"
    {(yyval)=makeNode(N_EXP_SIZE_EXP, NIL, (yyvsp[(2) - (2)]), NIL);}
    break;

  case 162:
#line 371 "kim.y"
    {(yyval)=makeNode(N_EXP_SIZE_TYPE, NIL, (yyvsp[(3) - (4)]), NIL);}
    break;

  case 163:
#line 375 "kim.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 164:
#line 376 "kim.y"
    {(yyval)=makeNode(N_EXP_ARRAY, (yyvsp[(1) - (4)]), NIL, (yyvsp[(3) - (4)]));}
    break;

  case 165:
#line 377 "kim.y"
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL, (yyvsp[(1) - (4)]), NIL, (yyvsp[(3) - (4)]));}
    break;

  case 166:
#line 378 "kim.y"
    {(yyval)=makeNode(N_EXP_STRUCT, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 167:
#line 379 "kim.y"
    {(yyval)=makeNode(N_EXP_ARROW, (yyvsp[(1) - (3)]), NIL, (yyvsp[(3) - (3)]));}
    break;

  case 168:
#line 380 "kim.y"
    {(yyval)=makeNode(N_EXP_POST_INC, NIL, (yyvsp[(1) - (2)]), NIL);}
    break;

  case 169:
#line 381 "kim.y"
    {(yyval)=makeNode(N_EXP_POST_DEC, NIL, (yyvsp[(1) - (2)]), NIL);}
    break;

  case 170:
#line 385 "kim.y"
    {(yyval)=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared((yyvsp[(1) - (1)])), NIL);}
    break;

  case 171:
#line 386 "kim.y"
    {(yyval)=makeNode(N_EXP_INT_CONST, NIL, (yyvsp[(1) - (1)]), NIL);}
    break;

  case 172:
#line 387 "kim.y"
    {(yyval)=makeNode(N_EXP_FLOAT_CONST, NIL, (yyvsp[(1) - (1)]), NIL);}
    break;

  case 173:
#line 388 "kim.y"
    {(yyval)=makeNode(N_EXP_CHAR_CONST, NIL, (yyvsp[(1) - (1)]), NIL);}
    break;

  case 174:
#line 389 "kim.y"
    {(yyval)=makeNode(N_EXP_STRING_LITERAL, NIL, (yyvsp[(1) - (1)]), NIL);}
    break;

  case 175:
#line 390 "kim.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 176:
#line 394 "kim.y"
    {(yyval)=setTypeNameSpecifier((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));}
    break;


/* Line 1267 of yacc.c.  */
#line 2644 "y.tab.c"
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


#line 397 "kim.y"


extern char *yytext;
yyerror(char *s){
	syntax_err++;
		printf("line %d : %s near %s \n", line_no, s, yytext);
		}

