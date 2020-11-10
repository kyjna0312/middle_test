/* 추가한 부분 시작 */
#include <stdio.h>
#include "type.h"
#include "y.tab.h"

extern char *yytext;
extern int line_no, syntax_err;
/* 추가한 부분 끝 */

void initialize()
{
    /* 추가한 부분 시작 */
    A_TYPE* int_type;
    A_TYPE* float_type;
    A_TYPE* char_type;
    A_TYPE* void_type;
    A_TYPE* string_type;
    /* 추가한 부분 끝 */
    
    // primitive data types
    int_type = setTypeAndKindOfDeclarator(
        makeType(T_ENUM), ID_TYPE, makeIdentifier("int"));
    float_type = setTypeAndKindOfDeclarator(
        makeType(T_ENUM), ID_TYPE, makeIdentifier("float"));
    char_type = setTypeAndKindOfDeclarator(
        makeType(T_ENUM), ID_TYPE, makeIdentifier("char"));
    void_type = setTypeAndKindOfDeclarator(
        makeType(T_VOID), ID_TYPE, makeIdentifier("void"));
    string_type = setTypeElementType(makeType(T_POINTER), char_type);
    int_type->size = 4;
    int_type->check = TRUE;
    float_type->size = 4;
    float_type->check = TRUE;
    char_type->size = 1;
    char_type->check = TRUE;
    void_type->size = 0;
    void_type->check = TRUE;
    string_type->size = 4;
    string_type->check = TRUE;
    // printf(char *, ...) library function
    setDeclaratorTypeAndKind(
        makeIdentifier("printf"),
        setTypeField(
            setTypeElementType(makeType(T_FUNC), void_type),
            linkDeclaratorList(
                setDeclaratorTypeAndKind(makeDummyIdentifier(), string_type, ID_PARM),
                setDeclaratorKind(makeDummyIdentifier(), ID_PARM))),
        ID_FUNC);
    // scanf(char *, ...) library function
    setDeclaratorTypeAndKind(
        makeIdentifier("scanf"),
        setTypeField(
            setTypeElementType(makeType(T_FUNC), void_type),
            linkDeclaratorList(
                setDeclaratorTypeAndKind(makeDummyIdentifier(), string_type, ID_PARM),
                setDeclaratorKind(makeDummyIdentifier(), ID_PARM))),
        ID_FUNC);
    // malloc(int) library function
    setDeclaratorTypeAndKind(
        makeIdentifier("malloc"),
        setTypeField(
            setTypeElementType(makeType(T_FUNC), string_type),
            setDeclaratorTypeAndKind(makeDummyIdentifier(), int_type, ID_PARM)),
        ID_FUNC);
}
void syntax_error(int i, char *s)
{
    syntax_err++;
    printf("line %d: syntax error: ", line_no);
    switch (i)
    {
    case 11:
        printf("illegal referencing struct or union identifier %s", s);
        break;
    case 12:
        printf("redeclaration of identifier %s", s);
        break;
    case 13:
        printf("undefined identifier %s", s);
        break;
    case 14:
        printf("illegal type specifier in formal parameter");
        break;
    case 20:
        printf("illegal storage class in type specifiers");
        break;
    case 21:
        printf("illegal function declarator");
        break;
    case 22:
        printf("conflicting parm type in prototype function %s", s);
        break;
    case 23:
        printf("empty parameter name");
        break;
    case 24:
        printf("illegal declaration specifiers");
        break;
    case 25:
        printf("illegal function specifiers");
        break;
    case 26:
        printf("illegal or conflicting return type in function %s", s);
        break;
    case 31:
        printf("undefined type for identifier %s", s);
        break;
    case 32:
        printf("incomplete forward reference for identifier %s", s);
        break;
    default:
        printf("unknown");
        break;
    }
    if (strlen(yytext) == 0)
        printf(" at end\n");
    else
        printf(" near %s\n", yytext);
}
