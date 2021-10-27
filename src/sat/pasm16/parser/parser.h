#ifndef PARSER_H
#define PARSER_H

#include "../lexer/token.h"
#include "../../../../include/CONST.h"

int parse(const Token* tokens, ushort stack);

#endif