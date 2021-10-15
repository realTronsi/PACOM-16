#include "./lexer.h"

#define ul unsigned long

// grab previous token
int backstep(int* code, ul ptr){

}

// determine if character is whitespace
// note: isspace includes \n
int is_whitespace(char c){
	if(c == ' ' || c == '\n'){
		return 1;
	}
	return 0;
}

// tokenize numbers
int lex_number(int* code, ul* ptr){

}

// tokenize strings
int lex_string(int* code, ul* ptr){

}

int pasm_lexer(int* code, int* buffer){
	if(code == NULL){
		return 0;
	}
	// position in code
	ul ptr = 0;
	// current token
	char* curr = calloc(PASM_MAX_OPLEN, sizeof(char));
	size_t curr_len = 0;

	while(code[ptr] != '\0'){
		ptr++;
		if(is_whitespace(code[ptr]) == 0){
			// not whitespace, add to curr
			if(curr_len > PASM_MAX_OPLEN - 1){
				// overflow
				return 0;
			}
			curr[curr_len] = code[ptr];
			curr_len++;
		} else {
			// whitespace, push token
		}
	}
}