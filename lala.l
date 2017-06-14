%{
	#define MAX_LINE_LENG 256
	#define LIST     strcat(buf,yytext)
	#include <string>
	#include <iostream>
	#include <sstream>
	#include "y.tab.h"

	using namespace std;

	bool button = false;
	bool stringflag = false;
	int linenum = 1;
	int stringsize;
	char buf[MAX_LINE_LENG];
	string result="";

	void token(string t) 
	{
		if(button){
			LIST;
		}
		else if(t=="String constant")
		{
			yylval.Token.strcon = new string(yytext);
			
			stringflag = true;
			LIST;
			string temp;
			temp=yytext;
			temp.resize(temp.size()-1);
			result+=temp;
		}
		else
		{
			if(stringflag == true)
			{
				printf("<%s\",String constant>\n",result.c_str());
				result.clear();
				stringflag=false;
			}
			LIST;
			printf("<%s,%s>\n",yytext,t.c_str());

			if(t=="id")
			{
				//給.y值(value)
				yylval.Token.StringType = new string(yytext);
				// cout<<"["<<insert(yytext)<<"] "<<yytext<<endl;

			}
			if(t=="integer constant")
			{
				stringstream ss;

				std::string numberStr = yytext;
				int num;
				ss << numberStr; 
				ss >> num;

				yylval.Token.value = num;
			}
		}
	}

	
%}

boolean_constant true|false



digs [0-9]+
plain_real {digs}"."{digs}
expreal {digs}"."{digs}[Ee][+-]?{digs}
real {plain_real}|{expreal}
id [a-zA-Z][a-zA-Z0-9]*
comment2 "//".*"*/"\n
comment "//".*\n

one "/*".*"*/"\n
startc "/*".*\n
endc "*/"\n
string ["][^\"]*["]

%%
[ \t]*  %{
	LIST;
	if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}
bool {token("keyword");if(button==0) return BOOL;}
break {token("keyword");if(button==0) return BREAK;}
case {token("keyword");if(button==0) return CASE;}
const {token("keyword");if(button==0) return CONST;}
continue {token("keyword");if(button==0) return CONTINUE;}
default {token("keyword");if(button==0) return DEFAULT;}
else {token("keyword");if(button==0) return ELSE;}
false {token("keyword");if(button==0) return FALSE;}
switch {token("keyword");if(button==0) return SWITCH;}
for {token("keyword");if(button==0) return FOR;}
func {token("keyword");if(button==0) return FUNC;}
go {token("keyword");if(button==0) return GO;}
if {token("keyword");if(button==0) return IF;}
true {token("keyword");if(button==0) return TRUE;}
import {token("keyword");if(button==0) return IMPORT;}
int {token("keyword");if(button==0) return INT;}
nil {token("keyword");if(button==0) return NIL;}
print {token("keyword");if(button==0) return PRINT;}
println {token("keyword");if(button==0) return PRINTLN;}
real {token("keyword");if(button==0) return REAL;}
return {token("keyword");if(button==0) return RETURN;}
string {token("keyword");if(button==0) return STRING;}
struct {token("keyword");if(button==0) return STRUCT;}
type {token("keyword");if(button==0) return TYPE;}

var {
	token("keyword");
	
	if(button==0) return VAR;
}

void {token("keyword");if(button==0) return VOID;}
while {token("keyword");if(button==0) return WHILE;}
read {token("read");if(button==0) return READ;}

{string} {token("String constant");if(button==0)  return STRING_CON;}
{real} {token("real constant");if(button==0)  return REAL_CON;}
{boolean_constant} {token("keyword boolean_constant");if(button==0)  return BOOL_CON;}
{digs} {token("integer constant");if(button==0)  return INT_CON;}
{id} {token("id");if(button==0)  return ID;}
"(" {token("parentheses");if(button==0)  return LP;}
")" {token("parentheses");if(button==0)  return RP;}
"[" {token("square brackets");if(button==0)  return LSB;}
"]" {token("square brackets");if(button==0)  return RSB;}
"{" {token("brackets");if(button==0)  return LB;}
"}" {token("brackets");if(button==0)  return RB;}
";" {token("semicolon");if(button==0)  return SEMICOLON;}
":" {token("colon");if(button==0)  return COLON;}
"," {token("comma");if(button==0)  return COMMA;}
"+" {token("arithmetic");if(button==0)  return PLUS;}
"-" {token("arithmetic");if(button==0)  return SUB;}
"*" {token("arithmetic");if(button==0)  return MUL;}
"/" {token("arithmetic");if(button==0)  return DIV;}
"^" {token("exponentiation");if(button==0)  return EXP;}
"%" {token("remainder");if(button==0)  return REMAIN;}
"<" {token("relational");if(button==0)  return LESS;}
"<=" {token("relational");if(button==0)  return LESSE;}
">=" {token("relational");if(button==0)  return MOREE;}
">" {token("relational");if(button==0)  return MORE;}
"==" {token("relational");if(button==0)  return E;}
"!=" {token("relational");if(button==0)  return NE;}
"&" {token("logical");if(button==0)  return AND;}
"|" {token("logical");if(button==0)  return OR;}
"!" {token("logical");if(button==0)  return NOT;}
"=" {token("assignment");if(button==0)  return ASS;}
"+=" {token("compound operators");if(button==0)  return PE;}
"-=" {token("compound operators");if(button==0)  return SE;}
"*=" {token("compound operators");if(button==0)  return ME;}
"/=" {token("compound operators");if(button==0)  return DE;}
{comment2} %{
	LIST;
    printf("%d: %s", linenum, buf);
    linenum++;
    buf[0] = '\0';
    button = false;
    if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}
{comment} %{
	LIST;
    printf("%d: %s", linenum, buf);
    linenum++;
    buf[0] = '\0';
    if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}
{one} %{
	LIST;
    printf("%d: %s", linenum, buf);
    linenum++;
    buf[0] = '\0';
    if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}
{startc} %{
	LIST;
    printf("%d: %s", linenum, buf);
    linenum++;
    buf[0] = '\0';
    button = true;
    if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}

{endc} %{
	if(button==0)
	{
		LIST;
		printf("%d:%s", linenum, buf);
		printf("bad character: '%s'\n",yytext);
		exit(-1);
	}
	else
	{
		LIST;
   		printf("%d: %s", linenum, buf);
    	linenum++;
    	buf[0] = '\0';
		button = false;
	}
	if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
%}

\n %{
	if(stringflag == true)
	{
		printf("<%s\",String constant>\n",result.c_str());
		result.clear();
		stringflag=false;
	}
	LIST;
    printf("%d: %s", linenum, buf);
    linenum++;
    buf[0] = '\0';
%}


. %{
	if(button==true)
	{
		LIST;
	}
	else
	{
		LIST;
		printf("%d:%s\n", linenum, buf);
		printf("bad character: '%s'\n",yytext);
		exit(-1);
	}
%}

%%

// int main()
// {
// 	create();
// 	yylex();
// 	dump();
// 	//lookup("ab");
// }

// int yywrap()
// {
// 	return -1;
// }