/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
