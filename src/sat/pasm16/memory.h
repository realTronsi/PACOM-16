#ifndef MEMORY_H
#define MEMORY_H

"../../../include/CONST.h"

typedef struct {
	ushort memory[PASM_MEMORY_LEN];
	ushort ptr;

	// page tables
	//
} Memory;

// generic barebones malloc implementation
int malloc(Memory* memory, ushort len);

#endif