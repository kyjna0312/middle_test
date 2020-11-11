#include "type.h"
/*
char *node_name[] = {
    "N_NULL",
    "N_PROGRAM",
    "N_EXP_IDENT",
    "N_EXP_INT_CONST",
    "N_EXP_FLOAT_CONST",
    "N_EXP_CHAR_CONST",
    "N_EXP_STRING_LITERAL",
    "N_EXP_ARRAY",
    "N_EXP_FUNCTION_CALL",
    "N_EXP_STRUCT",
    "N_EXP_ARROW",
    "N_EXP_POST_INC",
    "N_EXP_POST_DEC",
    "N_EXP_PRE_INC",
    "N_EXP_PRE_DEC",
    "N_EXP_AMP",
    "N_EXP_STAR",
    "N_EXP_NOT",
    "N_EXP_PLUS",
    "N_EXP_MINUS",
    "N_EXP_SIZE_EXP",
    "N_EXP_SIZE_TYPE",
    "N_EXP_CAST",
    "N_EXP_MUL",
    "N_EXP_DIV",
    "N_EXP_MOD",
    "vvN_EXP_ADD",
    "N_EXP_SUB",
    "N_EXP_LSS",
    "N_EXP_GTR",
    "N_EXP_LEQ",
    "N_EXP_GEQ",
    "N_EXP_NEQ",
    "N_EXP_EQL",
    "N_EXP_AND",
    "N_EXP_OR",
    "N_EXP_ASSIGN",
    "N_ARG_LIST",
    "N_ARG_LIST_NIL",
    "N_STMT_LABEL_CASE",
    "N_STMT_LABEL_DEFAULT",
    "N_STMT_COMPOUND",
    "N_STMT_EMPTY",
    "N_STMT_EXPRESSION",
    "N_STMT_IF",
    "N_STMT_IF_ELSE",
    "N_STMT_SWITCH",
    "N_STMT_WHILE",
    "N_STMT_DO",
    "N_STMT_FOR",
    "N_STMT_RETURN",
    "N_STMT_CONTINUE",
    "N_STMT_BREAK",
    "N_FOR_EXP",
    "N_STMT_LIST",
    "N_STMT_LIST_NIL",
    "N_INIT_LIST",
    "N_INIT_LIST_ONE",
    "N_INIT_LIST_NIL"
};
*/
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
void print_A_TYPE (A_TYPE *);
