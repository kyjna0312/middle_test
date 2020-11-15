#include <stdio.h>
#include "print.h"
extern int syntax_err;
extern A_NODE *root;
extern FILE *yyin;

void main(int argc, char *argv[])
{
    // argv[1] = "test.c";
    printf("%s\n", argv[1]);
    if ((yyin = fopen(argv[1], "r")) == NULL)
    {
        printf("can not open input file: %s\n", argv[1]);
        exit(1);
    }
    printf("file success\n");
    initialize();
    printf("initialize\n");
    int result = yyparse();
    printf("parse\n");
    if (!syntax_err)
        print_source(root);
}
