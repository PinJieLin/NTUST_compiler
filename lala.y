%{
#include "lex.yy.c"
#include "hw2.h"
#include "type_check.cpp"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
FILE *jasm;
vector<string> funlptmp;
type_check tc = type_check();

#define Trace(t)        printf(t)

int label=0;
string optmp;
void yyerror(char *msg);
int deterglobal=-1;
int jvm_index = 0;
int local_index = 0;
%}


%union 
{
    struct
    {
        std::string* StringType;
        int value;
        char* type;
        std::string* strcon;
    }Token;
}

%type<Token> type
%type<Token> sp
%type<Token> value
%type<Token> element
%type<Token> fun_in
%type<Token> pro_in
%type<Token> expression

/* tokens */
%token<Token> BOOL BREAK CASE CONST CONTINUE DEFAULT ELSE FALSE SWITCH FOR FUNC GO IF TRUE IMPORT INT NIL PRINT PRINTLN REAL RETURN STRING STRUCT TYPE VAR VOID WHILE READ

%token<Token> STRING_CON REAL_CON BOOL_CON INT_CON 

%token<Token> ID
//      ( )   [   ]   {  }      ;      :     ,
%token LP RP LSB RSB LB RB SEMICOLON COLON COMMA
//       +   -   *   /   ^     %     <    <=    >    >= == !=  &   |  !   =  += -= *= /=
%token PLUS SUB MUL DIV EXP REMAIN LESS LESSE MORE MOREE E NE AND OR NOT ASS PE SE ME DE
//優先度
%left OR 
%left AND
%left NOT
%left LESS LESSE E MOREE MORE NE 
%left PLUS SUB
%left MUL DIV
%left EXP
//正負號
%nonassoc MINUS
%nonassoc POS


%%
program:     declarations function|function;


declarations: declar|declar declarations;


declar: constant|array|variable;


function:   func
            |function func;
 
end:    RB
        {
            // fprintf(jasm, "}\n");
            del();
            // tc.printlocal();
            tc.deletlocal();
            local_index=0;
        };
/*
method public static int add(int, int)
  max_stack 15
  max_locals 15
  {
*/
func:   FUNC type ID
            {   
                if(lookup($3.StringType->c_str())==true){
                    return 1;
                }
                else{
                    insert($3.StringType->c_str());
                }
                if(strcmp($3.StringType->c_str(), "main") == 0)
                    fprintf(jasm, "method public static void main(java.lang.String[]");
                else
                    fprintf(jasm, "method public static %s %s(", $2.type,$3.StringType);
            } LP
            {
                create();
            } formal_argument
            {

            } RP
            {
                for(int i = 0;i < funlptmp.size();i++)
                {
                    fprintf(jasm, ", %s", funlptmp[i].c_str());
                }
                fprintf(jasm, ")\n");
                fprintf(jasm, "max_stack 15\n");
                fprintf(jasm, "max_locals 15\n");
                fprintf(jasm, "{\n");
                tc.add($3.StringType->c_str(), $2.type, funlptmp.size());
                funlptmp.clear();
            } compound
            {   
                if(strcmp($3.StringType->c_str(), "main") == 0)
                    fprintf(jasm, "return\n");
                fprintf(jasm, "}\n");

            };


type:   INT{$$.type=strdup("int");}|VOID{$$.type=strdup("void");}|BOOL{$$.type=strdup("bool");}|STRING{$$.type=strdup("string");}|REAL{$$.type=strdup("real");};

formal_argument: ID type
                {
                    if(lookup($1.StringType->c_str())==true)
                        return 1;
                    else
                        insert($1.StringType->c_str());
                    funlptmp.push_back($2.type);
                    if(getIndex()==0)
                        tc.add($1.StringType->c_str(), $2.type, jvm_index++);
                    else
                        tc.addlocal($1.StringType->c_str(), $2.type, local_index++);
                }
                | formal_argument COMMA ID type
                {
                    if(lookup($3.StringType->c_str())==true)
                        return 1;
                    else
                        insert($3.StringType->c_str());
                    funlptmp.push_back($4.type);
                    if(getIndex()==0)
                        tc.add($3.StringType->c_str(), $4.type, jvm_index++);
                    else
                        tc.addlocal($3.StringType->c_str(), $4.type, local_index++);
                }|;


constant:   CONST ID ASS value
            {
                if(lookup($2.StringType->c_str())==true)
                    return 1;
                else
                    insert($2.StringType->c_str());
                if(getIndex()==0)
                    tc.add($2.StringType->c_str(), "int", jvm_index++);
                else
                    tc.addlocal($2.StringType->c_str(), "int", local_index++);
            };


value:  STRING_CON{$$.strcon=$1.strcon;$$.type="string";}|TRUE{$$.value=1;}|FALSE{$$.value=0;}|INT_CON{$$.value=$1.value;$$.type="int";};


variable: VAR ID type ASS value
        {

            if(lookup($2.StringType->c_str())==true)
                return 1;
            else
                insert($2.StringType->c_str());
            fprintf(jasm, "field static int %s = %d\n",$2.StringType->c_str(),$5.value );
            if(getIndex()==0)
                tc.add($2.StringType->c_str(), $3.type, jvm_index++);
            else
                tc.addlocal($2.StringType->c_str(), $3.type, local_index++);
        }
        |VAR ID type
        {

            if(lookup($2.StringType->c_str())==true)
                return 1;
            else
                insert($2.StringType->c_str());
            fprintf(jasm, "field static int %s\n",$2.StringType->c_str());
            if(getIndex()==0)
                tc.add($2.StringType->c_str(), $3.type, jvm_index++);
            else
                tc.addlocal($2.StringType->c_str(), $3.type, local_index++);

        };


array: VAR ID LSB value RSB type
        {
            if(lookup($2.StringType->c_str())==true)
                return 1;
            else
                insert($2.StringType->c_str());
        };

//putstatic int example.c
statement:  ID ASS expression
            {
                if(alllookup($1.StringType->c_str())==false)
                    return 1;
        
                if(tc.find_local_index($1.StringType->c_str())==-1)
                {
                    if(tc.find_global_index($1.StringType->c_str())==-1)
                        return 1;
                    else
                        fprintf(jasm, "putstatic int example.%s\n", $1.StringType->c_str());
                }
            else
                fprintf(jasm, "istore %d\n", tc.find_local_index($1.StringType->c_str()));
            }
            |ID LSB INT_CON RSB ASS expression
            {
                if(alllookup($1.StringType->c_str())==false)
                    return 1;
            }
            |PRINT
            {
                fprintf(jasm, "getstatic java.io.PrintStream java.lang.System.out\n" );
            } expression
            {
                fprintf(jasm, "invokevirtual void java.io.PrintStream.print(" );
                fprintf(jasm, "%s)\n" , $3.type);
            }
            |PRINTLN
            {
                fprintf(jasm, "getstatic java.io.PrintStream java.lang.System.out\n" );
            } expression
            {
                fprintf(jasm, "ldc %s\n" , $3.strcon->c_str());
                fprintf(jasm, "invokevirtual void java.io.PrintStream.println(java.lang.String)\n" );
            }
            |READ ID
            {
                if(alllookup($2.StringType->c_str())==false)
                    return 1;
            }
            |RETURN
            |RETURN expression
            {
                fprintf(jasm, "ireturn\n" );
            }
            |condition
            |loop
            |fun_in
            |pro_in;

/*
    iload 0
    iload 1
    iadd
    ireturn
    getstatic int example.a
    sipush 10
    invokestatic int example.add(int, int)
    putstatic int example.c
*/
expression:expression PLUS expression
    {
        // tc.printlocal();
        fprintf(jasm, "iadd\n" );
        $$.type = $1.type;
    }
    |expression SUB expression
    {
        fprintf(jasm, "isub\n" );
        $$.type = $1.type;
    }
    |expression MUL expression
    {
        fprintf(jasm, "imul\n" );
        $$.type = $1.type;
    }
    |expression DIV expression
    {
        fprintf(jasm, "idiv\n" );
        $$.type = $1.type;
    }
    |expression E expression
    {
        fprintf(jasm, "ifeq\n" );
        $$.type = "boolean";
    }
    |expression MOREE expression
    {
        fprintf(jasm, "ifge\n" );
        $$.type = "boolean";
    }
    |expression LESSE expression
    {
        fprintf(jasm, "ifle\n" );
        $$.type = "boolean";
    }
    |expression LESS expression
    {
        fprintf(jasm, "iflt\n" );
        $$.type = "boolean";
    }
    |expression MORE expression
    {
        fprintf(jasm, "ifgt\n" );
        $$.type = "boolean";
    }
    |NOT expression
    {
        fprintf(jasm, "ixor\n" );
        $$.type = "boolean";

    }
    |expression NE expression
    {
        fprintf(jasm, "ifne\n" );
        $$.type = "boolean";

    }
    |expression OR expression
    {
        fprintf(jasm, "ior\n");
        $$.type = "boolean";

    }
    |expression AND expression
    {
        fprintf(jasm, "iand\n" );
        $$.type = "boolean";

    }
    |SUB expression %prec MINUS
    {
        fprintf(jasm, "ineg\n" ); 
        $$.type = "int";
 
    }
    |element{
        $$ = $1;
    }
    |value
    {
        cout<<$1.type<<endl;
        if($1.type=="int")
            fprintf(jasm, "sipush %d\n", $1.value);
        cout<<"!!!!!!!!!"<<endl;
        $$ = $1;
    }
    |pro_in
    |fun_in
    ;


op: MINUS|EXP|MUL|DIV|REMAIN|PLUS|SUB|MORE|MOREE|E|LESSE|LESSE|NE|NOT|AND|OR;

element: value{
            cout<<$1.type<<endl;
            if($1.type=="int")
            fprintf(jasm, "sipush %d\n", $1.value);
            cout<<"!!!!!!!!!"<<endl;
            $$ = $1;
        }
        |ID
        {
            $$ = $1;
            $$.type = "int";
            if(tc.find_local_index($1.StringType->c_str())==-1)
            {
                if(tc.find_global_index($1.StringType->c_str())==-1)
                    return 1;
                else
                    fprintf(jasm, "getstatic int proj3.%s\n", $1.StringType->c_str());
            }
            else
                fprintf(jasm, "iload %d\n", tc.find_local_index($1.StringType->c_str()));   
            $$.StringType=$1.StringType;
        }
        |ID LSB INT_CON RSB
        {
            if(alllookup($1.StringType->c_str())==false)
                return 1;
            $$.StringType=$1.StringType;
            $$ = $1;
        }
        |fun_in;

fun_in: ID LP sp RP
        {
            if(alllookup($1.StringType->c_str())==false)
                return 1;
            if(lookup($3.StringType->c_str())==true){
                return 1;
            }
            if(tc.find_global_index($1.StringType->c_str()) > 0)
            {
                fprintf(jasm, "invokestatic int proj3.%s(int", $1.StringType->c_str());
                // cout<<$1.StringType->c_str() << $1.value-1<<endl;
                for(int i = 0; i < tc.find_global_index($1.StringType->c_str()) - 1; i++)
                {
                    fprintf(jasm, ", int");
                }
                fprintf(jasm,")\n");
            }
            else
                fprintf(jasm, "invokestatic int proj3.%s()\n", $1.StringType->c_str());
            $$.StringType=$1.StringType;
            $$ = $1;
        }
        |ID LP RP
        {
            if(alllookup($1.StringType->c_str())==false)
                return 1;
            $$.StringType=$1.StringType;
            $$ = $1;
        };

sp:  expression
    {
        $$.StringType=$1.StringType;
    }
    |sp COMMA expression
    {
        $$.StringType=$3.StringType;
    };


compound:   LB declarations end
            |LB statement end
            |LB declarations morestatement end
            |LB morestatement end;
            |LB end;

morestatement:  statement
                |statement morestatement;
/*
    getstatic int example.c
    sipush 10
    isub
    ifgt L0
    iconst_0
    goto L1
    L0:
    iconst_1
    L1:
    ifeq L2
*/
condition:  IF LP bool_expr RP{
                create();
                
            } soc
            {
                label++;
                fprintf(jasm, "goto L%d\n", label);
            } else_con
            {
                fprintf(jasm, "L%d:\n", label);
                label=0;
            }; 
            
            
            
            

else_con:   ELSE
            {
                fprintf(jasm, "L%d:\n", label-1);
            } soc
            { 
                create();
            }|;

soc:    statement
        |compound;

bool_expr:  bool_type AND bool_type
            |bool_type OR bool_type
            |bool_type;
/*
ifle Ltrue
  iconst_0
  goto Lfalse
*/
bool_type:   TRUE|FALSE|element
            |element bool_op element
            {
                fprintf(jasm, "isub\n" );
                fprintf(jasm, "%s L%d\n",optmp.c_str(),label);
                fprintf(jasm, "iconst_0\n" );
                fprintf(jasm, "goto L%d\n", label+1);
                //Ltrue
                fprintf(jasm, "L%d:\n",label);
                fprintf(jasm, "iconst_1\n");
                //Lfalse
                fprintf(jasm, "L%d:\n",label+1);
                //exit
                fprintf(jasm, "ifeq L%d\n",label+2);
                label+=2;
            }
            |NOT element;

bool_op:    MORE{
                optmp="ifgt";
            }
            |MOREE{
                optmp="ifge";
            }
            |E{
                optmp="ifeq";
            }
            |LESS{
                optmp="iflt";
            }
            |LESSE{
                optmp="ifle";
            }
            |NE{
                optmp="ifne";
            };

for_start: FOR LP
            {
            };
/*
iload 1
sipush 10
isub
ifle Ltrue
iconst_0
goto Lfalse
*/
looptemp:    statement SEMICOLON bool_expr
            {
                //body
                fprintf(jasm, "goto L%d\n",label+1);
            } SEMICOLON statement
            {
                fprintf(jasm, "L%d:\n",label+2);
            } RP
            {
                create(); 
            }
            | bool_expr
            {
                fprintf(jasm, "goto L%d\n",label+1);
            } SEMICOLON statement
            {
                fprintf(jasm, "L%d:\n",label+2);
            } RP 
            {
                create();
            }
            | statement SEMICOLON bool_expr
            {
                fprintf(jasm, "goto L%d\n",label+1);
            } RP
            {
                create();
            }
            | RP bool_expr
            {
                fprintf(jasm, "goto L%d\n",label+1);
            }
            {
                create();
            };

loop:  for_start
            {
                fprintf(jasm, "L%d:\n",label);
                label++;
            } looptemp soc
            {
                fprintf(jasm, "L%d:\n",label);
            };

pro_in: GO ID LP sp RP
        {
            $$.StringType=$2.StringType;
        };

semi:           SEMICOLON
                {
                    Trace("Reducing to semi\n");
                };
%%

void yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

int main(int argc, char *argv[])
{
    create(); 

    jasm = fopen("B10315028.jasm","w");
    fprintf(jasm,"class proj3\n");
    fprintf(jasm,"{\n");

    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */


    dump();
    tc.printTc();
    fprintf(jasm, "}\n");

    return 0;
}