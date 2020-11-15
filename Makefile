GCC = gcc
LEX = lex
YACC = yacc

all: test

run:
	-./test

test: y.tab.c lex.yy.c
	$(GCC) -g -w y.tab.c lex.yy.c support_func.c print.c main.c

lex.yy.c: 
	$(LEX) lex.l

y.tab.c: 
	$(YACC) -d kim.y

clean:
	rm lex.yy.c y.tab.h y.tab.c
