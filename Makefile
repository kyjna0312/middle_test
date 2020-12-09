GCC = gcc
LEX = flex
YACC = yacc

all: sem_anyalize

run:
	./sem_anyalize

sem_anyalize: y.tab.c lex.yy.c
	$(GCC) -g -w -o  sem_anyalize y.tab.c lex.yy.c  print_sem.c semantic.c support_func.c print.c main.c

lex.yy.c: 
	$(LEX) lex.l

y.tab.c: 
	$(YACC) -d kim.y

clean:
	rm lex.yy.c y.tab.h y.tab.c
