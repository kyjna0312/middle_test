#include <stdio.h>
#include <string.h>
#include "type.h"

typedef enum
{
    SW_VALUE,
    SW_DEFAULT
} SW_KIND;

typedef struct sw
{
    SW_KIND kind;
    int val;
    int label;
} A_SWITCH;

void code_generation(A_NODE *);
void gen_literal_table();
void gen_program(A_NODE *);
void gen_expression(A_NODE *);
void gen_expression_left(A_NODE *);
void gen_arg_expression(A_NODE *);
void gen_statement(A_NODE *, int, int, A_SWITCH[], int *);
void gen_statement_list(A_NODE *, int, int, A_SWITCH[], int *);
void gen_initializer_global(A_NODE *, A_TYPE *, int);
void gen_initializer_local(A_NODE *, A_TYPE *, int);
void gen_declaration_list(A_ID *);
void gen_declaration(A_ID *);
void gen_code_i(OPCODE, int, int);
void gen_code_f(OPCODE, int, float);
void gen_code_s(OPCODE, int, char *);
void gen_code_l(OPCODE, int, int);
void gen_label_number(int);
void gen_label_name(char *);
void gen_error();
int get_label();
