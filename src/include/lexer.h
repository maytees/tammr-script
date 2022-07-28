
#ifndef LEXER
#define LEXER

typedef struct lexer_struct {
  char* source;
  int index;
  char curr_character;  
} LEXER_STRUCT;
#endif