typedef union{/*ÁªºÏÌå*/
char *ident;
int number;
} YYSTYPE;
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


extern YYSTYPE yylval;
