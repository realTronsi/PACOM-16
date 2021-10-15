#include "../../include/readfile.h"

int freadf(char* path, int* buffer, size_t* size){
	FILE* file = fopen(path, "rb");

	if(file == NULL){
		fclose(file);
		return 0;
	}

	// file size
	fseek(file, 0, SEEK_END);
	size_t file_size = ftell(file);
	fseek(file, 0, SEEK_SET);

	buffer = file;

	fclose(file);

	return 1;
}