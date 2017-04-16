/* 词法分析器 */

/* 辅助定义部分 */
/* ---------------------------------------------- */
%{
#include "stdio.h"
#include "string.h"
#include "malloc.h"
#include "myyacc_tab.h" /* 所有单词种别头文件 */

/* 相关结构声明 */
enum identkind{constant,variable,procedure};  /* 标识符类型 */

/* 关键字定义 */
char keyword[13][20]={
	"begin",
	"call",
	"const",
	"do",
	"end",
	"if",
	"odd",
	"procedure",
	"read",
	"then",
	"var",
	"while",
	"write"
	};
	
/* 单词结构（记号） */
typedef struct node{
	char name[20];/* 单词名 */
	char sym[20];/* 单词种别 */
	int id;/* 单词种别ID */
	int num;/* 单词自身的值 */
	}wordType;

/* 相关变量声明 */
extern FILE *fguiyue;       /* 规约过程文件 */
extern FILE *fword; 		/* 单词表文件 */
int line=1;				/* 程序行数 */
int nchar=0;			/* 程序字符个数 */
int nword=0;            /* 程序单词个数 */	
wordType wordTable[300];   /* 单词表 */

/* 用户子程序相关函数声明 */
void putword(char *,int,int);    /* 向单词表中添加单词 */
int yywrap(void);       /* 扫描约束程序 */
void yyerror(char *);   /* 出错处理程序 */
%}

/* 正规表达式宏名字定义 */
/* 数字 */
digit [0-9] 
/* 字母 */
letter [a-zA-Z]
/* 无符号整数 */
num  [1-9]({digit})*|0
/* 标识符 */
ident (_|{letter})(_|{letter}|[0-9])*
/* 非法标识符 */
illegalident {digit}{ident}        

/* 规则部分 */
/* ---------------------------------------------- */
%%
[ \t]		{;}
[\n]	      	{line++; nchar++;}
"const"	      	{nchar+=yyleng;	putword("SYM_const",SYM_const,-1);	return SYM_const;}
"procedure"	{nchar+=yyleng;	putword("SYM_procedure",SYM_procedure,-1);return SYM_procedure;}
"begin"	      	{nchar+=yyleng;	putword("SYM_begin",SYM_begin,-1);	return SYM_begin;}
"end"	      	{nchar+=yyleng;	putword("SYM_end",SYM_end,-1);		return SYM_end;}
"write"      	{nchar+=yyleng;	putword("SYM_write",SYM_write,-1);	return SYM_write;}
"read"	      	{nchar+=yyleng;	putword("SYM_read",SYM_read,-1);		return SYM_read;}
"do"	      	{nchar+=yyleng;	putword("SYM_do",SYM_do,-1);		return SYM_do;}
"call"	      	{nchar+=yyleng;	putword("SYM_call",SYM_call,-1);		return SYM_call;}
"while"	      	{nchar+=yyleng;	putword("SYM_while",SYM_while,-1);	return SYM_while;}
"if"	      	{nchar+=yyleng;	putword("SYM_if",SYM_if,-1);		return SYM_if;}
"then"	      	{nchar+=yyleng;	putword("SYM_then",SYM_then,-1);		return SYM_then;}
"odd"	{nchar+=yyleng;	putword("SYM_program",SYM_odd,-1);	return SYM_odd;}
"var"		{nchar+=yyleng;	putword("SYM_var",SYM_var,-1);		return SYM_var;}


":="		{nchar+=2;	putword("OPR_become",OPR_become,-1);	return OPR_become;}
"="		{nchar++;	putword("OPR_constinit",OPR_constinit,-1);	return OPR_constinit;}
"+"		{nchar++;	putword("OPR_plus",OPR_plus,-1);		return OPR_plus;}
"-"		{nchar++;	putword("OPR_minus",OPR_minus,-1);	return OPR_minus;}
"*"		{nchar++;	putword("OPR_times",OPR_times,-1);	return OPR_times;}
"/"		{nchar++;	putword("OPR_slash",OPR_slash,-1);	return OPR_slash;}

"<"		{nchar++;	putword("OPR_lss",OPR_lss,-1);		return OPR_lss;}
"<="	        {nchar+=2;	putword("OPR_leq",OPR_leq,-1);		return OPR_leq;}
">"		{nchar++;	putword("OPR_gtr",OPR_gtr,-1);		return OPR_gtr;}
">="	        {nchar+=2;	putword("OPR_geq",OPR_geq,-1);		return OPR_geq;}
"!="            {nchar+=2;	putword("OPR_neq",OPR_neq,-1);		return OPR_neq;}
"=="	        {nchar+=2;	putword("OPR_eql",OPR_eql,-1);		return OPR_eql;}
"#"	        {nchar++;	putword("OPR_neq",OPR_neq,-1);		return OPR_neq;}

"("		{nchar++;	putword("BDY_lparen",BDY_lparen,-1);	return BDY_lparen;}
")"		{nchar++;	putword("BDY_rparen",BDY_rparen,-1);	return BDY_rparen;}
","		{nchar++;	putword("BDY_comma",BDY_comma,-1);	return BDY_comma;}
"."		{nchar++;	putword("BDY_period",BDY_period,-1);	return BDY_period;}
";"		{nchar++;	putword("BDY_semicolon",BDY_semicolon,-1);return BDY_semicolon;}


{ident}	{nchar+=yyleng;
		yylval.ident=(char *)malloc(strlen(yytext)+1);
		strcpy(yylval.ident,yytext);
		putword("SYM_ident",SYM_ident,-1);
		return SYM_ident;
		}
{num}	{
		nchar+=yyleng;
		yylval.number=atoi(yytext);
		if(yylval.number>32768)
		{
		return;
        }
		putword("SYM_number",300,yylval.number);
		return SYM_number;
		}
		
{illegalident}	{
		nchar+=yyleng;
		nword++;
		printf("%s is ilegal ident!",yytext);
		}

.	{printf("unknown character");}

%%
/* 向单词表中添加单词 */
void putword(char *sym,int id,int num)
{
	strcpy(wordTable[nword].name,yytext);
	strcpy(wordTable[nword].sym,sym);
	wordTable[nword].id=id;
	wordTable[nword].num=num;
	nword++;
}

/* 输出单词表 */
void listWordtable()
{
	int i;
	printf("\n\n单词表：\n");
	printf("   NAME		   SYM		   ID		NUM\n");
	fprintf(fword,"	SYM	ID	NUM\n");
	for(i=0;i<nword;i++)
	{
		/*输出字符串，左对齐，不足15字符则右补空格，超15字符则按实际长度输出*/
		printf("%-15s%-20s%-20d",wordTable[i].name,wordTable[i].sym,wordTable[i].id);    
		fprintf(fword,"%-15s%-20s%-18d",wordTable[i].name,wordTable[i].sym,wordTable[i].id);
		if(wordTable[i].num!=-1)/*单词表不为空*/
		{
			printf("%d\n",wordTable[i].num);
			fprintf(fword,"	%d\n",wordTable[i].num);
		}
		else
		{
			printf("\n");
			fprintf(fword,"\n");
		}
	}
}

int yywrap(void)
{
	return 1;
}

/*设置LEX输入文件*/
void setInputDirect(FILE *input)
{
	yyin=input;
}
