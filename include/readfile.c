#include "./readfile.h"

#define true 1
#define false 0

int freadf(char* path, int* buffer, size_t* size){
	FILE* file = fopen(path, "rb");

	if(file == NULL){
		return false;
	}

	// file size
	fseek(file, 0, SEEK_END);
	size = ftell(file);
	fseek(file, 0, SEEK_SET);

	int* data = calloc(size, int);
	data = file;
	
	buffer = data;

	return true;
}