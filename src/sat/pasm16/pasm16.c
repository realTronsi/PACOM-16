#include "../../../include/readfile.h"
#include "./lexer/lexer.h"

int main(int argc, char** argv){
	char code = NULL;
	size_t* length;

	if(argc > 0){
		if(freadf(argv[0], &code, length) == 1){
			// setup stack
			short stack[32768];

			// lexer
			int tokenized = 0;
			pasm_lex(code, &tokenized);
		}
	}

	free(code);

	return 0;
}
