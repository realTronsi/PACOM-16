#ifndef TOKEN_H
#define TOKEN_H

typedef struct {
	enum {
		NUMBER,
		STRING,
		SYS,
		LOAD,
		SET,
		ADDL,
		SUBL,
		MUTL,
		DIVL
	} opcode;
	// any extra metadata to be stored
	int* value;
} Token;

Token* new_token();

#endif