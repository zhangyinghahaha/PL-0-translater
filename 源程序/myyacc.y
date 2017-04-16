/*语法分析器
/*说明部分*/
%{
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
%}

%union{/*联合体*/
char *ident;
int number;
}                      
%start program

/*终结符*/
%token SYM_program
%token SYM_const
%token SYM_procedure
%token SYM_begin
%token SYM_end
%token SYM_write
%token SYM_read
%token SYM_do
%token SYM_call
%token <attr_while> SYM_while
%token SYM_if
%token SYM_else
%token SYM_then
%token SYM_repeat
%token SYM_until
%token SYM_ident
%token SYM_number
%token SYM_var
%token SYM_odd

%token OPR_constinit
%token OPR_become
%token OPR_plus
%token OPR_minus
%token OPR_times
%token OPR_slash
%token OPR_lss
%token OPR_leq
%token OPR_gtr
%token OPR_geq
%token OPR_neq
%token OPR_eql

%token BDY_lparen
%token BDY_rparen
%token BDY_comma
%token BDY_period
%token BDY_semicolon

/*非终结符*/
%type <number> whilesen
%type <number> ifsen
%type <number> relationop
%type <number> sonprogram

%left OPR_plus
%left OPR_minus
%left OPR_times
%left OPR_slash


/*规则部分*/

%%


/*<程序>::=<分程序> .*/
program:
	sonprogram BDY_period
		{
		printReduce("program->sonprogram BDY_period");}
	;

/*<分程序>::=[<常量说明部分>][<变量说明部分>][<过程说明部分>]<语句>*/	
sonprogram:
	sentence	
		{printReduce("sonprogram->sentence");}
	|constexplain
		{
                }
	sentence	
		{printReduce("sonprogram->constexplain sentence");}
	|varexplain
		{
                }
	sentence	
		{printReduce("sonprogram->varexplain sentence");}
	|proexplain 
		{
        }
	sentence	
		{printReduce("sonprogram->proexplain sentence");}
	|constexplain varexplain 
		{
                }
	sentence	
		{printReduce("sonprogram->constexplain varexplain sentence");}
	|varexplain proexplain 
		{
                }
	sentence		
		{printReduce("sonprogram->varexplain proexplain sentence");}
	|constexplain proexplain 
		{
                }
	sentence	
		{printReduce("sonprogram->constexplain proexplain sentence");}
	|constexplain varexplain proexplain 
		{
                }
	sentence	
		{printReduce("sonprogram->constexplain varexplain proexplain sentence");}
	;
	
/*<常量说明部分>::=<无分号常量说明部分>;*/
constexplain:
	noconstexplain	BDY_semicolon
		{printReduce("constexplain->noconstexplain BDY_semicolon");}
	;
	
/*<无分号常量说明部分>::=const<常量定义>{,<常量定义>}*/
noconstexplain:
	SYM_const constdefine	
		{
		printReduce("noconstexplain->SYM_const constdefine");}
	|noconstexplain BDY_comma constdefine
		{printReduce("noconstexplain->noconstexplain BDY_comma constdefine");}
	;
	
/*<常量定义>::=<标识符>=<无符号整数>;*/
constdefine:
	SYM_ident OPR_constinit SYM_number
		{
		printReduce("constdefine->SYM_ident OPR_constinit SYM_number");}
	;
	
/*<变量说明部分>::=<无分号变量说明部分>*/
varexplain:
	novarexplain BDY_semicolon
		{printReduce("varexplain->novarexplain BDY_semicolon");}
	;
	
/*<无分号变量说明部分>::=var<标识符>{<,标识符>}*/
novarexplain:
	SYM_var SYM_ident	
		{
		printReduce("varexplain->SYM_var SYM_ident");}
	|novarexplain BDY_comma SYM_ident	
		{
		printReduce("novarexplain->novarexplain BDY_comma SYM_ident");}
	;
	
/*<过程说明部分>::=<过程首部><分程序>{;过程说明部分}*/
proexplain:
	prohead sonprogram	
		{
		}
	BDY_semicolon
	{
		printReduce("proexplain->prohead sonprogram BDY_semicolon");}
	|proexplain  	
		{
		}
	prohead sonprogram BDY_semicolon 
		{
		printReduce("proexplain->proexplain prohead sonprogram BDY_semicolon ");}
	;
	
/*<过程首部>::=procedure<标识符>;*/
prohead:
	SYM_procedure SYM_ident BDY_semicolon
		{
		printReduce("prohead->SYM_procedure SYM_ident BDY_semicolon");}
	;
	
/*<语句>::=<赋值语句>|<条件语句>|<while语句>|<过程调用语句>|<读语句>|<写语句>|<复合语句>|<空>*/
sentence:
	assignsen
		{printReduce("sentence->assignsen ");}
	|ifsen
		{printReduce("sentence->ifsen ");}
	|whilesen
		{printReduce("sentence->whilesen ");}
	|callsen 
		{printReduce("sentence->callsen ");}
	|readsen 
		{printReduce("sentence->readsen ");}
	|writesen 
		{printReduce("sentence->writesen ");}
	|complexsen 
		{printReduce("sentence->complexsen ");}
	|BDY_semicolon 
		{printReduce("sentence->BDY_semicolon");}
	;
	
		
/*<赋值语句>::=<标识符>:=<表达式>;*/
assignsen:
	SYM_ident OPR_become expression 
		{
		printReduce("assignsen->SYM_ident OPR_become expression ");}
	;
	
/* <中间项>::={<+|-><项>}+ */
midxiang:
	OPR_plus term
	{
	printReduce("midxiang->OPR_plus term ");}
	|OPR_minus term
	{
	printReduce("midxiang->OPR_minus term ");}
	|OPR_minus term midxiang
	{
	printReduce("midxiang->OPR_minus term midxiang");}
	|OPR_plus term midxiang
	{
	printReduce("midxiang->OPR_plus term midxiang");}
	;
/*<表达式>::=[+|-]<项><中间项>*/
expression:
	term
		{
		printReduce("expression->term");}
	|OPR_plus term
		{
		printReduce("expression->OPR_plus term");}
	|OPR_minus term
		{
		printReduce("expression->OPR_minus term");}
	|term midxiang
		{
		printReduce("expression->term midxiang");}
	|OPR_plus term midxiang
		{
		printReduce("expression->OPR_plus term midxiang");}
	|OPR_minus term midxiang
		{
		printReduce("expression->OPR_minus term midxiang");}
	;
/* <中间因子>::={<*|/><因子>}+*/
midfactor:
	OPR_times factor
		{
		printReduce("midfactor->OPR_times factor");}
	|OPR_slash factor
		{
		printReduce("midfactor->OPR_slash factor");}
	|OPR_times factor midfactor
		{
		printReduce("midfactor->OPR_times factor midfactor");}
	|OPR_slash factor midfactor
		{
		printReduce("midfactor->OPR_slash factor midfactor");}
/*<项>::=<因子>{[*|/]<因子>}*/
term:
	factor
		{printReduce("term->factor");}
	|factor midfactor
		{
		printReduce("term->factor midfactor");}
	;
	
/*<因子>::=<标识符>|<无符号整数>|‘（’<表达式>‘)’*/
factor:
        SYM_ident
		{
		printReduce("factor->SYM_ident");}
	|SYM_number
		{
		printReduce("factor->SYM_number");}
	|BDY_lparen expression BDY_rparen
		{printReduce("factor->BDY_lparen expression BDY_rparen");}
	;
	
/*<条件语句>::=if<条件>then<语句>*/
ifsen:
	SYM_if condition 
		{
                }
	SYM_then sentence
		{
		printReduce("ifsen->SYM_if condition SYM_then sentence");}
	;
	
/*<条件>::=<表达式><关系运算符><表达式>*/
condition:
	expression relationop expression
		{printReduce("condition->expression relationop expression");}
	|SYM_odd expression
		{
		printReduce("condition->SYM_odd expression");}
	;
	
/*<关系运算符>::===|#|<|<=|>|>=*/
relationop:
         OPR_leq
		{
		printReduce("relationop->OPR_leq");}
	|OPR_lss
		{
		printReduce("relationop->OPR_lss");}
	|OPR_eql
		{
		printReduce("relationop->OPR_eql");}
	|OPR_gtr
		{
		printReduce("relationop->OPR_gtr");}
	|OPR_geq
		{
		printReduce("relationop->OPR_geq");}
	|OPR_neq
		{
		printReduce("relationop->OPR_neq");}
	;
	
/*<while语句>::=while<条件>do<语句>*/
whilesen:
	SYM_while
		{
		}
	condition SYM_do 
		{
                }
	sentence
		{
		printReduce("whilesen->SYM_while condition SYM_do sentence");}
	;
	
/*<call语句>::=call<标识符>*/
callsen:
	SYM_call SYM_ident 
		{
		printReduce("callsen->SYM_call SYM_ident ");}
	;
	
/*<读语句>::=read‘（’<标识符列表>‘)’;*/
readsen:
	SYM_read 
		{
		}
	BDY_lparen identlist BDY_rparen
	{
		printReduce("readsen->SYM_read BDY_lparen identlist BDY_rparen ");}
	;

/*<标识符列表>::=<标识符>{,<标识符>}*/
identlist:
	SYM_ident	
		{
		printReduce("identlist->SYM_ident");}
	|identlist BDY_comma SYM_ident
		{
		printReduce("identlist->identlist BDY_comma SYM_ident");}
	;

/*<表达式列表>::=<表达式>{,<表达式>}*/
expressionlist:
	expression
		{printReduce("expressionlist->expression");}
	|expression BDY_comma expression
		{printReduce("expressionlist->expression BDY_comma expression");}
	;
	
/*<写语句>::=write‘（’<表达式列表>‘)’;*/
writesen:
	SYM_write BDY_lparen expressionlist BDY_rparen 
		{
		printReduce("writesen->SYM_write BDY_lparen expressionlist BDY_rparen ");}
	;
	
/*<复合语句>::=begin<语句序列>end*/
complexsen:
	SYM_begin
		{
		}
	sentencelist SYM_end 
		{
		
		
		printReduce("complexsen->SYM_begin sentencelist SYM_end");}
	;
	
/*<语句序列>::=<语句>;{<语句>;}*/
sentencelist:
	sentence BDY_semicolon
		{printReduce("sentencelist->sentence BDY_semicolon");}
	|sentencelist sentence BDY_semicolon
		{printReduce("sentencelist->sentencelist sentence BDY_semicolon");}
	|sentencelist BDY_semicolon
		{printReduce("sentencelist->sentencelist BDY_semicolon");}
	;
	
%%

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