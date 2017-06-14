a1.out : lala.y lala.l hw2.h
	yacc lala.y -d
	lex lala.l
	g++ y.tab.c -o a1.out -ll -ly