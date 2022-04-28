#include "./include/token.h"
#include <string.h>

TOKEN create_token(char* tok_value) {
  TOKEN new_token;
  
  new_token.token = tok_value;
  new_token.token_type = tok_type(tok_value);
  new_token.token_type_str = tok_type_str(new_token.token_type);
  
  return new_token;
}

TOKEN_TYPE tok_type(char* v) {
  TOKEN_TYPE tok_type;

  if(strcmp(v, "(")){
    tok_type = TT_LPAREN;
  } else if(strcmp(v, ")")) {
    tok_type = TT_RPAREN;
  } else if(strcmp(v, "]")) {
    tok_type = TT_LBRACK;
  } else if(strcmp(v, "[")) {
    tok_type = TT_RBRACK;
  } else if(strcmp(v, "}")) {
    tok_type = TT_LBRACE;
  } else if(strcmp(v, "}")) {
    tok_type = TT_LBRACE;
  } else if(strcmp(v, "=")) {
    tok_type = TT_EQUALS;
  } else if(strcmp(v, "-")) {
    tok_type = TT_SUB;
  } else if(strcmp(v, "+")) {
    tok_type = TT_PLUS;
  } else if(strcmp(v, "/")) {
    tok_type = TT_DIV;
  } else if(strcmp(v, "*")) {
    tok_type = TT_MUL;
  } else if(strcmp(v, ";")) {
    tok_type = TT_SEMI;
  } else if(strcmp(v, ":")) {
    tok_type = TT_COLON;
  } else if(strcmp(v, ">")) {
    tok_type = TT_GT;
  } else if(strcmp(v, "<")) {
    tok_type = TT_LT;
  } else if(strcmp(v, ",")) {
    tok_type = TT_COMMA;
  } else if(strcmp(v, "?")) {
    tok_type = TT_QMARK;
  } else if(strcmp(v, "!")) {
    tok_type = TT_EXPMARK;
  } else if(strcmp(v, "_")) {
    tok_type = TT_USCORE;
  } else if(strcmp(v, "&")) {
    tok_type = TT_AMPSAND;
  } else if(strcmp(v, ".")) {
    tok_type = TT_PERIOD;
  } else {
    
  }
  
  return tok_type;
}

char* tok_type_str(TOKEN_TYPE token_type) {
  
}