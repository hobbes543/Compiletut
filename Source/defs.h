#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Tokens
enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT, T_EOF
};

// Token Structure
struct token {
    int token;
    int intvalue;
};

// AST node types
enum {
    A_ADD, A_SUBTRACT, A_MULTIPLY, A_DIVIDE, A_INTLIT
};

// Abstract Sytax Tree structure
struct ASTnode{
    int op;                         // "Operation to be performed"
    struct ASTnode *left;           // Left and right child trees
    struct ASTnode *right;
    int intvalue;                   // For A_INTLIT, the integer value    
};