GCC = gcc
LEX = flex
YACC = yacc

all: ssuCompiler

run:
	./ssuCompiler

ssuCompiler: y.tab.c lex.yy.c
	$(GCC) -g -w -o  ssuCompiler y.tab.c lex.yy.c print_sem.c semantic.c support_func.c print.c code_generator.c main.c

lex.yy.c: 
	$(LEX) lex.l
y.tab.c: 
	$(YACC) -d kim.y

clean:
	rm lex.yy.c y.tab.h y.tab.c
