#include "./lexer.h"

#define ul unsigned long

// grab previous token
int backstep(int* code, ul ptr){

}

// determine if character is whitespace
int is_whitespace(char c){

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
	while(code[ptr] != '\0'){
		ptr++;
	}
}