
#ifndef TOKEN_H
#define TOKEN_H

typedef enum TOKEN_TYPE {
  TT_LPAREN,
  TT_RPAREN,
  TT_RBRACK,
  TT_LBRACK,
  TT_RBRACE,
  TT_LBRACE,
  TT_EQUALS,
  TT_SUB,
  TT_PLUS,
  TT_DIV,
  TT_MUL,
  TT_SEMI,
  TT_COLON,
  TT_GT,
  TT_LT,
  TT_COMMA,
  TT_QMARK,
  TT_EXPMARK,
  TT_USCORE,
  TT_IDENTIFIER
} TOKEN_TYPE;

typedef struct TOKEN {

  char* token;
  char* token_type_str;
  TOKEN_TYPE token_type;

} TOKEN;

// Returns the new token
TOKEN create_token(char* tok_value);

// Get the token type, will be used by create_token
TOKEN_TYPE tok_type(char* tok_val);

char* tok_type_str(TOKEN_TYPE token_type);

#endif