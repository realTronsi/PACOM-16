#include "./lexer.h"

#define ul unsigned long

// grab previous token
int backstep(const int* code, ul ptr){

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
int lex_number(const int* code, ul* ptr, int errno){
	// get number size
	size_t digits = 0;
	while((code[ptr] >= '0' || code[ptr] <= '9') || code[ptr] == 'b'){
		if(code[ptr] >= '0' || code[ptr] <= '9'){
			digits++;
		}
		ptr++;
	}

	// reset pointer
	ptr -= digits;

	int number = 0;
	int base = 10;
	for(int i = digits; i > 0; i--;){
		if(code[ptr] >= '0' || code[ptr] <= '9'){
			number += code[ptr] * i * base;
		} else if(code[ptr] == 'b') {
			base = 2;
		}
		ptr++;
	}

	Token* token = new_token(NUMBER);
	return ;
}

// tokenize strings
int lex_string(const int* code, ul ptr, int errno){
	char* str = NULL;
	// get string length
	size_t str_len = 0;
	while(code[ptr] != '"' || code[ptr] != '\0'){
		str_len++;
	}
	str = calloc(str_len, sizeof(*str));
	for(int i = 0; i < str_len; i++){
		ptr++;
		str[i] = code[ptr];
	}
	// end string
	buffer = str;
	return 1;
}

Token* pasm_lex(const int* code, int errno){
	if(code == NULL){
		return 0;
	}
	// tokenized code
	Token* tokens = calloc(1, sizeof(*tokens));

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

			// check for special char
			if(curr_len == 0){
				if(code[ptr] >= '0' || code[ptr] <= '9'){
					lex_number(code, ptr, ret);
				} else if (code[ptr] == '"'){
					lex_string(code, ptr, ret);
					break;
				}
			}

			curr[curr_len] = code[ptr];
			curr_len++;
		} else {
			// whitespace, push token
			switch(curr){
				case (strcmp())
			}
		}
	}

	free(curr);
}