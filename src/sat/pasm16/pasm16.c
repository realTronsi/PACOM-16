#include "../../../include/readfile.h"
#include "./lexer/lexer.h"

int main(int argc, char** argv){
	int* code = NULL;
	size_t* length;

	if(argc > 0){
		if(freadf(argv[0], code, length) == 1){
			// setup stack
			short stack[32768];

			// lexer
			int* tokenized = NULL;
			pasm_lexer(code, tokenized);
		}
	}
	return 0;
}
