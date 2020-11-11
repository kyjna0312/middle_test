GCC = cc
LEX = lex
YACC = yacc

all: test

run:
	-./test

test: y.tab.c lex.yy.c
	$(GCC) -o test y.tab.c lex.yy.c support_func.c print.c main.c

lex.yy.c: 
	$(LEX) lex.l

y.tab.c: 
	$(YACC) -d kim.y

clean:
	rm *.o test lex.yy.c y.tab.h y.tab.c test.txt
