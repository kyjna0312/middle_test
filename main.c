#include <stdio.h>
/* 추가한 부분 시작 */
#include "type.h"
extern int syntax_err;
extern A_NODE *root;
/* 추가한 부분 끝 */

void main(int argc, char *argv[])
{ //적당히 고쳐서 사용하세요
    FILE *yyin;
    if ((yyin = fopen(argv[argc - 1], "r")) == NULL)
    {
        printf("can not open input file: %s\n", argv[argc - 1]);
        exit(1);
    }
    initialize();
    yyparse();
    if (!syntax_err)
        print_source(root);
}