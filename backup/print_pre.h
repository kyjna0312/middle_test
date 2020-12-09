#include "type.h"

extern A_TYPE *int_type;
extern A_TYPE *float_type;
extern A_TYPE *char_type;
extern A_TYPE *void_type;
extern A_TYPE *string_type;

void print_source(A_NODE *);
void prt_program(A_NODE *);
void prt_initializer(A_NODE *);
void prt_expression(A_NODE *);
void prt_arg_expr_list(A_NODE *);
void prt_statement(A_NODE *);
void prt_statement_list(A_NODE *);
void prt_for_expression(A_NODE *);
void prt_A_TYPE(A_TYPE *, int);
void prt_A_ID_LIST(A_ID *);
void prt_A_ID(A_ID *);
void print_space(int);
void print_A_TYPE(A_TYPE *);