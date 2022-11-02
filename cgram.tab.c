/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./cgram.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#ifdef MAKE
#include "./cc.h"
#include "./scan.h"
#include "./semutil.h"
#include "./sem.h"
#include "./sym.h"
#else
#include "../cc.h"
#include "../scan.h"
#include "../semutil.h"
#include "../sem.h"
#include "../sym.h"
#endif

#line 84 "cgram.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cgram.tab.h".  */
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
#line 19 "./cgram.y" /* yacc.c:355  */

   int inttype;
   char *str_ptr;
   struct sem_rec *rec_ptr;
   struct id_entry *id_ptr;

#line 231 "cgram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 248 "cgram.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    58,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    52,    53,    56,    57,    60,
      61,    64,    65,    66,    69,    70,    73,    76,    79,    80,
      83,    84,    87,    88,    91,    94,    97,   100,   103,   104,
     107,   108,   111,   112,   115,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   140,   142,   146,   147,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     162,   163,   166,   167,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   193,   194,   195,   196,
     197,   198,   199,   200,   203,   204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CON", "STR", "ELSE", "DOUBLE",
  "FOR", "IF", "INT", "RESERVED", "RETURN", "WHILE", "DO", "CONTINUE",
  "BREAK", "GOTO", "LVAL", "SET", "SETOR", "SETXOR", "SETAND", "SETLSH",
  "SETRSH", "SETADD", "SETSUB", "SETMUL", "SETDIV", "SETMOD", "OR", "AND",
  "BITOR", "BITXOR", "BITAND", "EQ", "NE", "GT", "GE", "LT", "LE", "LSH",
  "RSH", "ADD", "SUB", "MUL", "DIV", "MOD", "UNARY", "NOT", "COM", "';'",
  "','", "'['", "']'", "'}'", "'{'", "'('", "')'", "':'", "$accept",
  "prog", "externs", "extern", "dcls", "dcl", "dclr", "type", "func",
  "fhead", "fname", "fargs", "args", "s", "m", "n", "block", "stmts",
  "lblstmt", "labels", "b", "stmt", "cexpro", "cexpr", "exprs", "expro",
  "expr", "lval", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    59,    44,    91,    93,   125,   123,    40,    41,    58
};
# endif

#define YYPACT_NINF -185

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-185)))

#define YYTABLE_NINF -19

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -185,     6,    37,  -185,  -185,  -185,  -185,  -185,    56,    42,
    -185,  -185,    38,  -185,   102,    44,  -185,    55,    23,    78,
      73,  -185,    28,  -185,  -185,   158,  -185,   102,   -45,  -185,
      81,  -185,   -11,  -185,  -185,    79,    80,   191,    83,  -185,
      87,    92,   141,   142,   194,   194,  -185,  -185,   194,  -185,
     173,  -185,   247,   357,  -185,    14,  -185,    14,  -185,   194,
      46,  -185,   194,    49,    66,  -185,   263,  -185,  -185,  -185,
    -185,    95,    96,  -185,  -185,  -185,    97,   213,    35,  -185,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
    -185,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   102,    70,   102,   231,  -185,   -30,   299,    99,
     299,    49,   -22,   283,  -185,    49,  -185,  -185,  -185,  -185,
    -185,   314,   328,   346,    71,    71,    40,    40,  -185,  -185,
    -185,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,  -185,  -185,  -185,   194,  -185,  -185,  -185,  -185,
    -185,  -185,   194,   194,   194,   194,   194,   194,   -20,   134,
     299,    49,    49,    49,  -185,   299,   299,   299,   299,   299,
     299,  -185,    98,   100,    94,   123,  -185,   151,  -185,  -185,
    -185,  -185,  -185,  -185,    49,   194,  -185,  -185,   -15,  -185,
    -185,  -185,   113,   110,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    19,    15,    14,     4,     0,     0,
       6,    28,     0,     5,     0,    11,     9,    34,     0,     0,
      11,    10,     0,    16,    29,     0,    20,     0,     0,     7,
       0,    12,    94,    92,    93,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,    47,    28,     0,    46,
       0,    30,     0,    88,    22,     0,    21,    17,    13,     0,
       0,    32,    62,     0,    94,    44,     0,    25,    24,    41,
      42,     0,    94,    85,    86,    87,    34,     0,    94,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    60,     0,
      63,     0,     0,    59,    45,     0,    34,    43,    27,    91,
      33,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    23,     8,    95,     0,    90,    25,    58,    25,
      25,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    48,     0,     0,    34,    50,    51,    55,    53,    54,
      52,    25,     0,     0,    49,    57,    56,    25,    24,    25,
      25,    26,    36,    34,     0,    62,    25,    26,     0,    26,
      34,    25,     0,     0,    25,    38,    25,    25,    37,    39,
      24,    34,    26,    25,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,  -185,   112,   -13,   -16,  -185,  -185,
    -185,  -185,  -185,  -174,   -38,  -184,  -185,   132,   -99,  -185,
    -185,   130,  -185,   -84,  -185,    -2,   -25,   148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    57,     8,    16,     9,    10,    11,
      12,    19,    28,   116,    68,   186,    49,    17,    24,    50,
      25,    51,   173,   112,   107,   109,   113,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    21,    27,   191,   183,   193,     3,    55,   149,   150,
     149,   150,    66,    56,    54,   149,   150,   159,   203,    74,
      75,     5,   145,    77,     6,    52,   201,   148,   146,   115,
       5,   158,    30,     6,   105,   108,   151,   110,   171,   102,
       4,   104,    59,   192,     5,    15,    60,     6,    61,    64,
      33,    34,    64,    33,    34,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   177,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   174,   175,   176,
      43,    26,    31,    43,   187,    87,    88,    89,    59,   142,
      44,   194,    60,    44,   120,    18,    45,    22,   111,    45,
     188,   -18,   202,    48,   106,    20,    48,    13,    14,   161,
      23,   162,   163,   164,    85,    86,    87,    88,    89,    59,
     160,   143,    14,    60,   149,   150,    22,   165,   166,   167,
     168,   169,   170,   178,    29,    58,    62,    63,    69,   182,
      67,   184,   185,    70,    71,    72,   117,   172,   190,    59,
     147,   180,   118,   195,   150,   179,   198,   181,   199,   200,
     110,    32,    33,    34,   196,   204,    35,    36,   197,   103,
      37,    38,    39,    40,    41,    42,    78,    33,    34,    76,
      79,    35,    36,   189,     0,    37,    38,    39,    40,    41,
      42,    73,    43,     0,    64,    33,    34,    64,    33,    34,
       0,     0,    44,     0,     0,     0,     0,    43,    45,    46,
       0,     0,     0,     0,    47,    48,     0,    44,     0,     0,
       0,     0,     0,    45,    46,    43,     0,     0,    43,    47,
      48,     0,     0,     0,     0,    44,     0,     0,    44,     0,
       0,    45,    65,     0,    45,    80,    81,    82,    48,     0,
       0,    48,     0,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,   119,    83,    84,    85,    86,    87,    88,    89,    80,
      81,    82,     0,     0,     0,   144,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    80,    81,    82,    90,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,     0,   114,    80,    81,    82,   152,   153,
     154,   155,   156,   157,    83,    84,    85,    86,    87,    88,
      89,    80,    81,    82,     0,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    81,    82,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    82,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    83,    84,    85,
      86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
      25,    14,    18,   187,   178,   189,     0,    52,    30,    31,
      30,    31,    37,    58,    27,    30,    31,   116,   202,    44,
      45,     7,    52,    48,    10,    50,   200,   111,    58,    67,
       7,   115,     4,    10,    59,    60,    58,    62,    58,    55,
       3,    57,    53,    58,     7,     3,    57,    10,    59,     3,
       4,     5,     3,     4,     5,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   164,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   161,   162,   163,
      34,    58,    54,    34,   183,    45,    46,    47,    53,   102,
      44,   190,    57,    44,    59,    57,    50,    53,    49,    50,
     184,    57,   201,    57,    58,     3,    57,    51,    52,   147,
      55,   149,   150,   151,    43,    44,    45,    46,    47,    53,
     145,    51,    52,    57,    30,    31,    53,   152,   153,   154,
     155,   156,   157,   171,    56,    54,    57,    57,    51,   177,
      57,   179,   180,    51,     3,     3,    51,    13,   186,    53,
      51,    51,    55,   191,    31,    57,   194,     6,   196,   197,
     185,     3,     4,     5,    51,   203,     8,     9,    58,    57,
      12,    13,    14,    15,    16,    17,     3,     4,     5,    47,
      50,     8,     9,   185,    -1,    12,    13,    14,    15,    16,
      17,    43,    34,    -1,     3,     4,     5,     3,     4,     5,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    34,    50,    51,
      -1,    -1,    -1,    -1,    56,    57,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    34,    -1,    -1,    34,    56,
      57,    -1,    -1,    -1,    -1,    44,    -1,    -1,    44,    -1,
      -1,    50,    51,    -1,    50,    32,    33,    34,    57,    -1,
      -1,    57,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    58,    41,    42,    43,    44,    45,    46,    47,    32,
      33,    34,    -1,    -1,    -1,    54,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    32,    33,    34,    51,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    41,    42,    43,
      44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,     3,     7,    10,    63,    65,    67,
      68,    69,    70,    51,    52,     3,    66,    77,    57,    71,
       3,    66,    53,    55,    78,    80,    58,    67,    72,    56,
       4,    54,     3,     4,     5,     8,     9,    12,    13,    14,
      15,    16,    17,    34,    44,    50,    51,    56,    57,    76,
      79,    81,    86,    87,    66,    52,    58,    64,    54,    53,
      57,    59,    57,    57,     3,    51,    86,    57,    74,    51,
      51,     3,     3,    87,    86,    86,    77,    86,     3,    81,
      32,    33,    34,    41,    42,    43,    44,    45,    46,    47,
      51,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    67,    65,    67,    86,    58,    84,    86,    85,
      86,    49,    83,    86,    51,    74,    73,    51,    55,    58,
      59,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    66,    51,    54,    52,    58,    51,    83,    30,
      31,    58,    35,    36,    37,    38,    39,    40,    83,    78,
      86,    74,    74,    74,    74,    86,    86,    86,    86,    86,
      86,    58,    13,    82,    83,    83,    83,    78,    74,    57,
      51,     6,    74,    73,    74,    74,    75,    78,    83,    85,
      74,    75,    58,    75,    78,    74,    51,    58,    74,    74,
      74,    73,    78,    75,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    67,    67,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    74,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     0,     3,     2,
       3,     1,     3,     4,     1,     1,     3,     4,     2,     1,
       2,     3,     2,     4,     0,     0,     0,     3,     0,     2,
       2,     3,     2,     3,     0,     2,     7,    11,    10,    11,
      16,     2,     2,     3,     2,     3,     1,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     2,     1,
       1,     3,     0,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     1,     3,
       4,     3,     1,     1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 45 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1501 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1507 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1513 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1519 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1525 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1531 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1537 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = dcl((yyvsp[0].id_ptr), (yyvsp[-1].inttype), 0); }
#line 1543 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = dcl((yyvsp[0].id_ptr), (yyvsp[-2].id_ptr)->i_type&~T_ARRAY, 0); }
#line 1549 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = dclr((yyvsp[0].str_ptr), 0, 1); }
#line 1555 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = dclr((yyvsp[-2].str_ptr), T_ARRAY, 1); }
#line 1561 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = dclr((yyvsp[-3].str_ptr), T_ARRAY, atoi((yyvsp[-1].str_ptr))); }
#line 1567 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 69 "./cgram.y" /* yacc.c:1646  */
    { (yyval.inttype) = T_INT; }
#line 1573 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "./cgram.y" /* yacc.c:1646  */
    { (yyval.inttype) = T_DOUBLE; }
#line 1579 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "./cgram.y" /* yacc.c:1646  */
    { ftail(); }
#line 1585 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "./cgram.y" /* yacc.c:1646  */
    { fhead((yyvsp[-3].id_ptr)); }
#line 1591 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 79 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = fname((yyvsp[-1].inttype), (yyvsp[0].str_ptr)); }
#line 1597 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "./cgram.y" /* yacc.c:1646  */
    { (yyval.id_ptr) = fname(T_INT, (yyvsp[0].str_ptr)); }
#line 1603 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "./cgram.y" /* yacc.c:1646  */
    { enterblock(); }
#line 1609 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "./cgram.y" /* yacc.c:1646  */
    { enterblock(); }
#line 1615 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "./cgram.y" /* yacc.c:1646  */
    { dcl((yyvsp[0].id_ptr), (yyvsp[-1].inttype), PARAM); }
#line 1621 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "./cgram.y" /* yacc.c:1646  */
    { dcl((yyvsp[0].id_ptr), (yyvsp[-1].inttype), PARAM); }
#line 1627 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "./cgram.y" /* yacc.c:1646  */
    { startloopscope(); }
#line 1633 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 94 "./cgram.y" /* yacc.c:1646  */
    { (yyval.inttype) = m(); }
#line 1639 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 97 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = n(); }
#line 1645 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 100 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1651 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 103 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1657 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 104 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1663 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 107 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1669 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1675 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 111 "./cgram.y" /* yacc.c:1646  */
    { labeldcl((yyvsp[-1].str_ptr)); }
#line 1681 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "./cgram.y" /* yacc.c:1646  */
    { labeldcl((yyvsp[-1].str_ptr)); }
#line 1687 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 115 "./cgram.y" /* yacc.c:1646  */
    { bgnstmt(); }
#line 1693 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 119 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1699 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 121 "./cgram.y" /* yacc.c:1646  */
    { doif((yyvsp[-4].rec_ptr), (yyvsp[-2].inttype), (yyvsp[0].inttype)); }
#line 1705 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 123 "./cgram.y" /* yacc.c:1646  */
    { doifelse((yyvsp[-8].rec_ptr), (yyvsp[-6].inttype), (yyvsp[-3].rec_ptr), (yyvsp[-2].inttype), (yyvsp[0].inttype)); }
#line 1711 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "./cgram.y" /* yacc.c:1646  */
    { dowhile((yyvsp[-7].inttype), (yyvsp[-6].rec_ptr), (yyvsp[-4].inttype), (yyvsp[-1].rec_ptr), (yyvsp[0].inttype)); }
#line 1717 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 127 "./cgram.y" /* yacc.c:1646  */
    { dodo((yyvsp[-9].inttype), (yyvsp[-4].inttype), (yyvsp[-3].rec_ptr), (yyvsp[0].inttype)); }
#line 1723 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "./cgram.y" /* yacc.c:1646  */
    { dofor((yyvsp[-11].inttype), (yyvsp[-10].rec_ptr), (yyvsp[-8].inttype), (yyvsp[-6].rec_ptr), (yyvsp[-4].inttype), (yyvsp[-1].rec_ptr), (yyvsp[0].inttype)); }
#line 1729 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "./cgram.y" /* yacc.c:1646  */
    { docontinue(); }
#line 1735 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "./cgram.y" /* yacc.c:1646  */
    { dobreak(); }
#line 1741 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "./cgram.y" /* yacc.c:1646  */
    { dogoto((yyvsp[-1].str_ptr)); }
#line 1747 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 137 "./cgram.y" /* yacc.c:1646  */
    { doret((struct sem_rec *) NULL); }
#line 1753 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 139 "./cgram.y" /* yacc.c:1646  */
    { doret((yyvsp[-1].rec_ptr)); }
#line 1759 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 141 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1765 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "./cgram.y" /* yacc.c:1646  */
    { }
#line 1771 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 146 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = node(0, 0, n(), 0); }
#line 1777 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1783 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel("==", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1789 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 151 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel("!=", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1795 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 152 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel("<=", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1801 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel(">=", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1807 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 154 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel("<",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1813 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 155 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = rel(">",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1819 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 156 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = ccand((yyvsp[-3].rec_ptr), (yyvsp[-1].inttype), (yyvsp[0].rec_ptr)); }
#line 1825 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 157 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = ccor((yyvsp[-3].rec_ptr), (yyvsp[-1].inttype), (yyvsp[0].rec_ptr)); }
#line 1831 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 158 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = ccnot((yyvsp[0].rec_ptr)); }
#line 1837 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 159 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = ccexpr((yyvsp[0].rec_ptr)); }
#line 1843 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 162 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = (yyvsp[0].rec_ptr); }
#line 1849 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 163 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = exprs((yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1855 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 166 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1861 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 167 "./cgram.y" /* yacc.c:1646  */
    {}
#line 1867 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 170 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("",   (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1873 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 171 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("|",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1879 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 172 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("^",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1885 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 173 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("&",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1891 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 174 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("<<", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1897 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 175 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set(">>", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1903 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 176 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("+",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1909 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 177 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("-",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1915 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 178 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("*",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1921 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 179 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("/",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1927 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 180 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = set("%",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1933 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = opb("|",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1939 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 182 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = opb("^",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1945 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 183 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = opb("&",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1951 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 184 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = opb("<<", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1957 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 185 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = opb(">>", (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1963 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 186 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op2("+",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1969 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 187 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op2("-",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1975 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 188 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op2("*",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1981 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 189 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op2("/",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1987 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 190 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op2("%",  (yyvsp[-2].rec_ptr), (yyvsp[0].rec_ptr)); }
#line 1993 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 192 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = (yyvsp[0].rec_ptr); }
#line 1999 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 193 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op1("-",      (yyvsp[0].rec_ptr)); }
#line 2005 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 194 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op1("~",      (yyvsp[0].rec_ptr)); }
#line 2011 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 195 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = op1("@",      (yyvsp[0].rec_ptr)); }
#line 2017 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 196 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = call((yyvsp[-2].str_ptr), (struct sem_rec *) NULL); }
#line 2023 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 197 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = call((yyvsp[-3].str_ptr), (yyvsp[-1].rec_ptr)); }
#line 2029 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 198 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = (yyvsp[-1].rec_ptr); }
#line 2035 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 199 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = con((yyvsp[0].str_ptr)); }
#line 2041 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 200 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = string((yyvsp[0].str_ptr)); }
#line 2047 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 203 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = id((yyvsp[0].str_ptr)); }
#line 2053 "cgram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 204 "./cgram.y" /* yacc.c:1646  */
    { (yyval.rec_ptr) = sindex(id((yyvsp[-3].str_ptr)), (yyvsp[-1].rec_ptr)); }
#line 2059 "cgram.tab.c" /* yacc.c:1646  */
    break;


#line 2063 "cgram.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 206 "./cgram.y" /* yacc.c:1906  */

# include <stdio.h>
# include <stdlib.h>
extern int lineno;

/* 
 * main - read a program, and parse it
 */
int main(int argc, char *argv[])
{
   int yyparse();

   enterblock();
   initlex();
   enterblock();
   if (yyparse())
      yyerror("syntax error");
   exit(0);
}

/*
 * yyerror - issue error message
 */
void yyerror(char msg[])
{
   fprintf(stderr, " %s.  Line %d\n", msg, lineno);
}
