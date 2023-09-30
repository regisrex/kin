//> Scanning on Demand scanner-h
#ifndef klang_lexer_h
#define klang_lexer_h

//< token-types
typedef enum {
    // One-character tokens
    TOKEN_MINUS, TOKEN_PLUS, TOKEN_STAR, 
    TOKEN_DIVISION, TOKEN_POWER, TOKEN_MODULO, TOKEN_AMPERSAND,
    TOKEN_NEGATION, TOKEN_SEMI_COLON, TOKEN_CLOSE_BRACKET, TOKEN_OPEN_BRACKET,
    TOKEN_OPEN_PARANTHESES, TOKEN_CLOSE_PARANTHESES,
    TOKEN_OPEN_CURLY_BRACES, TOKEN_CLOSE_CURLY_BRACES,
    TOKEN_SINGLE_QUOTATION, TOKEN_DOUBLE_QUOTATION,
    TOKEN_COLON, TOKEN_BACK_TICKS,
    TOKEN_GREATER_THAN, TOKEN_LESS_THAN, TOKEN_PERIOD, TOKEN_COMMA,
    TOKEN_DOLLA_SIGN,

    // Literals
    TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER, TOKEN_FLOAT,

    // Two or more characters tokens
    TOKEN_NOT_EQUAL, TOKEN_EQUALITY, TOKEN_INCREMENT, TOKEN_DECREMENT,
    TOKEN_AND, TOKEN_OR, TOKEN_GREATER_THAN_OR_EQUAL, TOKEN_LESS_THAN_OR_EQUAL,

    // Keywords
    TOKEN_UBUSA, TOKEN_NIBA, TOKEN_NIBYO, TOKEN_SIBYO,
    TOKEN_NANONE_NIBA, TOKEN_IMITERERE, TOKEN_UMUBARE, TOKEN_IBICE,
    TOKEN_ATARIBYO, TOKEN_SUBIRAMO, TOKEN_TANGA, TOKEN_POROGARAMU_NTOYA,
    TOKEN_TANGAZA_AMAKURU, TOKEN_INJIZA_AMAKURU, TOKEN_KOMEZA, TOKEN_HAGARARA,
    TOKEN_UBWOKO, TOKEN_NTAHINDUKA, TOKEN_ERROR,
    TOKEN_EOF 
} TokenType;
//>token-types

// Token structure
typedef struct {
    TokenType type;
    char* lexeme;
    int line;
} Token;

void initSource(char *src);
Token scanToken();

#endif