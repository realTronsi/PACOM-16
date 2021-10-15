#ifndef LEXER_H
#define LEXER_H

#include <stdlib.h>

enum {
	SYS,
	LOAD,
	SET,
	ADDL,
	SUBL,
	MUTL,
	DIVL
} Tokens;

int pasm_lexer(int* code, int* buffer);

#endif