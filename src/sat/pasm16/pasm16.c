#include "../../../include/readfile.h"

int main(int argc, char* argv){
	int* code;
	size_t* length;

	if(argc > 0){
		if(freadf(argv[0], code, length) == true){
			
		}
	}
	return 0;
}