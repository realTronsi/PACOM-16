#include "../../include/readfile.h"

int freadf(char* path, int* buffer, size_t* size){
	FILE* file = fopen(path, "rb");

	if(file == NULL){
		return 0;
	}

	// file size
	fseek(file, 0, SEEK_END);
	size_t file_size = ftell(file);
	fseek(file, 0, SEEK_SET);

	buffer = calloc(file_size, sizeof(int));
	buffer = file;

	return 1;
}