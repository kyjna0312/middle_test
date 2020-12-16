#include <stdio.h>
#include "print.h"
#include "print_sem.h"
extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;
extern FILE *yyin;

FILE *fout;

void semantic_analysis(A_NODE *);
void print_ast(A_NODE *);
void code_generation();

void main(int argc, char *argv[])
{
    printf("%s\n", argv[1]);
    if ((yyin = fopen(argv[1], "r")) == NULL)
    {
        printf("can not open input file: %s\n", argv[1]);
        exit(1);
    }

    if ((fout = fopen("a.asm", "w")) == NULL)
    {
        printf("can not open output file: a.asm\n");
        exit(1);
    }

    printf("file success\n");
    initialize();
    printf("initialize\n");
    // int result = yyparse();
    yyparse();
    printf("parse\n");

    if (syntax_err)
        return;

    print_ast(root);

    semantic_analysis(root);

    if (semantic_err == 0)
        print_sem_ast(root);

    code_generation(root);
}
