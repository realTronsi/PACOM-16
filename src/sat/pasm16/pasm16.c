#include "../../../include/readfile.h"

int main(int argc, char** argv){
	int* code;
	size_t* length;

	if(argc > 0){
		if(freadf(argv[0], code, length) == true){
			// setup stack
			short stack[32768];

		}
	}
	return 0;
}
