/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_CGRAM_TAB_H_INCLUDED
# define YY_YY_CGRAM_TAB_H_INCLUDED
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
    ID = 258,
    CON = 259,
    STR = 260,
    ELSE = 261,
    DOUBLE = 262,
    FOR = 263,
    IF = 264,
    INT = 265,
    RESERVED = 266,
    RETURN = 267,
    WHILE = 268,
    DO = 269,
    CONTINUE = 270,
    BREAK = 271,
    GOTO = 272,
    LVAL = 273,
    SET = 274,
    SETOR = 275,
    SETXOR = 276,
    SETAND = 277,
    SETLSH = 278,
    SETRSH = 279,
    SETADD = 280,
    SETSUB = 281,
    SETMUL = 282,
    SETDIV = 283,
    SETMOD = 284,
    OR = 285,
    AND = 286,
    BITOR = 287,
    BITXOR = 288,
    BITAND = 289,
    EQ = 290,
    NE = 291,
    GT = 292,
    GE = 293,
    LT = 294,
    LE = 295,
    LSH = 296,
    RSH = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301,
    MOD = 302,
    UNARY = 303,
    NOT = 304,
    COM = 305
  };
#endif
/* Tokens.  */
#define ID 258
#define CON 259
#define STR 260
#define ELSE 261
#define DOUBLE 262
#define FOR 263
#define IF 264
#define INT 265
#define RESERVED 266
#define RETURN 267
#define WHILE 268
#define DO 269
#define CONTINUE 270
#define BREAK 271
#define GOTO 272
#define LVAL 273
#define SET 274
#define SETOR 275
#define SETXOR 276
#define SETAND 277
#define SETLSH 278
#define SETRSH 279
#define SETADD 280
#define SETSUB 281
#define SETMUL 282
#define SETDIV 283
#define SETMOD 284
#define OR 285
#define AND 286
#define BITOR 287
#define BITXOR 288
#define BITAND 289
#define EQ 290
#define NE 291
#define GT 292
#define GE 293
#define LT 294
#define LE 295
#define LSH 296
#define RSH 297
#define ADD 298
#define SUB 299
#define MUL 300
#define DIV 301
#define MOD 302
#define UNARY 303
#define NOT 304
#define COM 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "./cgram.y" /* yacc.c:1909  */

   int inttype;
   char *str_ptr;
   struct sem_rec *rec_ptr;
   struct id_entry *id_ptr;

#line 161 "cgram.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */
