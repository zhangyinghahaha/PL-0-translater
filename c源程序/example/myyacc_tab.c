
/*  A Bison parser, made from myyacc.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	SYM_program	258
#define	SYM_const	259
#define	SYM_procedure	260
#define	SYM_begin	261
#define	SYM_end	262
#define	SYM_write	263
#define	SYM_read	264
#define	SYM_do	265
#define	SYM_call	266
#define	SYM_while	267
#define	SYM_if	268
#define	SYM_else	269
#define	SYM_then	270
#define	SYM_repeat	271
#define	SYM_until	272
#define	SYM_ident	273
#define	SYM_number	274
#define	SYM_var	275
#define	SYM_odd	276
#define	OPR_constinit	277
#define	OPR_become	278
#define	OPR_plus	279
#define	OPR_minus	280
#define	OPR_times	281
#define	OPR_slash	282
#define	OPR_lss	283
#define	OPR_leq	284
#define	OPR_gtr	285
#define	OPR_geq	286
#define	OPR_neq	287
#define	OPR_eql	288
#define	BDY_lparen	289
#define	BDY_rparen	290
#define	BDY_comma	291
#define	BDY_period	292
#define	BDY_semicolon	293

#line 3 "myyacc.y"

#include "stdio.h"
#include "string.h"
int reducecount=1;  /*规约次数*/
#define AL 20

FILE *fguiyue,*fword; 
FILE *fin,*fout;
char fname[AL];
int err;
char c;
FILE *fzy=NULL;

extern char keyword[13][20];
extern int nchar;
extern int nword;
extern int line;		/*行数*/

void printReduce(char *s);

#line 24 "myyacc.y"
typedef union{/*联合体*/
char *ident;
int number;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		139
#define	YYFLAG		-32768
#define	YYNTBASE	39

#define YYTRANSLATE(x) ((unsigned)(x) <= 293 ? yytranslate[x] : 80)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     5,     6,    10,    11,    15,    16,    20,    21,
    26,    27,    32,    33,    38,    39,    45,    48,    51,    55,
    59,    62,    65,    69,    70,    75,    76,    82,    86,    88,
    90,    92,    94,    96,    98,   100,   102,   106,   109,   112,
   116,   120,   122,   125,   128,   131,   135,   139,   142,   145,
   149,   153,   155,   158,   160,   162,   166,   167,   173,   177,
   180,   182,   184,   186,   188,   190,   192,   193,   194,   201,
   204,   205,   211,   213,   217,   219,   223,   228,   229,   234,
   237,   241
};

static const short yyrhs[] = {    40,
    37,     0,    57,     0,     0,    48,    41,    57,     0,     0,
    51,    42,    57,     0,     0,    53,    43,    57,     0,     0,
    48,    51,    44,    57,     0,     0,    51,    53,    45,    57,
     0,     0,    48,    53,    46,    57,     0,     0,    48,    51,
    53,    47,    57,     0,    49,    38,     0,     4,    50,     0,
    49,    36,    50,     0,    18,    22,    19,     0,    52,    38,
     0,    20,    18,     0,    52,    36,    18,     0,     0,    56,
    40,    54,    38,     0,     0,    53,    55,    56,    40,    38,
     0,     5,    18,    38,     0,    58,     0,    64,     0,    68,
     0,    71,     0,    72,     0,    76,     0,    77,     0,    38,
     0,    18,    23,    60,     0,    24,    62,     0,    25,    62,
     0,    25,    62,    59,     0,    24,    62,    59,     0,    62,
     0,    24,    62,     0,    25,    62,     0,    62,    59,     0,
    24,    62,    59,     0,    25,    62,    59,     0,    26,    63,
     0,    27,    63,     0,    26,    63,    61,     0,    27,    63,
    61,     0,    63,     0,    63,    61,     0,    18,     0,    19,
     0,    34,    60,    35,     0,     0,    13,    66,    65,    15,
    57,     0,    60,    67,    60,     0,    21,    60,     0,    29,
     0,    28,     0,    33,     0,    30,     0,    31,     0,    32,
     0,     0,     0,    12,    69,    66,    10,    70,    57,     0,
    11,    18,     0,     0,     9,    73,    34,    74,    35,     0,
    18,     0,    74,    36,    18,     0,    60,     0,    60,    36,
    60,     0,     8,    34,    75,    35,     0,     0,     6,    78,
    79,     7,     0,    57,    38,     0,    79,    57,    38,     0,
    79,    38,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    88,    95,    98,   102,   103,   107,   108,   112,   113,   117,
   118,   122,   123,   127,   128,   132,   136,   142,   146,   151,
   158,   164,   168,   174,   179,   181,   184,   190,   197,   200,
   202,   204,   206,   208,   210,   212,   218,   225,   229,   232,
   235,   240,   244,   247,   250,   253,   256,   261,   265,   268,
   271,   275,   278,   284,   288,   291,   296,   300,   306,   309,
   315,   319,   322,   325,   328,   331,   337,   341,   345,   350,
   357,   361,   367,   371,   377,   380,   385,   392,   396,   404,
   407,   409
};

static const char * const yytname[] = {   "$","error","$undefined.","SYM_program",
"SYM_const","SYM_procedure","SYM_begin","SYM_end","SYM_write","SYM_read","SYM_do",
"SYM_call","SYM_while","SYM_if","SYM_else","SYM_then","SYM_repeat","SYM_until",
"SYM_ident","SYM_number","SYM_var","SYM_odd","OPR_constinit","OPR_become","OPR_plus",
"OPR_minus","OPR_times","OPR_slash","OPR_lss","OPR_leq","OPR_gtr","OPR_geq",
"OPR_neq","OPR_eql","BDY_lparen","BDY_rparen","BDY_comma","BDY_period","BDY_semicolon",
"program","sonprogram","@1","@2","@3","@4","@5","@6","@7","constexplain","noconstexplain",
"constdefine","varexplain","novarexplain","proexplain","@8","@9","prohead","sentence",
"assignsen","midxiang","expression","midfactor","term","factor","ifsen","@10",
"condition","relationop","whilesen","@11","@12","callsen","readsen","@13","identlist",
"expressionlist","writesen","complexsen","@14","sentencelist",""
};
#endif

static const short yyr1[] = {     0,
    39,    40,    41,    40,    42,    40,    43,    40,    44,    40,
    45,    40,    46,    40,    47,    40,    48,    49,    49,    50,
    51,    52,    52,    54,    53,    55,    53,    56,    57,    57,
    57,    57,    57,    57,    57,    57,    58,    59,    59,    59,
    59,    60,    60,    60,    60,    60,    60,    61,    61,    61,
    61,    62,    62,    63,    63,    63,    65,    64,    66,    66,
    67,    67,    67,    67,    67,    67,    69,    70,    68,    71,
    73,    72,    74,    74,    75,    75,    76,    78,    77,    79,
    79,    79
};

static const short yyr2[] = {     0,
     2,     1,     0,     3,     0,     3,     0,     3,     0,     4,
     0,     4,     0,     4,     0,     5,     2,     2,     3,     3,
     2,     2,     3,     0,     4,     0,     5,     3,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
     3,     1,     2,     2,     2,     3,     3,     2,     2,     3,
     3,     1,     2,     1,     1,     3,     0,     5,     3,     2,
     1,     1,     1,     1,     1,     1,     0,     0,     6,     2,
     0,     5,     1,     3,     1,     3,     4,     0,     4,     2,
     3,     2
};

static const short yydefact[] = {     0,
     0,     0,    78,     0,    71,     0,    67,     0,     0,     0,
    36,     0,     3,     0,     5,     0,     7,     0,     2,    29,
    30,    31,    32,    33,    34,    35,     0,    18,     0,     0,
     0,     0,    70,     0,    54,    55,     0,     0,     0,     0,
     0,    42,    52,    57,     0,    22,     1,     0,     9,    13,
     0,    17,     0,    11,     0,    21,     0,     0,    24,     0,
    28,     0,     0,    75,     0,     0,     0,    60,    43,    44,
     0,    62,    61,    64,    65,    66,    63,     0,     0,     0,
    45,     0,     0,    53,     0,    37,     4,     0,    15,     0,
    19,     6,     0,    23,     8,     0,     0,    20,    80,    79,
    82,     0,     0,    77,    73,     0,    68,    46,    47,    56,
    59,    38,    39,    48,    49,     0,    10,     0,    14,    12,
     0,    25,    81,    76,    72,     0,     0,    41,    40,    50,
    51,    58,    16,    27,    74,    69,     0,     0,     0
};

static const short yydefgoto[] = {   137,
    12,    48,    53,    57,    88,    93,    90,   118,    13,    14,
    28,    15,    16,    17,    97,    58,    18,    19,    20,    81,
    41,    84,    42,    43,    21,    85,    44,    78,    22,    34,
   127,    23,    24,    32,   106,    65,    25,    26,    30,    63
};

static const short yypact[] = {    60,
   -12,    -4,-32768,     0,-32768,    32,-32768,    11,    25,    34,
-32768,    22,    23,   -21,    62,     6,    65,    60,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    55,-32768,    47,    81,
    57,    61,-32768,    11,-32768,-32768,    57,    21,    21,    57,
    72,   -15,    30,-32768,    57,-32768,-32768,    81,    62,    65,
   -12,-32768,    81,    65,    78,-32768,    81,    62,-32768,    87,
-32768,    69,    13,    73,    75,    90,   101,-32768,   -15,   -15,
    77,-32768,-32768,-32768,-32768,-32768,-32768,    57,    21,    21,
-32768,    21,    21,-32768,    98,-32768,-32768,    81,    65,    81,
-32768,-32768,    81,-32768,-32768,    60,    76,-32768,-32768,-32768,
    79,    80,    57,-32768,-32768,     2,-32768,-32768,-32768,-32768,
-32768,   -15,   -15,    30,    30,    81,-32768,    81,-32768,-32768,
    82,-32768,-32768,-32768,-32768,    97,    81,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   116,   121,-32768
};

static const short yypgoto[] = {-32768,
   -17,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    71,   110,-32768,    -8,-32768,-32768,    66,   -30,-32768,   -66,
   -29,   -53,   -26,     1,-32768,-32768,    91,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		125


static const short yytable[] = {    62,
    59,    64,   108,   109,    50,    27,    54,    68,    79,    80,
    71,    69,    70,    29,    51,    86,    52,    87,     3,   100,
     4,     5,    92,     6,     7,     8,    95,     2,    35,    36,
     9,    37,   102,    31,    38,    39,   125,   126,    35,    36,
    89,    55,    10,    56,    40,   128,   129,    45,   111,    33,
   101,    46,   112,   113,    40,    82,    83,   117,    47,   119,
   130,   131,   120,     1,     2,     3,     2,     4,     5,   -26,
     6,     7,     8,   124,    35,    36,    60,     9,   121,    10,
    38,    39,   114,   115,    61,   132,     3,   133,     4,     5,
    40,     6,     7,     8,    66,    94,   136,    11,     9,    72,
    73,    74,    75,    76,    77,    98,    99,   105,   103,   104,
   107,   110,   116,   122,   135,   138,   -36,   123,    11,   134,
   139,    91,    49,    96,    67
};

static const short yycheck[] = {    30,
    18,    31,    69,    70,    13,    18,    15,    37,    24,    25,
    40,    38,    39,    18,    36,    45,    38,    48,     6,     7,
     8,     9,    53,    11,    12,    13,    57,     5,    18,    19,
    18,    21,    63,    34,    24,    25,    35,    36,    18,    19,
    49,    36,    20,    38,    34,   112,   113,    23,    78,    18,
    38,    18,    79,    80,    34,    26,    27,    88,    37,    90,
   114,   115,    93,     4,     5,     6,     5,     8,     9,     5,
    11,    12,    13,   103,    18,    19,    22,    18,    96,    20,
    24,    25,    82,    83,    38,   116,     6,   118,     8,     9,
    34,    11,    12,    13,    34,    18,   127,    38,    18,    28,
    29,    30,    31,    32,    33,    19,    38,    18,    36,    35,
    10,    35,    15,    38,    18,     0,    38,    38,    38,    38,
     0,    51,    13,    58,    34
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */
#include <malloc.h>      /*  add by lyh */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) malloc (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) malloc (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) malloc (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 90 "myyacc.y"
{
		printReduce("program->sonprogram BDY_period");;
    break;}
case 2:
#line 97 "myyacc.y"
{printReduce("sonprogram->sentence");;
    break;}
case 3:
#line 99 "myyacc.y"
{
                ;
    break;}
case 4:
#line 102 "myyacc.y"
{printReduce("sonprogram->constexplain sentence");;
    break;}
case 5:
#line 104 "myyacc.y"
{
                ;
    break;}
case 6:
#line 107 "myyacc.y"
{printReduce("sonprogram->varexplain sentence");;
    break;}
case 7:
#line 109 "myyacc.y"
{
        ;
    break;}
case 8:
#line 112 "myyacc.y"
{printReduce("sonprogram->proexplain sentence");;
    break;}
case 9:
#line 114 "myyacc.y"
{
                ;
    break;}
case 10:
#line 117 "myyacc.y"
{printReduce("sonprogram->constexplain varexplain sentence");;
    break;}
case 11:
#line 119 "myyacc.y"
{
                ;
    break;}
case 12:
#line 122 "myyacc.y"
{printReduce("sonprogram->varexplain proexplain sentence");;
    break;}
case 13:
#line 124 "myyacc.y"
{
                ;
    break;}
case 14:
#line 127 "myyacc.y"
{printReduce("sonprogram->constexplain proexplain sentence");;
    break;}
case 15:
#line 129 "myyacc.y"
{
                ;
    break;}
case 16:
#line 132 "myyacc.y"
{printReduce("sonprogram->constexplain varexplain proexplain sentence");;
    break;}
case 17:
#line 138 "myyacc.y"
{printReduce("constexplain->noconstexplain BDY_semicolon");;
    break;}
case 18:
#line 144 "myyacc.y"
{
		printReduce("noconstexplain->SYM_const constdefine");;
    break;}
case 19:
#line 147 "myyacc.y"
{printReduce("noconstexplain->noconstexplain BDY_comma constdefine");;
    break;}
case 20:
#line 153 "myyacc.y"
{
		printReduce("constdefine->SYM_ident OPR_constinit SYM_number");;
    break;}
case 21:
#line 160 "myyacc.y"
{printReduce("varexplain->novarexplain BDY_semicolon");;
    break;}
case 22:
#line 166 "myyacc.y"
{
		printReduce("varexplain->SYM_var SYM_ident");;
    break;}
case 23:
#line 169 "myyacc.y"
{
		printReduce("novarexplain->novarexplain BDY_comma SYM_ident");;
    break;}
case 24:
#line 176 "myyacc.y"
{
		;
    break;}
case 25:
#line 179 "myyacc.y"
{
		printReduce("proexplain->prohead sonprogram BDY_semicolon");;
    break;}
case 26:
#line 182 "myyacc.y"
{
		;
    break;}
case 27:
#line 185 "myyacc.y"
{
		printReduce("proexplain->proexplain prohead sonprogram BDY_semicolon ");;
    break;}
case 28:
#line 192 "myyacc.y"
{
		printReduce("prohead->SYM_procedure SYM_ident BDY_semicolon");;
    break;}
case 29:
#line 199 "myyacc.y"
{printReduce("sentence->assignsen ");;
    break;}
case 30:
#line 201 "myyacc.y"
{printReduce("sentence->ifsen ");;
    break;}
case 31:
#line 203 "myyacc.y"
{printReduce("sentence->whilesen ");;
    break;}
case 32:
#line 205 "myyacc.y"
{printReduce("sentence->callsen ");;
    break;}
case 33:
#line 207 "myyacc.y"
{printReduce("sentence->readsen ");;
    break;}
case 34:
#line 209 "myyacc.y"
{printReduce("sentence->writesen ");;
    break;}
case 35:
#line 211 "myyacc.y"
{printReduce("sentence->complexsen ");;
    break;}
case 36:
#line 213 "myyacc.y"
{printReduce("sentence->BDY_semicolon");;
    break;}
case 37:
#line 220 "myyacc.y"
{
		printReduce("assignsen->SYM_ident OPR_become expression ");;
    break;}
case 38:
#line 227 "myyacc.y"
{
	printReduce("midxiang->OPR_plus term ");;
    break;}
case 39:
#line 230 "myyacc.y"
{
	printReduce("midxiang->OPR_minus term ");;
    break;}
case 40:
#line 233 "myyacc.y"
{
	printReduce("midxiang->OPR_minus term midxiang");;
    break;}
case 41:
#line 236 "myyacc.y"
{
	printReduce("midxiang->OPR_plus term midxiang");;
    break;}
case 42:
#line 242 "myyacc.y"
{
		printReduce("expression->term");;
    break;}
case 43:
#line 245 "myyacc.y"
{
		printReduce("expression->OPR_plus term");;
    break;}
case 44:
#line 248 "myyacc.y"
{
		printReduce("expression->OPR_minus term");;
    break;}
case 45:
#line 251 "myyacc.y"
{
		printReduce("expression->term midxiang");;
    break;}
case 46:
#line 254 "myyacc.y"
{
		printReduce("expression->OPR_plus term midxiang");;
    break;}
case 47:
#line 257 "myyacc.y"
{
		printReduce("expression->OPR_minus term midxiang");;
    break;}
case 48:
#line 263 "myyacc.y"
{
		printReduce("midfactor->OPR_times factor");;
    break;}
case 49:
#line 266 "myyacc.y"
{
		printReduce("midfactor->OPR_slash factor");;
    break;}
case 50:
#line 269 "myyacc.y"
{
		printReduce("midfactor->OPR_times factor midfactor");;
    break;}
case 51:
#line 272 "myyacc.y"
{
		printReduce("midfactor->OPR_slash factor midfactor");;
    break;}
case 52:
#line 277 "myyacc.y"
{printReduce("term->factor");;
    break;}
case 53:
#line 279 "myyacc.y"
{
		printReduce("term->factor midfactor");;
    break;}
case 54:
#line 286 "myyacc.y"
{
		printReduce("factor->SYM_ident");;
    break;}
case 55:
#line 289 "myyacc.y"
{
		printReduce("factor->SYM_number");;
    break;}
case 56:
#line 292 "myyacc.y"
{printReduce("factor->BDY_lparen expression BDY_rparen");;
    break;}
case 57:
#line 298 "myyacc.y"
{
                ;
    break;}
case 58:
#line 301 "myyacc.y"
{
		printReduce("ifsen->SYM_if condition SYM_then sentence");;
    break;}
case 59:
#line 308 "myyacc.y"
{printReduce("condition->expression relationop expression");;
    break;}
case 60:
#line 310 "myyacc.y"
{
		printReduce("condition->SYM_odd expression");;
    break;}
case 61:
#line 317 "myyacc.y"
{
		printReduce("relationop->OPR_leq");;
    break;}
case 62:
#line 320 "myyacc.y"
{
		printReduce("relationop->OPR_lss");;
    break;}
case 63:
#line 323 "myyacc.y"
{
		printReduce("relationop->OPR_eql");;
    break;}
case 64:
#line 326 "myyacc.y"
{
		printReduce("relationop->OPR_gtr");;
    break;}
case 65:
#line 329 "myyacc.y"
{
		printReduce("relationop->OPR_geq");;
    break;}
case 66:
#line 332 "myyacc.y"
{
		printReduce("relationop->OPR_neq");;
    break;}
case 67:
#line 339 "myyacc.y"
{
		;
    break;}
case 68:
#line 342 "myyacc.y"
{
                ;
    break;}
case 69:
#line 345 "myyacc.y"
{
		printReduce("whilesen->SYM_while condition SYM_do sentence");;
    break;}
case 70:
#line 352 "myyacc.y"
{
		printReduce("callsen->SYM_call SYM_ident ");;
    break;}
case 71:
#line 359 "myyacc.y"
{
		;
    break;}
case 72:
#line 362 "myyacc.y"
{
		printReduce("readsen->SYM_read BDY_lparen identlist BDY_rparen ");;
    break;}
case 73:
#line 369 "myyacc.y"
{
		printReduce("identlist->SYM_ident");;
    break;}
case 74:
#line 372 "myyacc.y"
{
		printReduce("identlist->identlist BDY_comma SYM_ident");;
    break;}
case 75:
#line 379 "myyacc.y"
{printReduce("expressionlist->expression");;
    break;}
case 76:
#line 381 "myyacc.y"
{printReduce("expressionlist->expression BDY_comma expression");;
    break;}
case 77:
#line 387 "myyacc.y"
{
		printReduce("writesen->SYM_write BDY_lparen expressionlist BDY_rparen ");;
    break;}
case 78:
#line 394 "myyacc.y"
{
		;
    break;}
case 79:
#line 397 "myyacc.y"
{
		
		
		printReduce("complexsen->SYM_begin sentencelist SYM_end");;
    break;}
case 80:
#line 406 "myyacc.y"
{printReduce("sentencelist->sentence BDY_semicolon");;
    break;}
case 81:
#line 408 "myyacc.y"
{printReduce("sentencelist->sentencelist sentence BDY_semicolon");;
    break;}
case 82:
#line 410 "myyacc.y"
{printReduce("sentencelist->sentencelist BDY_semicolon");;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 413 "myyacc.y"


void printReduce(char *s)
{
	printf("[%2d] %s\n",reducecount++,s);
	fprintf(fguiyue,"[%2d] %s\n",reducecount-1,s);
}
yyerror(char *s)
{
        err++;
	printf("%s\n",s);
}
void fileopen()
{
	printf("系统初始化....\n");
	if((fword=fopen("fword.txt","w"))==NULL){
		printf("fword.txt无法打开！\n");
		exit(0);
		}
	if((fguiyue=fopen("fguiyue.txt","w"))==NULL){
		printf("fguiyue.txt无法打开！\n");
		exit(0);
		}
	printf("系统初始化成功！\n");
	printf("请输入要测试的文件（形如：1.txt）：\n");
	scanf("%s",fname);
	fin=fopen(fname,"r");
	while(fin==NULL){
		printf("输入错误，请重新输入：\n");
		scanf("%s",fname);
		fin=fopen(fname,"r");
	}
	
	printf("\n文件读取成功！\n");
	printf("文件内容如下:\n");
	fzy = fin;
	while(fscanf(fzy,"%c",&c)!=EOF)
	{
		printf("%c",c);
	}
	printf("\n");
	fzy = NULL;
	fclose(fin);
	
	fin=fopen(fname,"r");
	setInputDirect(fin); /*设置输入用例*/
	
	getch();
}
void fileclose()
{
	fprintf(fword,"单词数：%d\t行数：%d\t字符数：%d\n",nword,line,nchar);
	fclose(fword);
	fclose(fguiyue);
	fclose(fin);
    getch();
	exit(0);
}
void main(void)
{

	
	printf("-------------------------------------------------------\n");
	printf("|       PL/0编译程序的词法分析及语法分析              |\n");
	printf("|                                                     |\n");
	printf("|                      计科141 周田田  计科142 张颖   |\n");
	printf("-------------------------------------------------------\n");
	err=0;    
	fileopen();
	
	printf("\n规约过程:\n");
	yyparse();
	listWordtable();
	if(err==0)
	{
		printf("\n单词数：%d\t行数：%d\t字符数：%d\n",nword,line,nchar);
		
		printf("\n\n符合PL0语法规则！\n\n");
	}
	else
	{
		printf("\n\n该程序存在错误，不符合PL0的语法规则\n\n",err);
	}
	fileclose();
}