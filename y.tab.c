/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "kim.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#line 9 "kim.y"

#include <stdio.h>
#include "support_func.h"

extern int line_no, syntax_err, current_level;
extern char *yytext;
extern A_ID *current_id;
extern int yylex();
extern A_NODE *root;
extern A_TYPE *int_type;

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

#define YYUNDEFTOK  2
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    38,    39,    43,    44,    48,    48,    49,
      49,    53,    54,    58,    59,    63,    67,    68,    69,    70,
      74,    75,    76,    80,    81,    85,    86,    90,    91,    95,
      96,   100,   101,   105,   106,   107,   111,   111,   111,   112,
     112,   112,   113,   117,   118,   122,   123,   127,   131,   132,
     136,   140,   140,   141,   141,   142,   146,   147,   151,   152,
     152,   156,   157,   161,   162,   166,   167,   168,   169,   169,
     173,   174,   178,   179,   183,   184,   188,   189,   193,   194,
     198,   199,   200,   204,   205,   206,   207,   208,   212,   213,
     217,   218,   222,   223,   224,   225,   226,   227,   231,   232,
     236,   236,   240,   241,   245,   246,   247,   251,   252,   253,
     257,   261,   262,   266,   267,   268,   272,   273,   277,   278,
     282,   283,   287,   291,   295,   299,   300,   304,   308,   309,
     313,   314,   318,   322,   326,   330,   331,   332,   336,   337,
     338,   339,   340,   344,   348,   349,   350,   354,   355,   356,
     357,   361,   362,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   379,   380,   381,   382,   383,   384,   385,
     389,   390,   391,   392,   393,   394,   398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "primary_expression", "type_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF (-238)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     445,  -238,  -238,  -238,  -238,  -238,  -238,    14,  -238,    15,
      17,    73,   445,  -238,  -238,  -238,    17,   352,   352,  -238,
      89,  -238,  -238,    35,   -39,    48,    55,  -238,    62,  -238,
    -238,    98,   107,  -238,   105,  -238,  -238,   100,   102,   119,
     -39,  -238,   341,   121,   158,  -238,  -238,    17,   248,   119,
     128,  -238,  -238,  -238,   352,  -238,  -238,  -238,  -238,  -238,
     374,   341,   341,   407,   407,   341,   341,   341,   308,   124,
    -238,  -238,  -238,  -238,  -238,   169,   171,  -238,  -238,  -238,
     123,   134,  -238,    52,   129,  -238,   170,   133,  -238,   158,
     191,    32,  -238,   186,  -238,   194,   248,  -238,  -238,  -238,
    -238,   132,   352,    16,   178,  -238,   189,  -238,   308,  -238,
    -238,  -238,  -238,   341,  -238,  -238,  -238,  -238,  -238,    39,
     183,   187,  -238,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,  -238,  -238,   232,
     238,   341,   341,    41,   204,   158,  -238,    17,  -238,    50,
     132,    17,    21,  -238,   193,   352,  -238,    17,   254,   341,
    -238,    29,  -238,  -238,    49,  -238,   182,   190,   275,    94,
    -238,  -238,   341,   171,  -238,   134,   134,  -238,  -238,  -238,
    -238,   129,   129,  -238,  -238,  -238,  -238,  -238,  -238,   195,
     200,  -238,   192,  -238,   341,  -238,  -238,   248,  -238,    27,
      72,  -238,  -238,  -238,  -238,   207,   208,   193,   209,   211,
     227,   341,   218,   341,   231,  -238,   215,   193,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,   233,  -238,   220,   228,   236,
      49,   352,   341,  -238,  -238,  -238,  -238,  -238,   341,  -238,
    -238,  -238,  -238,  -238,    17,   341,   341,   264,   341,  -238,
    -238,   251,   341,   255,   193,  -238,  -238,  -238,  -238,  -238,
    -238,   241,   242,  -238,  -238,   243,   245,   247,   249,   260,
    -238,  -238,   250,   193,  -238,  -238,  -238,   193,   193,   341,
     193,   341,   193,  -238,   288,  -238,   256,  -238,   266,  -238,
     193,   283,   341,  -238,  -238,  -238
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    21,    22,    43,    53,    44,    63,
       0,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,    64,     0,     1,
       4,     0,     0,    25,     7,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    24,    25,    27,     0,    28,    29,     8,
      37,     0,    11,    78,     0,    71,    72,    74,     0,   161,
     160,   151,   159,     0,   154,   155,   156,   157,   158,    78,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,     0,
       0,   116,     0,     0,     0,     0,    54,     0,    31,     0,
       0,     0,     0,    45,    88,    12,    13,    23,    70,   120,
      76,    81,    77,    79,    80,    69,     0,     0,    70,    81,
     176,   175,     0,   129,   131,   136,   137,   139,   140,   141,
     142,   145,   146,   148,   149,   150,   126,   167,   166,     0,
     117,   118,     0,    52,     0,    57,    26,     0,    30,     0,
       0,    48,    50,    41,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,    89,    90,    92,
      93,    94,    95,    96,    97,     0,    14,     0,     0,     0,
      82,    70,   120,    73,    75,   162,   152,   165,     0,   164,
      60,    32,    38,    47,     0,     0,     0,     0,   111,   114,
     115,     0,     0,     0,     0,   101,    91,   103,    86,    83,
      84,     0,     0,   119,    49,     0,     0,     0,     0,     0,
     112,   113,     0,     0,    99,    87,    85,     0,     0,     0,
       0,   111,     0,    98,   104,   107,     0,   109,     0,   106,
       0,     0,   111,   105,   108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,   313,  -238,  -238,  -238,  -238,  -238,   -91,
       4,  -238,  -238,   279,   -37,   -89,  -238,   -64,  -238,  -238,
    -238,  -238,  -238,  -238,   180,  -109,  -238,    84,  -238,  -238,
    -238,   244,   196,  -238,     2,    -1,   -20,  -238,   -53,  -238,
    -238,   165,   213,   -93,  -120,  -238,  -238,  -140,  -238,    60,
    -238,  -238,  -238,  -238,  -238,  -237,  -238,  -238,  -238,  -150,
     -43,   -42,  -238,  -106,  -238,  -238,   216,   210,  -238,  -238,
    -238,    63,   -82,  -238,    95,   -38,    -4,  -238,  -238,   234
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   154,   155,    15,
     103,    17,    31,    32,    33,    97,   149,    18,    19,    50,
     150,    38,   101,    20,   152,   153,   200,   201,    21,    43,
      26,    91,    92,   144,    95,    23,    24,    54,   227,   105,
     106,   107,   162,   163,   164,   216,   217,   218,   219,   220,
     102,   221,   222,   223,   268,   269,   224,   189,   190,    69,
      70,   225,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   104,    22,    40,    16,    98,    71,   148,    27,   229,
      94,   156,    28,    41,    22,    42,    16,    25,    34,     1,
       1,    35,    36,   110,   112,     2,   120,   116,   117,   118,
     186,     2,     1,     6,     7,   191,     8,   151,     1,     6,
       7,   230,     8,   204,   288,   177,   178,   179,   180,   230,
       9,     9,     9,    98,    71,   295,   109,   111,   111,   114,
     115,   111,   111,   111,   226,   228,   120,   247,   158,    10,
     159,   120,   119,    29,     9,   228,   145,   256,   203,   131,
     132,   158,   262,   159,   242,   145,   151,    10,   151,   146,
     204,   168,    37,   159,   197,   183,   184,   185,   193,    53,
     192,   231,   161,   232,   -51,   160,   157,   198,   241,    99,
     196,    44,   119,   243,   274,    45,   244,    71,   169,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   263,   283,   236,   151,     2,   284,   285,    46,
     287,    40,   289,    48,     6,     7,   168,     8,   159,   -27,
     293,    47,   240,   202,    98,    71,   -36,   161,    51,   157,
      28,    90,   137,   138,   133,   134,   135,   169,   111,   251,
     253,    71,   139,   125,   126,    52,   140,    89,   261,   122,
     127,   128,   129,   130,   100,   141,     2,   142,   175,   176,
      71,     3,     4,     5,     6,     7,    55,     8,    56,    57,
      58,    59,   123,   265,   266,   124,   270,    60,   136,   205,
     272,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      61,    62,    63,    64,   233,    65,   181,   182,    66,   -59,
     147,   165,    48,   166,   215,   187,   171,   286,    67,   270,
     172,   188,   194,   235,   238,    68,   202,   239,   237,    52,
     270,    55,   249,    56,    57,    58,    59,     1,     2,   245,
     246,   248,    60,     3,     4,     5,     6,     7,   250,     8,
     252,   254,   255,   258,   257,    61,    62,    63,    64,     2,
      65,   259,   267,    66,     3,     4,     5,     6,     7,     9,
       8,   260,   271,    67,   275,   273,   277,   276,   278,   279,
      68,   281,   280,   282,    96,   290,   158,   292,   159,   291,
       9,    55,     2,    56,    57,    58,    59,     3,     4,     5,
       6,     7,    60,     8,   294,    30,    93,   168,   264,   159,
     199,   234,   170,   143,   174,    61,    62,    63,    64,   173,
      65,   195,   167,    66,    55,     0,    56,    57,    58,    59,
       0,     0,     0,    67,     0,    60,     2,     0,     0,     0,
      68,     3,     4,     5,     6,     7,     0,     8,    61,    62,
      63,    64,     0,    65,     0,     0,    66,    55,     0,    56,
      57,    58,    59,     0,     0,     0,    67,     0,    60,     0,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,    65,     0,     0,    66,
      55,     0,    56,    57,    58,    59,     0,     0,     0,    67,
       0,    60,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,    65,
       0,     0,    66,     0,     0,     0,     0,     0,     1,     2,
       0,     0,    67,     0,     3,     4,     5,     6,     7,   113,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      42,    54,     0,    23,     0,    48,    48,    96,     9,   159,
      47,   102,    10,    52,    12,    54,    12,     3,    16,     3,
       3,    17,    18,    61,    62,     4,    68,    65,    66,    67,
     136,     4,     3,    12,    13,   141,    15,   101,     3,    12,
      13,   161,    15,   152,   281,   127,   128,   129,   130,   169,
      35,    35,    35,    96,    96,   292,    60,    61,    62,    63,
      64,    65,    66,    67,   155,   158,   108,   207,    52,    52,
      54,   113,    68,     0,    35,   168,    44,   217,    57,    27,
      28,    52,   232,    54,    57,    44,   150,    52,   152,    57,
     199,    52,     3,    54,    44,   133,   134,   135,    57,    39,
     142,    52,   103,    54,    56,   103,   102,    57,   197,    49,
     147,    56,   108,    41,   254,    53,    44,   159,   119,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   238,   273,   172,   199,     4,   277,   278,    41,
     280,   161,   282,    38,    12,    13,    52,    15,    54,    44,
     290,    44,   194,   151,   197,   197,    56,   158,    56,   155,
     158,     3,    29,    30,    35,    36,    37,   168,   172,   211,
     213,   213,    39,    50,    51,    56,    43,    56,   231,    55,
      46,    47,    48,    49,    56,    52,     4,    54,   125,   126,
     232,     9,    10,    11,    12,    13,     3,    15,     5,     6,
       7,     8,    33,   245,   246,    34,   248,    14,    38,    16,
     252,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    42,    32,   131,   132,    35,    38,
      44,    53,    38,    44,    41,     3,    53,   279,    45,   281,
      53,     3,    38,    53,    44,    52,   244,    55,    53,    56,
     292,     3,    41,     5,     6,     7,     8,     3,     4,    52,
      52,    52,    14,     9,    10,    11,    12,    13,    41,    15,
      52,    40,    57,    53,    41,    27,    28,    29,    30,     4,
      32,    53,    18,    35,     9,    10,    11,    12,    13,    35,
      15,    55,    41,    45,    53,    40,    53,    55,    53,    52,
      52,    41,    53,    53,    56,    17,    52,    41,    54,    53,
      35,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    41,    12,    47,    52,   244,    54,
     150,   166,   119,    89,   124,    27,    28,    29,    30,   123,
      32,   145,   108,    35,     3,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    45,    -1,    14,     4,    -1,    -1,    -1,
      52,     9,    10,    11,    12,    13,    -1,    15,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,     3,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    45,    -1,    14,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,    35,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    45,
      -1,    14,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    45,    -1,     9,    10,    11,    12,    13,    52,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52
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
       3,    89,    90,    71,    72,    92,    56,    73,   118,   107,
      56,    80,   108,    68,    96,    97,    98,    99,    52,   134,
     133,   134,   133,    52,   134,   134,   133,   133,   133,    68,
     119,   137,    55,    33,    34,    50,    51,    46,    47,    48,
      49,    27,    28,    35,    36,    37,    38,    29,    30,    39,
      43,    52,    54,    89,    91,    44,    57,    44,    73,    74,
      78,    75,    82,    83,    65,    66,    67,    68,    52,    54,
      92,    93,   100,   101,   102,    53,    44,   137,    52,    93,
     100,    53,    53,   124,   125,   129,   129,   130,   130,   130,
     130,   132,   132,   133,   133,   133,   121,     3,     3,   115,
     116,   121,   119,    57,    38,    90,    72,    44,    57,    82,
      84,    85,    92,    57,    83,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    41,   103,   104,   105,   106,
     107,   109,   110,   111,   114,   119,    67,    96,   101,   117,
     102,    52,    54,    42,    99,    53,   133,    53,    44,    55,
     119,    73,    57,    41,    44,    52,    52,   105,    52,    41,
      41,   119,    52,   118,    40,    57,   105,    41,    53,    53,
      55,    96,   117,   121,    85,   119,   119,    18,   112,   113,
     119,    41,   119,    40,   105,    53,    55,    53,    53,    52,
      53,    41,    53,   105,   105,   105,   119,   105,   113,   105,
      17,    53,    41,   105,    41,   113
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     3,     1,     3,     1,     3,     1,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 34 "kim.y"
                            {root=makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1703 "y.tab.c"
    break;

  case 3:
#line 38 "kim.y"
                                                     {yyval=yyvsp[0];}
#line 1709 "y.tab.c"
    break;

  case 4:
#line 39 "kim.y"
                                                                       {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1715 "y.tab.c"
    break;

  case 5:
#line 43 "kim.y"
                                                            {yyval=yyvsp[0];}
#line 1721 "y.tab.c"
    break;

  case 6:
#line 44 "kim.y"
                                                     {yyval=yyvsp[0];}
#line 1727 "y.tab.c"
    break;

  case 7:
#line 48 "kim.y"
                                                                    {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1733 "y.tab.c"
    break;

  case 8:
#line 48 "kim.y"
                                                                                                                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1739 "y.tab.c"
    break;

  case 9:
#line 49 "kim.y"
                                              {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1745 "y.tab.c"
    break;

  case 10:
#line 49 "kim.y"
                                                                                                                                     {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1751 "y.tab.c"
    break;

  case 11:
#line 53 "kim.y"
                                        {yyval=NIL;}
#line 1757 "y.tab.c"
    break;

  case 12:
#line 54 "kim.y"
                                                          {yyval=yyvsp[0];}
#line 1763 "y.tab.c"
    break;

  case 13:
#line 58 "kim.y"
                                            {yyval=yyvsp[0];}
#line 1769 "y.tab.c"
    break;

  case 14:
#line 59 "kim.y"
                                                              {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1775 "y.tab.c"
    break;

  case 15:
#line 63 "kim.y"
                                                                             {yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1781 "y.tab.c"
    break;

  case 16:
#line 67 "kim.y"
                                                         {yyval=makeSpecifier(yyvsp[0], 0);}
#line 1787 "y.tab.c"
    break;

  case 17:
#line 68 "kim.y"
                                                                   {yyval=makeSpecifier(0, yyvsp[0]);}
#line 1793 "y.tab.c"
    break;

  case 18:
#line 69 "kim.y"
                                                                                 {yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1799 "y.tab.c"
    break;

  case 19:
#line 70 "kim.y"
                                                                                          {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1805 "y.tab.c"
    break;

  case 20:
#line 74 "kim.y"
                                                    {yyval=S_AUTO;}
#line 1811 "y.tab.c"
    break;

  case 21:
#line 75 "kim.y"
                                                       {yyval=S_STATIC;}
#line 1817 "y.tab.c"
    break;

  case 22:
#line 76 "kim.y"
                                                        {yyval=S_TYPEDEF;}
#line 1823 "y.tab.c"
    break;

  case 23:
#line 80 "kim.y"
                                                {yyval=makeDummyIdentifier();}
#line 1829 "y.tab.c"
    break;

  case 24:
#line 81 "kim.y"
                                                                                                 {yyval=yyvsp[-2];}
#line 1835 "y.tab.c"
    break;

  case 25:
#line 85 "kim.y"
                                                        {yyval=yyvsp[0];}
#line 1841 "y.tab.c"
    break;

  case 26:
#line 86 "kim.y"
                                                                                    {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1847 "y.tab.c"
    break;

  case 27:
#line 90 "kim.y"
                                      {yyval=yyvsp[0];}
#line 1853 "y.tab.c"
    break;

  case 28:
#line 91 "kim.y"
                                                          {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1859 "y.tab.c"
    break;

  case 29:
#line 95 "kim.y"
                                       {yyval=makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1865 "y.tab.c"
    break;

  case 30:
#line 96 "kim.y"
                                           {yyval=yyvsp[-1];}
#line 1871 "y.tab.c"
    break;

  case 31:
#line 100 "kim.y"
                                            {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1877 "y.tab.c"
    break;

  case 32:
#line 101 "kim.y"
                                                                    {yyval=makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1883 "y.tab.c"
    break;

  case 33:
#line 105 "kim.y"
                                                {yyval=yyvsp[0];}
#line 1889 "y.tab.c"
    break;

  case 34:
#line 106 "kim.y"
                                               {yyval=yyvsp[0];}
#line 1895 "y.tab.c"
    break;

  case 35:
#line 107 "kim.y"
                                           {yyval=yyvsp[0];}
#line 1901 "y.tab.c"
    break;

  case 36:
#line 111 "kim.y"
                                                                    {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1907 "y.tab.c"
    break;

  case 37:
#line 111 "kim.y"
                                                                                                                              {yyval=current_id; current_level++;}
#line 1913 "y.tab.c"
    break;

  case 38:
#line 111 "kim.y"
                                                                                                                                                                                           {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1919 "y.tab.c"
    break;

  case 39:
#line 112 "kim.y"
                                                          {yyval=makeType(yyvsp[0]);}
#line 1925 "y.tab.c"
    break;

  case 40:
#line 112 "kim.y"
                                                                               {yyval=current_id;current_level++;}
#line 1931 "y.tab.c"
    break;

  case 41:
#line 112 "kim.y"
                                                                                                                                           {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1937 "y.tab.c"
    break;

  case 42:
#line 113 "kim.y"
                                                                     {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1943 "y.tab.c"
    break;

  case 43:
#line 117 "kim.y"
                                      {yyval=T_STRUCT;}
#line 1949 "y.tab.c"
    break;

  case 44:
#line 118 "kim.y"
                                      {yyval=T_UNION;}
#line 1955 "y.tab.c"
    break;

  case 45:
#line 122 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 1961 "y.tab.c"
    break;

  case 46:
#line 123 "kim.y"
                                                                                       {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1967 "y.tab.c"
    break;

  case 47:
#line 127 "kim.y"
                                                                                  {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1973 "y.tab.c"
    break;

  case 48:
#line 131 "kim.y"
                                                            {yyval=yyvsp[0];}
#line 1979 "y.tab.c"
    break;

  case 49:
#line 132 "kim.y"
                                                                                          {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1985 "y.tab.c"
    break;

  case 50:
#line 136 "kim.y"
                                            {yyval=yyvsp[0];}
#line 1991 "y.tab.c"
    break;

  case 51:
#line 140 "kim.y"
                                                       {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1997 "y.tab.c"
    break;

  case 52:
#line 140 "kim.y"
                                                                                                                                      {yyval=setTypeField(yyvsp[-3], yyvsp[-2]);}
#line 2003 "y.tab.c"
    break;

  case 53:
#line 141 "kim.y"
                                             {yyval=makeType(T_ENUM);}
#line 2009 "y.tab.c"
    break;

  case 54:
#line 141 "kim.y"
                                                                                          {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 2015 "y.tab.c"
    break;

  case 55:
#line 142 "kim.y"
                                                        {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 2021 "y.tab.c"
    break;

  case 56:
#line 146 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2027 "y.tab.c"
    break;

  case 57:
#line 147 "kim.y"
                                                             {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2033 "y.tab.c"
    break;

  case 58:
#line 151 "kim.y"
                             {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2039 "y.tab.c"
    break;

  case 59:
#line 152 "kim.y"
                              {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2045 "y.tab.c"
    break;

  case 60:
#line 152 "kim.y"
                                                                                                             {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 2051 "y.tab.c"
    break;

  case 61:
#line 156 "kim.y"
                                            {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 2057 "y.tab.c"
    break;

  case 62:
#line 157 "kim.y"
                                     {yyval=yyvsp[0];}
#line 2063 "y.tab.c"
    break;

  case 63:
#line 161 "kim.y"
                {yyval=makeType(T_POINTER);}
#line 2069 "y.tab.c"
    break;

  case 64:
#line 162 "kim.y"
                         {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2075 "y.tab.c"
    break;

  case 65:
#line 166 "kim.y"
                                            {yyval=makeIdentifier(yyvsp[0]);}
#line 2081 "y.tab.c"
    break;

  case 66:
#line 167 "kim.y"
                                                   {yyval=yyvsp[-1];}
#line 2087 "y.tab.c"
    break;

  case 67:
#line 168 "kim.y"
                                                                                  {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2093 "y.tab.c"
    break;

  case 68:
#line 169 "kim.y"
                                                       {yyval=current_id; current_level++;}
#line 2099 "y.tab.c"
    break;

  case 69:
#line 169 "kim.y"
                                                                                                                    {checkForwardReference(); current_id=yyvsp[-2]; current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2105 "y.tab.c"
    break;

  case 70:
#line 173 "kim.y"
                                           {yyval=NIL;}
#line 2111 "y.tab.c"
    break;

  case 71:
#line 174 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2117 "y.tab.c"
    break;

  case 72:
#line 178 "kim.y"
                                                  {yyval=yyvsp[0];}
#line 2123 "y.tab.c"
    break;

  case 73:
#line 179 "kim.y"
                                                                   {yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2129 "y.tab.c"
    break;

  case 74:
#line 183 "kim.y"
                                                {yyval=yyvsp[0];}
#line 2135 "y.tab.c"
    break;

  case 75:
#line 184 "kim.y"
                                                                      {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2141 "y.tab.c"
    break;

  case 76:
#line 188 "kim.y"
                                                                           {yyval=setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2147 "y.tab.c"
    break;

  case 77:
#line 189 "kim.y"
                                                                                         {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2153 "y.tab.c"
    break;

  case 78:
#line 193 "kim.y"
                                           {yyval=NIL;}
#line 2159 "y.tab.c"
    break;

  case 79:
#line 194 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2165 "y.tab.c"
    break;

  case 80:
#line 198 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 2171 "y.tab.c"
    break;

  case 81:
#line 199 "kim.y"
                                            {yyval=makeType(T_POINTER);}
#line 2177 "y.tab.c"
    break;

  case 82:
#line 200 "kim.y"
                                                                       {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2183 "y.tab.c"
    break;

  case 83:
#line 204 "kim.y"
                                                                            {yyval=yyvsp[-1];}
#line 2189 "y.tab.c"
    break;

  case 84:
#line 205 "kim.y"
                                                                                 {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2195 "y.tab.c"
    break;

  case 85:
#line 206 "kim.y"
                                                                                                            {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2201 "y.tab.c"
    break;

  case 86:
#line 207 "kim.y"
                                                                                 {yyval=setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2207 "y.tab.c"
    break;

  case 87:
#line 208 "kim.y"
                                                                                                            {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2213 "y.tab.c"
    break;

  case 88:
#line 212 "kim.y"
                                  {yyval=makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2219 "y.tab.c"
    break;

  case 89:
#line 213 "kim.y"
                                                  {yyval=yyvsp[0];}
#line 2225 "y.tab.c"
    break;

  case 90:
#line 217 "kim.y"
                                    {yyval=makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2231 "y.tab.c"
    break;

  case 91:
#line 218 "kim.y"
                                                    {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2237 "y.tab.c"
    break;

  case 92:
#line 222 "kim.y"
                                   {yyval=yyvsp[0];}
#line 2243 "y.tab.c"
    break;

  case 93:
#line 223 "kim.y"
                                     {yyval=yyvsp[0];}
#line 2249 "y.tab.c"
    break;

  case 94:
#line 224 "kim.y"
                                       {yyval=yyvsp[0];}
#line 2255 "y.tab.c"
    break;

  case 95:
#line 225 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2261 "y.tab.c"
    break;

  case 96:
#line 226 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2267 "y.tab.c"
    break;

  case 97:
#line 227 "kim.y"
                                 {yyval=yyvsp[0];}
#line 2273 "y.tab.c"
    break;

  case 98:
#line 231 "kim.y"
                                                                              {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2279 "y.tab.c"
    break;

  case 99:
#line 232 "kim.y"
                                                              {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2285 "y.tab.c"
    break;

  case 100:
#line 236 "kim.y"
                                     {yyval=current_id; current_level++;}
#line 2291 "y.tab.c"
    break;

  case 101:
#line 236 "kim.y"
                                                                                                                  {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2297 "y.tab.c"
    break;

  case 102:
#line 240 "kim.y"
                                                  {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2303 "y.tab.c"
    break;

  case 103:
#line 241 "kim.y"
                                                              {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2309 "y.tab.c"
    break;

  case 104:
#line 245 "kim.y"
                                                                     {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2315 "y.tab.c"
    break;

  case 105:
#line 246 "kim.y"
                                                                                         {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2321 "y.tab.c"
    break;

  case 106:
#line 247 "kim.y"
                                                                          {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2327 "y.tab.c"
    break;

  case 107:
#line 251 "kim.y"
                                                                        {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2333 "y.tab.c"
    break;

  case 108:
#line 252 "kim.y"
                                                                                          {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2339 "y.tab.c"
    break;

  case 109:
#line 253 "kim.y"
                                                                           {yyval=makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2345 "y.tab.c"
    break;

  case 110:
#line 257 "kim.y"
                                                                                           {yyval=makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2351 "y.tab.c"
    break;

  case 111:
#line 261 "kim.y"
                                      {yyval=NIL;}
#line 2357 "y.tab.c"
    break;

  case 112:
#line 262 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2363 "y.tab.c"
    break;

  case 113:
#line 266 "kim.y"
                                                          {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2369 "y.tab.c"
    break;

  case 114:
#line 267 "kim.y"
                                                  {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2375 "y.tab.c"
    break;

  case 115:
#line 268 "kim.y"
                                               {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2381 "y.tab.c"
    break;

  case 116:
#line 272 "kim.y"
                                           {yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2387 "y.tab.c"
    break;

  case 117:
#line 273 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2393 "y.tab.c"
    break;

  case 118:
#line 277 "kim.y"
                                                         {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2399 "y.tab.c"
    break;

  case 119:
#line 278 "kim.y"
                                                                                    {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2405 "y.tab.c"
    break;

  case 120:
#line 282 "kim.y"
                                           {yyval=NIL;}
#line 2411 "y.tab.c"
    break;

  case 121:
#line 283 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2417 "y.tab.c"
    break;

  case 122:
#line 287 "kim.y"
                                              {yyval=yyvsp[0];}
#line 2423 "y.tab.c"
    break;

  case 123:
#line 291 "kim.y"
                                   {yyval=yyvsp[0];}
#line 2429 "y.tab.c"
    break;

  case 124:
#line 295 "kim.y"
                                                      {yyval=yyvsp[0];}
#line 2435 "y.tab.c"
    break;

  case 125:
#line 299 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2441 "y.tab.c"
    break;

  case 126:
#line 300 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2447 "y.tab.c"
    break;

  case 127:
#line 304 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2453 "y.tab.c"
    break;

  case 128:
#line 308 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2459 "y.tab.c"
    break;

  case 129:
#line 309 "kim.y"
                                                                                              {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2465 "y.tab.c"
    break;

  case 130:
#line 313 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2471 "y.tab.c"
    break;

  case 131:
#line 314 "kim.y"
                                                                                               {yyval=makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 132:
#line 318 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2483 "y.tab.c"
    break;

  case 133:
#line 322 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 134:
#line 326 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 2495 "y.tab.c"
    break;

  case 135:
#line 330 "kim.y"
                                                         {yyval=yyvsp[0];}
#line 2501 "y.tab.c"
    break;

  case 136:
#line 331 "kim.y"
                                                                                  {yyval=makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 137:
#line 332 "kim.y"
                                                                                  {yyval=makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2513 "y.tab.c"
    break;

  case 138:
#line 336 "kim.y"
                                                          {yyval=yyvsp[0];}
#line 2519 "y.tab.c"
    break;

  case 139:
#line 337 "kim.y"
                                                                                     {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2525 "y.tab.c"
    break;

  case 140:
#line 338 "kim.y"
                                                                                     {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2531 "y.tab.c"
    break;

  case 141:
#line 339 "kim.y"
                                                                                     {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2537 "y.tab.c"
    break;

  case 142:
#line 340 "kim.y"
                                                                                     {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2543 "y.tab.c"
    break;

  case 143:
#line 344 "kim.y"
                                                    {yyval=yyvsp[0];}
#line 2549 "y.tab.c"
    break;

  case 144:
#line 348 "kim.y"
                                                             {yyval=yyvsp[0];}
#line 2555 "y.tab.c"
    break;

  case 145:
#line 349 "kim.y"
                                                                                       {yyval=makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2561 "y.tab.c"
    break;

  case 146:
#line 350 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2567 "y.tab.c"
    break;

  case 147:
#line 354 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2573 "y.tab.c"
    break;

  case 148:
#line 355 "kim.y"
                                                                                                 {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2579 "y.tab.c"
    break;

  case 149:
#line 356 "kim.y"
                                                                                                  {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2585 "y.tab.c"
    break;

  case 150:
#line 357 "kim.y"
                                                                                                    {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2591 "y.tab.c"
    break;

  case 151:
#line 361 "kim.y"
                                            {yyval=yyvsp[0];}
#line 2597 "y.tab.c"
    break;

  case 152:
#line 362 "kim.y"
                                                            {yyval=makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2603 "y.tab.c"
    break;

  case 153:
#line 366 "kim.y"
                                                   {yyval=yyvsp[0];}
#line 2609 "y.tab.c"
    break;

  case 154:
#line 367 "kim.y"
                                                           {yyval=makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2615 "y.tab.c"
    break;

  case 155:
#line 368 "kim.y"
                                                             {yyval=makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2621 "y.tab.c"
    break;

  case 156:
#line 369 "kim.y"
                                                     {yyval=makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2627 "y.tab.c"
    break;

  case 157:
#line 370 "kim.y"
                                                      {yyval=makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2633 "y.tab.c"
    break;

  case 158:
#line 371 "kim.y"
                                                      {yyval=makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2639 "y.tab.c"
    break;

  case 159:
#line 372 "kim.y"
                                                       {yyval=makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2645 "y.tab.c"
    break;

  case 160:
#line 373 "kim.y"
                                                      {yyval=makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2651 "y.tab.c"
    break;

  case 161:
#line 374 "kim.y"
                                                             {yyval=makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2657 "y.tab.c"
    break;

  case 162:
#line 375 "kim.y"
                                                            {yyval=makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2663 "y.tab.c"
    break;

  case 163:
#line 379 "kim.y"
                                                     {yyval=yyvsp[0];}
#line 2669 "y.tab.c"
    break;

  case 164:
#line 380 "kim.y"
                                                                       {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2675 "y.tab.c"
    break;

  case 165:
#line 381 "kim.y"
                                                                                    {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2681 "y.tab.c"
    break;

  case 166:
#line 382 "kim.y"
                                                                        {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2687 "y.tab.c"
    break;

  case 167:
#line 383 "kim.y"
                                                                       {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2693 "y.tab.c"
    break;

  case 168:
#line 384 "kim.y"
                                                               {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2699 "y.tab.c"
    break;

  case 169:
#line 385 "kim.y"
                                                                 {yyval=makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2705 "y.tab.c"
    break;

  case 170:
#line 389 "kim.y"
                                             {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2711 "y.tab.c"
    break;

  case 171:
#line 390 "kim.y"
                                                    {yyval+makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2717 "y.tab.c"
    break;

  case 172:
#line 391 "kim.y"
                                                  {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2723 "y.tab.c"
    break;

  case 173:
#line 392 "kim.y"
                                                      {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2729 "y.tab.c"
    break;

  case 174:
#line 393 "kim.y"
                                                  {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2735 "y.tab.c"
    break;

  case 175:
#line 394 "kim.y"
                                                    {yyval=yyvsp[-1];}
#line 2741 "y.tab.c"
    break;

  case 176:
#line 398 "kim.y"
                                                                {yyval=setTypeNameSpecifier(yyvsp[0], yyvsp[0]);}
#line 2747 "y.tab.c"
    break;


#line 2751 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 401 "kim.y"


extern char *yytext;
yyerror(char *s){
	syntax_err++;
		printf("line %d : %s near %s \n", line_no, s, yytext);
		}