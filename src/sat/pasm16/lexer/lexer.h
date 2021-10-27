#ifndef LEXER_H
#define LEXER_H

#include <stdlib.h>
#include "../../../../include/CONST.h"
#include "../../../../include/string.h"
#include "./token.h"

Token* pasm_lex(int* code, int errno);

#endif