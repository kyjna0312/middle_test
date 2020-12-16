GCC = gcc
LEX = flex
YACC = yacc

all: interp

run:
	./interp

interp: y.tab.c lex.yy.c
	$(GCC) -w -o  interp y.tab.c lex.yy.c interp.c lib.c

lex.yy.c: 
	$(LEX) interp.l
y.tab.c: 
	$(YACC) -d interp.y

clean:
	rm lex.yy.c y.tab.h y.tab.c
