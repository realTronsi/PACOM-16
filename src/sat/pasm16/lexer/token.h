#ifndef TOKEN_H
#define TOKEN_H

typedef struct {
	enum {
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

#endif