#include "print.h"

void print_source(A_NODE *node)
{
    printf("======= source program ==========\n");
    prt_program(node);
}
void prt_program(A_NODE *node)
{
    switch (node->name)
    {
    case N_PROGRAM:
        prt_A_ID_LIST(node->clink);
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_initializer(A_NODE *node)
{
    switch (node->name)
    {
    case N_INIT_LIST:
        prt_initializer(node->llink);
        prt_initializer(node->rlink);
        break;
    case N_INIT_LIST_ONE:
        prt_expression(node->clink);
        break;
    case N_INIT_LIST_NIL:
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_expression(A_NODE *node)
{
    switch (node->name)
    {
    case N_EXP_IDENT:
        break;
    case N_EXP_INT_CONST:
        break;
    case N_EXP_FLOAT_CONST:
        break;
    case N_EXP_CHAR_CONST:
        break;
    case N_EXP_STRING_LITERAL:
        break;
    case N_EXP_ARRAY:
        break;
    case N_EXP_FUNCTION_CALL:
        break;
    case N_EXP_STRUCT:
    case N_EXP_ARROW:
        prt_expression(node->llink);
        break;
    case N_EXP_POST_INC:
    case N_EXP_POST_DEC:
    case N_EXP_PRE_INC:
    case N_EXP_PRE_DEC:
    case N_EXP_AMP:
    case N_EXP_STAR:
    case N_EXP_NOT:
    case N_EXP_PLUS:
    case N_EXP_MINUS:
    case N_EXP_SIZE_EXP:
        prt_expression(node->clink);
        break;
    case N_EXP_SIZE_TYPE:
        break;
    case N_EXP_CAST:
        prt_expression(node->rlink);
        break;
    case N_EXP_MUL:
    case N_EXP_DIV:
    case N_EXP_MOD:
    case N_EXP_ADD:
    case N_EXP_SUB:
    case N_EXP_LSS:
    case N_EXP_GTR:
    case N_EXP_LEQ:
    case N_EXP_GEQ:
    case N_EXP_NEQ:
    case N_EXP_EQL:
    case N_EXP_AND:
    case N_EXP_OR:
    case N_EXP_ASSIGN:
        prt_expression(node->llink);
        prt_expression(node->rlink);
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_arg_expr_list(A_NODE *node)
{
    switch (node->name)
    {
    case N_ARG_LIST:
        prt_expression(node->llink);
        prt_arg_expr_list(node->rlink);
        break;
    case N_ARG_LIST_NIL:
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_statement(A_NODE *node)
{
    switch (node->name)
    {
    case N_STMT_LABEL_CASE:
        prt_expression(node->llink);
        prt_statement(node->rlink);
        break;
    case N_STMT_LABEL_DEFAULT:
        prt_statement(node->clink);
        break;
    case N_STMT_COMPOUND:
        if (node->llink)
            prt_A_ID_LIST(node->llink);
        prt_statement_list(node->rlink);
        break;
    case N_STMT_EMPTY:
        break;
    case N_STMT_EXPRESSION:
        prt_expression(node->clink);
        break;
    case N_STMT_IF_ELSE:
        prt_expression(node->llink);
        prt_statement(node->clink);
        prt_statement(node->rlink);
        break;
    case N_STMT_IF:
    case N_STMT_SWITCH:
        prt_expression(node->llink);
        prt_statement(node->rlink);
        break;
    case N_STMT_WHILE:
        prt_expression(node->llink);
        prt_statement(node->rlink);
        break;
    case N_STMT_DO:
        prt_statement(node->llink);
        prt_expression(node->rlink);
        break;
    case N_STMT_FOR:
        prt_for_expression(node->llink);
        prt_statement(node->rlink);
        break;
    case N_STMT_CONTINUE:
        break;
    case N_STMT_BREAK:
        break;
    case N_STMT_RETURN:
        if (node->clink)
            prt_expression(node->clink);
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_statement_list(A_NODE *node)
{
    switch (node->name)
    {
    case N_STMT_LIST:
        prt_statement(node->llink);
        prt_statement_list(node->rlink);
        break;
    case N_STMT_LIST_NIL:
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_for_expression(A_NODE *node)
{
    switch (node->name)
    {
    case N_FOR_EXP:
        if (node->llink)
            prt_expression(node->llink);
        if (node->clink)
            prt_expression(node->clink);
        if (node->rlink)
            prt_expression(node->rlink);
        break;
    default:
        printf("****syntax tree error******");
    }
}
void prt_A_TYPE(A_TYPE *t, int s)
{
    print_space(s);
    if (t == int_type)
        printf("(int)\n");
    else if (t == float_type)
        printf("(float)\n");
    else if (t == char_type)
        printf("(char %d)\n", t->size);
    else if (t == void_type)
        printf("(void)");
    else if (t->kind == T_NULL)
        printf("(null)");
    else
        switch (t->kind)
        {
        case T_ENUM:
            break;
        case T_POINTER:
            break;
        case T_ARRAY:
            break;
        case T_STRUCT:
            break;
        case T_UNION:
            break;
        case T_FUNC:
            prt_statement(t->expr);
        }
}

void prt_A_ID_LIST(A_ID *id)
{
    while (id)
    {
        prt_A_ID(id);
        id = id->link;
    }
}
/* 수정한 부분 */
// void prt_A_ID(A_ID *id, int s)
void prt_A_ID(A_ID *id)
{
    printf("%s", id->name);
    print_A_TYPE(id->type);
}

void print_space(int s)
{
    int i;
    for(i=1; i<=s; i++) 
        printf("| ");
}

void print_A_TYPE (A_TYPE *t) {
    if (t == int_type)
        printf("(int)\n");
    else if (t == float_type)
        printf("(float)\n");
    else if (t == char_type)
        printf("(char %d)\n", t->size);
    else if (t == void_type)
        printf("(void)");
    else if (t->kind == T_NULL)
        printf("(null)");
    else
        switch (t->kind)
        {
        case T_ENUM:
            break;
        case T_POINTER:
            break;
        case T_ARRAY:
            break;
        case T_STRUCT:
            break;
        case T_UNION:
            break;
        case T_FUNC:
            prt_statement(t->expr);
        }
}
