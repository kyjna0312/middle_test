#include "syntax_analysis.h"

extern char *yytext;
A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;
A_NODE *root;
A_ID *current_id = NIL;
int syntax_err = 0;
int line_no = 1;
int current_level = 0;

A_NODE      *makeNode(NODE_NAME name, A_NODE *llink, A_NODE *clink, A_NODE *rlink) {
    A_NODE *node;
    node = malloc(sizeof(A_NODE));
    node->name = name;
    node->llink = llink;
    node->clink = clink;
    node->rlink = rlink;
    node->type = NIL;
    node->line = line_no;
    node->value = 0;

    return node;
}

A_NODE      *makeNodeList(NODE_NAME n, A_NODE *a, A_NODE *b) {
    A_NODE *m, *k;

    k = a;

    while(k->rlink)
        k = k->rlink;
    
    m = malloc(sizeof(A_NODE));

    m->name = k->name;
    m->llink = NIL;
    m->clink = NIL;
    m->rlink = NIL;
    m->type = NIL;
    m->line = line_no;
    m->value = 0;

    k->name = n;
    k->llink = b;
    k->rlink = m;

    return a;
}

A_ID        *makeIdentifier(char *s) {
    A_ID *id;

    id = malloc(sizeof(A_ID));
    id->name = s;
    id->kind = 0;
    id->specifier = 0;
    id->level = current_level;
    id->address = 0;
    id->init = NIL;
    id->type = NIL;
    id->link = NIL;
    id->line = line_no;
    id->value = 0;
    id->prev = current_id;
    current_id = id;

    return id;
}

A_ID        *makeDummyIdentifier(void) {
    A_ID *id;

    id = malloc(sizeof(A_ID));
    id->name = "";
    id->kind = 0;
    id->specifier = 0;
    id->level = current_level;
    id->address = 0;
    id->init = NIL;
    id->type = NIL;
    id->link = NIL;
    id->line = line_no;
    id->value = 0;
    id->prev = 0;

    return id;
}

A_TYPE      *makeType(T_KIND kind) {
    A_TYPE *type;

    type = malloc(sizeof(A_TYPE));
    type->kind = kind;
    type->size = 0;
    type->local_var_size = 0;
    type->element_type = NIL;
    type->field = NIL;
    type->expr = NIL;
    type->check = FALSE;
    type->prt = FALSE;
    type->line = line_no;

    return type;
}

A_SPECIFIER *makeSpecifier(A_TYPE *type, S_KIND kind) {
    A_SPECIFIER *specifier;

    specifier = malloc(sizeof(A_SPECIFIER));
    specifier->type = type;
    specifier->stor = kind;
    specifier->line = line_no;

    return specifier;
}

A_ID        *searchIdentifier(char *s, A_ID *id) {
    while (id) {
        if(strcmp(id->name, s) == 0)
            break;

        id = id->prev;
    }

    return id;
}

A_ID        *searchIdentifierAtCurrentLevel(char *s, A_ID *id) {
    while (id) {
        if(id->level < current_level)
            return NIL;

        if(strcmp(id->name, s) == 0)
            break;

        id = id->prev;
    }

    return id;
}

A_SPECIFIER *updateSpecifier(A_SPECIFIER *specifier, A_TYPE *type, S_KIND kind) {
    if(type) {
        if (specifier->type) {
            if(specifier->type != type)
                syntax_error(24, "");
        } else 
            specifier->type = type;
    }

    if (kind) {
        if(specifier->stor) {
            if(specifier->stor != kind)
                syntax_error(24, "");
        } else 
            specifier->stor = kind;
    }
    
    return specifier;
}

void        checkForwardReference(void) {
    A_ID *id;
    A_TYPE *type;

    id = current_id;

    while (id) {
        if(id->level < current_level)
            break;
        
        type = id->type;

        if(id->kind == ID_NULL) // function
            syntax_error(31, id->name);
        else if((id->kind == ID_ENUM || id->kind == ID_STRUCT) && type->field == NIL) // enum, struct
            syntax_error(32, id->name);

        id = id->prev;
    }
}

void        setDefalutSpecifier(A_SPECIFIER *specifier) {
    if(specifier->type == NIL)
        specifier->type = int_type;
    
    if(specifier->stor == S_NULL)
        specifier->stor = S_AUTO;
}

A_ID        *linkDeclaratorList(A_ID *id1, A_ID *id2) {
    A_ID *node = id1;

    if(id1 == NIL)
        return id2;

    while(node->link)
        node = node->link;
    
    node->link = id2;

    return id1;
}

A_ID        *getIdentifierDeclared(char *s) {
    A_ID *id;

    id = searchIdentifier(s, current_id);

    if(id == NIL)
        syntax_error(13, s);
    
    return id;
}

A_TYPE      *getTypeOfStructOrEnumRefIdentifier(T_KIND type_kind, char *s, ID_KIND id_kind) {
    A_TYPE *type;
    A_ID *id;

    id = searchIdentifier(s, current_id);

    if(id) {
        if (id->kind == id_kind && id->type->kind == type_kind)
            return id->type;
        else
            syntax_error(11, s);
    }

    type = malloc(sizeof(A_TYPE));
    id = makeIdentifier(s);
    id->kind = id_kind;
    id->type = type;

    return type;
}

A_ID        *setDeclaratorInit(A_ID *id, A_NODE *node) {
    id->init = node;
    return id;
}

A_ID        *setDeclaratorKind(A_ID *id, ID_KIND kind) {
    A_ID *a;

    // find identifier. if exsist same identifier in same level then syntax error
    a = searchIdentifierAtCurrentLevel(id->name, id->prev);
    
    if(a)
        syntax_error(12, id->name);
    
    id->kind = kind;

    return id;
}

A_ID        *setDeclaratorType(A_ID *id, A_TYPE *type) {
    id->type = type;
    return id;
}

A_ID        *setDeclaratorElementType(A_ID *id, A_TYPE *type) {
    A_TYPE *type_temp;

    if(id->type == NIL)
        id->type = type;
    else {
        type_temp = id->type;

        while (type_temp->element_type) {
            type_temp = type_temp->element_type;
        }

        type_temp->element_type = type;
    }

    return id;
}

A_ID        *setDeclaratorTypeAndKind(A_ID *id, A_TYPE *type, ID_KIND kind) {
    id = setDeclaratorType(id, type);
    id = setDeclaratorKind(id, kind);

    return id;
}

A_ID        *setDeclaratorListSpecifier(A_ID *id, A_SPECIFIER *specifier) {
    A_ID *a = id;

    setDefalutSpecifier(specifier);

    while(a) {
        if(strlen(a->name) && searchIdentifierAtCurrentLevel(a->name, a->prev))
            syntax_error(12, a->name);
        
        a = setDeclaratorElementType(a, specifier->type);

        if(specifier->stor == S_TYPEDEF)
            a->kind = ID_TYPE;
        else if(a->type->kind == T_FUNC)
            a->kind = ID_FUNC;
        else
            a->kind = ID_VAR;

        a->specifier = specifier->stor;

        if(a->specifier == S_NULL)
            a->specifier = S_AUTO;

        a = a->link;
    }

    return id;
}

A_ID        *setFunctionDeclaratorSpecifier(A_ID *id, A_SPECIFIER *specifier) {
    A_ID *a;

    if(specifier->stor)
        syntax_error(25, "");
    
    setDefalutSpecifier(specifier);

    if(id->type->kind != T_FUNC) {
        syntax_error(21, "");
        return id;
    } else {
        id = setDeclaratorElementType(id, specifier->type);
        id->kind = ID_FUNC;
    } 

    // printf("log - %s\n", id->type->field->name);

    a = searchIdentifierAtCurrentLevel(id->name, id->prev);

    if(a) {
        // refernce undefined function
        if(a->kind != ID_FUNC || a->type->expr)
            syntax_error(12, id->name);
        else {
            if(isNotSameFormalParameters(a->type->field, id->type->field)) 
                syntax_error(22, id->name);
            
            if(isNotSameType(a->type->element_type, id->type->element_type))
                syntax_error(26, id->name);
        }

        
    }

    a = id->type->field;
    int void_flag = 0;

    while (a) {
        if(strlen(a->name) && void_flag) 
            syntax_error(24, "void_flag");
        else if(strlen(a->name))
            current_id = a;
        else if(a->type) {
            if(!void_flag && a->type->kind == T_VOID)
                void_flag = 1;
            else if(void_flag)
                syntax_error(24, "void_flag");
            else 
                syntax_error(23, "");
        }

        a = a->link;
    }

    return id;
}

A_ID        *setFunctionDeclaratorBody(A_ID *id, A_NODE *node) {
    id->type->expr = node;

    return id;
}

A_ID        *setParameterDeclaratorSpecifier(A_ID *id, A_SPECIFIER *specifier) {
    if(searchIdentifierAtCurrentLevel(id->name, id->prev))
        syntax_error(12, id->name);
    
    if(specifier->stor || (specifier->type == void_type && strcmp(id->name, "") != 0))
        syntax_error(14, "");

    setDefalutSpecifier(specifier);

    id = setDeclaratorElementType(id , specifier->type);
    id->kind = ID_PARM;

    return id;
}

A_ID        *setStructDeclaratorListSpecifier(A_ID *id, A_TYPE *type) {
    A_ID *a = id;

    while (a) {
        if(searchIdentifierAtCurrentLevel(id->name, id->prev))
            syntax_error(12, a->name);

        a = setDeclaratorElementType(a, type);
        a->kind = ID_FIELD;

        a = a->link;
    }

    return id;
}

A_TYPE      *setTypeNameSpecifier(A_TYPE *type, A_SPECIFIER *specifier) {
    if(specifier->stor)
        syntax_error(20, "");
    
    setDefalutSpecifier(specifier);

    type = setTypeElementType(type, specifier->type);
}

A_TYPE      *setTypeElementType(A_TYPE *f_type, A_TYPE *b_type) {
    A_TYPE *type;

    if(f_type == NIL)
        return b_type;

    type = f_type;

    while(type->element_type)
        type = type->element_type;
    
    type->element_type = b_type;

    return f_type;
}

A_TYPE      *setTypeField(A_TYPE *type, A_ID *id) {
    type->field = id;

    return type;
}

A_TYPE      *setTypeExpr(A_TYPE *type, A_NODE *node) {
    type->expr = node;

    return type;
}

A_TYPE      *setTypeAndKindOfDeclarator(A_TYPE *type, ID_KIND kind, A_ID *id) {
    if(searchIdentifierAtCurrentLevel(id->name, id->prev))
        syntax_error(12, id->name);
    
    id->kind = kind;
    id->type = type;

    return type;
}

A_TYPE      *setTypeStructOrEnumIdentifier(T_KIND type_kind, char *s, ID_KIND id_kind) {
    A_TYPE *type;
    A_ID *id, *a;

    a = searchIdentifierAtCurrentLevel(s, current_id);

    if(a) {
        if(a->kind == id_kind && a->type->kind == type_kind) {
            if(a->type->field)
                syntax_error(12, s);
            else
                return a->type;
        } else
            syntax_error(12, s);
    }

    id = makeIdentifier(s);
    type = makeType(type_kind);
    id->type = type;
    id->kind = id_kind;

    return type;
}

BOOLEAN     isNotSameFormalParameters(A_ID *f_id, A_ID *b_id) {
    if(f_id == NIL)
        return FALSE;
    
    while(f_id) {
        if(b_id == NIL || isNotSameType(f_id->type, b_id->type))
            return TRUE;

        f_id = f_id->link;
        b_id = b_id->link;
    }

    if(b_id)
        return TRUE;
    else 
        return FALSE;
}

BOOLEAN     isNotSameType(A_TYPE *f_type, A_TYPE *b_type) {
    if(isPointerOrArrayType(f_type) || isPointerOrArrayType(b_type))
        return isNotSameType(f_type->element_type, b_type->element_type);
    else
        return f_type != b_type;
}

BOOLEAN     isPointerOrArrayType(A_TYPE *type) {
    return type->kind == T_ARRAY || type->kind == T_POINTER;
}

void        syntax_error(int errNm, char *s) {
    syntax_err++;

    printf("line %d: syntax error: ", line_no);

    switch (errNm) {
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

    if(strlen(yytext) == 0)
        printf(" at end\n");
    else
        printf(" near %s\n", yytext);
}

void        initializer(void) {
    // primitive data types
    int_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("int"));
    float_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("float"));
    char_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("char"));
    void_type = setTypeAndKindOfDeclarator(makeType(T_VOID), ID_TYPE, makeIdentifier("void"));
    string_type = setTypeElementType(makeType(T_POINTER), char_type);
    
    int_type->size=4; int_type->check=TRUE;
    float_type->size=4; float_type->check=TRUE;
    char_type->size=1; char_type->check=TRUE;
    void_type->size=0; void_type->check=TRUE;
    string_type->size=4; string_type->check=TRUE;
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
        setTypeField(setTypeElementType(makeType(T_FUNC), void_type),
            linkDeclaratorList(setDeclaratorTypeAndKind(makeDummyIdentifier(), string_type,ID_PARM),
            setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
        ID_FUNC);

    // malloc(int) library function
    setDeclaratorTypeAndKind(makeIdentifier("malloc"),
        setTypeField(
            setTypeElementType(makeType(T_FUNC), string_type),
            setDeclaratorTypeAndKind(makeDummyIdentifier(),int_type,ID_PARM)),
        ID_FUNC);
}
