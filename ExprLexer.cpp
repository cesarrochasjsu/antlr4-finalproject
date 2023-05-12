
// Generated from Expr.g4 by ANTLR 4.12.0


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
  assert(exprlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "COMMENT", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", 
      "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", 
      "Y", "Z", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", "WS", 
      "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "QUOTE", "CHARACTER", "STRING", "THEN", "TO", "TRUE", 
      "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WRITELN", "WITH", 
      "XOR", "LDX", "LDCH", "INTEGER", "RANGE", "REAL", "IDENTIFIER", "PLUSOP", 
      "MINUSOP", "DIVOP", "MULTOP", "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", 
      "LT", "GT", "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", 
      "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", 
      "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT", "CHARACTER_CHAR", "STRING_DQUOTE_CHAR", 
      "STRING_SQUOTE_CHAR", "DQUOTE", "SQUOTE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'.'", "", "':'", "'\"'", "'\\u003F'", "'!'", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'''", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "'..'", "", "", "'+'", "'-'", "'/'", 
      "'*'", "':='", "'='", "'<>'", "'<='", "'>='", "'<'", "'>'", "'+='", 
      "'-='", "'*='", "'/='", "'^'", "';'", "','", "'('", "')'", "'['", 
      "']'", "'{'", "'}'", "'(*'", "'*)'"
    },
    std::vector<std::string>{
      "", "", "COMMENT", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", 
      "WS", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "QUOTE", "CHARACTER", "STRING", "THEN", "TO", "TRUE", 
      "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WRITELN", "WITH", 
      "XOR", "LDX", "LDCH", "INTEGER", "RANGE", "REAL", "IDENTIFIER", "PLUSOP", 
      "MINUSOP", "DIVOP", "MULTOP", "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", 
      "LT", "GT", "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", 
      "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", 
      "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,97,805,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,2,120,7,120,2,121,7,121,2,122,
  	7,122,2,123,7,123,2,124,7,124,2,125,7,125,2,126,7,126,2,127,7,127,1,0,
  	1,0,1,1,1,1,5,1,262,8,1,10,1,12,1,265,9,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,
  	1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,
  	1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,
  	1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,3,32,330,
  	8,32,1,32,1,32,1,32,1,32,1,33,4,33,337,8,33,11,33,12,33,338,1,33,1,33,
  	1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,
  	1,37,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,39,1,39,
  	1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,42,1,42,
  	1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,
  	1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,46,1,46,1,46,
  	1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,49,1,49,
  	1,49,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,
  	1,52,1,52,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,55,
  	1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,
  	1,56,1,56,1,56,1,57,1,57,1,57,1,57,1,57,1,57,1,57,1,58,1,58,1,58,1,58,
  	1,58,1,58,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,59,1,59,1,60,1,60,
  	1,60,1,60,1,61,1,61,1,61,1,61,1,62,1,62,1,62,1,62,1,63,1,63,1,63,1,63,
  	1,63,1,63,1,63,1,64,1,64,1,64,1,65,1,65,1,65,1,66,1,66,1,66,1,66,1,66,
  	1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,68,
  	1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,70,1,70,1,70,1,70,
  	1,70,1,70,1,70,1,70,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,72,1,72,1,72,
  	1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,73,1,74,1,74,1,74,1,74,1,75,1,75,
  	1,75,1,75,1,76,1,76,1,77,1,77,1,77,1,77,1,78,1,78,5,78,605,8,78,10,78,
  	12,78,608,9,78,1,78,1,78,1,78,1,78,5,78,614,8,78,10,78,12,78,617,9,78,
  	1,78,1,78,3,78,621,8,78,1,79,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,81,
  	1,81,1,81,1,81,1,81,1,82,1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,
  	1,84,1,84,1,84,1,84,1,84,1,84,1,85,1,85,1,85,1,85,1,85,1,86,1,86,1,86,
  	1,86,1,87,1,87,1,87,1,87,1,87,1,87,1,88,1,88,1,88,1,88,1,88,1,88,1,88,
  	1,88,1,89,1,89,1,89,1,89,1,89,1,90,1,90,1,90,1,90,1,91,1,91,1,91,1,91,
  	1,92,1,92,1,92,1,92,1,92,1,93,4,93,694,8,93,11,93,12,93,695,1,94,1,94,
  	1,94,1,95,1,95,1,95,1,95,1,95,1,95,1,95,3,95,708,8,95,1,95,1,95,1,95,
  	1,95,1,95,1,95,1,95,3,95,717,8,95,1,95,1,95,3,95,721,8,95,1,96,1,96,5,
  	96,725,8,96,10,96,12,96,728,9,96,1,97,1,97,1,98,1,98,1,99,1,99,1,100,
  	1,100,1,101,1,101,1,101,1,102,1,102,1,103,1,103,1,103,1,104,1,104,1,104,
  	1,105,1,105,1,105,1,106,1,106,1,107,1,107,1,108,1,108,1,108,1,109,1,109,
  	1,109,1,110,1,110,1,110,1,111,1,111,1,111,1,112,1,112,1,113,1,113,1,114,
  	1,114,1,115,1,115,1,116,1,116,1,117,1,117,1,118,1,118,1,119,1,119,1,120,
  	1,120,1,121,1,121,1,121,1,122,1,122,1,122,1,123,1,123,1,124,1,124,3,124,
  	796,8,124,1,125,1,125,3,125,800,8,125,1,126,1,126,1,127,1,127,1,263,0,
  	128,1,1,3,2,5,0,7,0,9,0,11,0,13,0,15,0,17,0,19,0,21,0,23,0,25,0,27,0,
  	29,0,31,0,33,0,35,0,37,0,39,0,41,0,43,0,45,0,47,0,49,0,51,0,53,0,55,0,
  	57,3,59,4,61,5,63,6,65,7,67,8,69,9,71,10,73,11,75,12,77,13,79,14,81,15,
  	83,16,85,17,87,18,89,19,91,20,93,21,95,22,97,23,99,24,101,25,103,26,105,
  	27,107,28,109,29,111,30,113,31,115,32,117,33,119,34,121,35,123,36,125,
  	37,127,38,129,39,131,40,133,41,135,42,137,43,139,44,141,45,143,46,145,
  	47,147,48,149,49,151,50,153,51,155,52,157,53,159,54,161,55,163,56,165,
  	57,167,58,169,59,171,60,173,61,175,62,177,63,179,64,181,65,183,66,185,
  	67,187,68,189,69,191,70,193,71,195,72,197,73,199,74,201,75,203,76,205,
  	77,207,78,209,79,211,80,213,81,215,82,217,83,219,84,221,85,223,86,225,
  	87,227,88,229,89,231,90,233,91,235,92,237,93,239,94,241,95,243,96,245,
  	97,247,0,249,0,251,0,253,0,255,0,1,0,33,2,0,65,65,97,97,2,0,66,66,98,
  	98,2,0,67,67,99,99,2,0,68,68,100,100,2,0,69,69,101,101,2,0,70,70,102,
  	102,2,0,71,71,103,103,2,0,72,72,104,104,2,0,73,73,105,105,2,0,74,74,106,
  	106,2,0,75,75,107,107,2,0,76,76,108,108,2,0,77,77,109,109,2,0,78,78,110,
  	110,2,0,79,79,111,111,2,0,80,80,112,112,2,0,81,81,113,113,2,0,82,82,114,
  	114,2,0,83,83,115,115,2,0,84,84,116,116,2,0,85,85,117,117,2,0,86,86,118,
  	118,2,0,87,87,119,119,2,0,88,88,120,120,2,0,89,89,121,121,2,0,90,90,122,
  	122,2,0,9,9,32,32,1,0,48,57,2,0,43,43,45,45,3,0,65,90,95,95,97,122,4,
  	0,48,57,65,90,95,95,97,122,1,0,39,39,1,0,34,34,787,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,
  	0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,
  	77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,
  	0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,
  	0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,
  	0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,
  	0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,
  	0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,
  	0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,
  	0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,
  	0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,0,0,
  	0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,177,1,0,0,
  	0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,187,1,0,0,
  	0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,197,1,0,0,
  	0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,207,1,0,0,
  	0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,0,217,1,0,0,
  	0,0,219,1,0,0,0,0,221,1,0,0,0,0,223,1,0,0,0,0,225,1,0,0,0,0,227,1,0,0,
  	0,0,229,1,0,0,0,0,231,1,0,0,0,0,233,1,0,0,0,0,235,1,0,0,0,0,237,1,0,0,
  	0,0,239,1,0,0,0,0,241,1,0,0,0,0,243,1,0,0,0,0,245,1,0,0,0,1,257,1,0,0,
  	0,3,259,1,0,0,0,5,268,1,0,0,0,7,270,1,0,0,0,9,272,1,0,0,0,11,274,1,0,
  	0,0,13,276,1,0,0,0,15,278,1,0,0,0,17,280,1,0,0,0,19,282,1,0,0,0,21,284,
  	1,0,0,0,23,286,1,0,0,0,25,288,1,0,0,0,27,290,1,0,0,0,29,292,1,0,0,0,31,
  	294,1,0,0,0,33,296,1,0,0,0,35,298,1,0,0,0,37,300,1,0,0,0,39,302,1,0,0,
  	0,41,304,1,0,0,0,43,306,1,0,0,0,45,308,1,0,0,0,47,310,1,0,0,0,49,312,
  	1,0,0,0,51,314,1,0,0,0,53,316,1,0,0,0,55,318,1,0,0,0,57,320,1,0,0,0,59,
  	322,1,0,0,0,61,324,1,0,0,0,63,326,1,0,0,0,65,329,1,0,0,0,67,336,1,0,0,
  	0,69,342,1,0,0,0,71,346,1,0,0,0,73,352,1,0,0,0,75,356,1,0,0,0,77,362,
  	1,0,0,0,79,368,1,0,0,0,81,373,1,0,0,0,83,379,1,0,0,0,85,392,1,0,0,0,87,
  	401,1,0,0,0,89,412,1,0,0,0,91,416,1,0,0,0,93,419,1,0,0,0,95,426,1,0,0,
  	0,97,431,1,0,0,0,99,435,1,0,0,0,101,441,1,0,0,0,103,446,1,0,0,0,105,450,
  	1,0,0,0,107,459,1,0,0,0,109,464,1,0,0,0,111,467,1,0,0,0,113,482,1,0,0,
  	0,115,485,1,0,0,0,117,492,1,0,0,0,119,502,1,0,0,0,121,508,1,0,0,0,123,
  	512,1,0,0,0,125,516,1,0,0,0,127,520,1,0,0,0,129,527,1,0,0,0,131,530,1,
  	0,0,0,133,533,1,0,0,0,135,542,1,0,0,0,137,545,1,0,0,0,139,552,1,0,0,0,
  	141,562,1,0,0,0,143,570,1,0,0,0,145,577,1,0,0,0,147,584,1,0,0,0,149,588,
  	1,0,0,0,151,592,1,0,0,0,153,596,1,0,0,0,155,598,1,0,0,0,157,620,1,0,0,
  	0,159,622,1,0,0,0,161,627,1,0,0,0,163,630,1,0,0,0,165,635,1,0,0,0,167,
  	640,1,0,0,0,169,645,1,0,0,0,171,651,1,0,0,0,173,656,1,0,0,0,175,660,1,
  	0,0,0,177,666,1,0,0,0,179,674,1,0,0,0,181,679,1,0,0,0,183,683,1,0,0,0,
  	185,687,1,0,0,0,187,693,1,0,0,0,189,697,1,0,0,0,191,720,1,0,0,0,193,722,
  	1,0,0,0,195,729,1,0,0,0,197,731,1,0,0,0,199,733,1,0,0,0,201,735,1,0,0,
  	0,203,737,1,0,0,0,205,740,1,0,0,0,207,742,1,0,0,0,209,745,1,0,0,0,211,
  	748,1,0,0,0,213,751,1,0,0,0,215,753,1,0,0,0,217,755,1,0,0,0,219,758,1,
  	0,0,0,221,761,1,0,0,0,223,764,1,0,0,0,225,767,1,0,0,0,227,769,1,0,0,0,
  	229,771,1,0,0,0,231,773,1,0,0,0,233,775,1,0,0,0,235,777,1,0,0,0,237,779,
  	1,0,0,0,239,781,1,0,0,0,241,783,1,0,0,0,243,785,1,0,0,0,245,788,1,0,0,
  	0,247,791,1,0,0,0,249,795,1,0,0,0,251,799,1,0,0,0,253,801,1,0,0,0,255,
  	803,1,0,0,0,257,258,5,46,0,0,258,2,1,0,0,0,259,263,3,243,121,0,260,262,
  	9,0,0,0,261,260,1,0,0,0,262,265,1,0,0,0,263,264,1,0,0,0,263,261,1,0,0,
  	0,264,266,1,0,0,0,265,263,1,0,0,0,266,267,3,245,122,0,267,4,1,0,0,0,268,
  	269,7,0,0,0,269,6,1,0,0,0,270,271,7,1,0,0,271,8,1,0,0,0,272,273,7,2,0,
  	0,273,10,1,0,0,0,274,275,7,3,0,0,275,12,1,0,0,0,276,277,7,4,0,0,277,14,
  	1,0,0,0,278,279,7,5,0,0,279,16,1,0,0,0,280,281,7,6,0,0,281,18,1,0,0,0,
  	282,283,7,7,0,0,283,20,1,0,0,0,284,285,7,8,0,0,285,22,1,0,0,0,286,287,
  	7,9,0,0,287,24,1,0,0,0,288,289,7,10,0,0,289,26,1,0,0,0,290,291,7,11,0,
  	0,291,28,1,0,0,0,292,293,7,12,0,0,293,30,1,0,0,0,294,295,7,13,0,0,295,
  	32,1,0,0,0,296,297,7,14,0,0,297,34,1,0,0,0,298,299,7,15,0,0,299,36,1,
  	0,0,0,300,301,7,16,0,0,301,38,1,0,0,0,302,303,7,17,0,0,303,40,1,0,0,0,
  	304,305,7,18,0,0,305,42,1,0,0,0,306,307,7,19,0,0,307,44,1,0,0,0,308,309,
  	7,20,0,0,309,46,1,0,0,0,310,311,7,21,0,0,311,48,1,0,0,0,312,313,7,22,
  	0,0,313,50,1,0,0,0,314,315,7,23,0,0,315,52,1,0,0,0,316,317,7,24,0,0,317,
  	54,1,0,0,0,318,319,7,25,0,0,319,56,1,0,0,0,320,321,5,58,0,0,321,58,1,
  	0,0,0,322,323,5,34,0,0,323,60,1,0,0,0,324,325,5,63,0,0,325,62,1,0,0,0,
  	326,327,5,33,0,0,327,64,1,0,0,0,328,330,5,13,0,0,329,328,1,0,0,0,329,
  	330,1,0,0,0,330,331,1,0,0,0,331,332,5,10,0,0,332,333,1,0,0,0,333,334,
  	6,32,0,0,334,66,1,0,0,0,335,337,7,26,0,0,336,335,1,0,0,0,337,338,1,0,
  	0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,340,1,0,0,0,340,341,6,33,0,0,
  	341,68,1,0,0,0,342,343,3,5,2,0,343,344,3,31,15,0,344,345,3,11,5,0,345,
  	70,1,0,0,0,346,347,3,5,2,0,347,348,3,39,19,0,348,349,3,39,19,0,349,350,
  	3,5,2,0,350,351,3,53,26,0,351,72,1,0,0,0,352,353,3,5,2,0,353,354,3,41,
  	20,0,354,355,3,29,14,0,355,74,1,0,0,0,356,357,3,7,3,0,357,358,3,13,6,
  	0,358,359,3,17,8,0,359,360,3,21,10,0,360,361,3,31,15,0,361,76,1,0,0,0,
  	362,363,3,7,3,0,363,364,3,39,19,0,364,365,3,13,6,0,365,366,3,5,2,0,366,
  	367,3,25,12,0,367,78,1,0,0,0,368,369,3,9,4,0,369,370,3,5,2,0,370,371,
  	3,41,20,0,371,372,3,13,6,0,372,80,1,0,0,0,373,374,3,9,4,0,374,375,3,33,
  	16,0,375,376,3,31,15,0,376,377,3,41,20,0,377,378,3,43,21,0,378,82,1,0,
  	0,0,379,380,3,9,4,0,380,381,3,33,16,0,381,382,3,31,15,0,382,383,3,41,
  	20,0,383,384,3,41,20,0,384,385,3,43,21,0,385,386,3,39,19,0,386,387,3,
  	45,22,0,387,388,3,9,4,0,388,389,3,43,21,0,389,390,3,33,16,0,390,391,3,
  	39,19,0,391,84,1,0,0,0,392,393,3,9,4,0,393,394,3,33,16,0,394,395,3,31,
  	15,0,395,396,3,43,21,0,396,397,3,21,10,0,397,398,3,31,15,0,398,399,3,
  	45,22,0,399,400,3,13,6,0,400,86,1,0,0,0,401,402,3,11,5,0,402,403,3,13,
  	6,0,403,404,3,41,20,0,404,405,3,43,21,0,405,406,3,39,19,0,406,407,3,45,
  	22,0,407,408,3,9,4,0,408,409,3,43,21,0,409,410,3,33,16,0,410,411,3,39,
  	19,0,411,88,1,0,0,0,412,413,3,11,5,0,413,414,3,21,10,0,414,415,3,47,23,
  	0,415,90,1,0,0,0,416,417,3,11,5,0,417,418,3,33,16,0,418,92,1,0,0,0,419,
  	420,3,11,5,0,420,421,3,33,16,0,421,422,3,49,24,0,422,423,3,31,15,0,423,
  	424,3,43,21,0,424,425,3,33,16,0,425,94,1,0,0,0,426,427,3,13,6,0,427,428,
  	3,27,13,0,428,429,3,41,20,0,429,430,3,13,6,0,430,96,1,0,0,0,431,432,7,
  	4,0,0,432,433,7,13,0,0,433,434,7,3,0,0,434,98,1,0,0,0,435,436,3,15,7,
  	0,436,437,3,5,2,0,437,438,3,27,13,0,438,439,3,41,20,0,439,440,3,13,6,
  	0,440,100,1,0,0,0,441,442,3,15,7,0,442,443,3,21,10,0,443,444,3,27,13,
  	0,444,445,3,13,6,0,445,102,1,0,0,0,446,447,3,15,7,0,447,448,3,33,16,0,
  	448,449,3,39,19,0,449,104,1,0,0,0,450,451,3,15,7,0,451,452,3,45,22,0,
  	452,453,3,31,15,0,453,454,3,9,4,0,454,455,3,43,21,0,455,456,3,21,10,0,
  	456,457,3,33,16,0,457,458,3,31,15,0,458,106,1,0,0,0,459,460,3,17,8,0,
  	460,461,3,33,16,0,461,462,3,43,21,0,462,463,3,33,16,0,463,108,1,0,0,0,
  	464,465,3,21,10,0,465,466,3,15,7,0,466,110,1,0,0,0,467,468,3,21,10,0,
  	468,469,3,29,14,0,469,470,3,35,17,0,470,471,3,27,13,0,471,472,3,13,6,
  	0,472,473,3,29,14,0,473,474,3,13,6,0,474,475,3,31,15,0,475,476,3,43,21,
  	0,476,477,3,5,2,0,477,478,3,43,21,0,478,479,3,21,10,0,479,480,3,33,16,
  	0,480,481,3,31,15,0,481,112,1,0,0,0,482,483,3,21,10,0,483,484,3,31,15,
  	0,484,114,1,0,0,0,485,486,3,21,10,0,486,487,3,31,15,0,487,488,3,27,13,
  	0,488,489,3,21,10,0,489,490,3,31,15,0,490,491,3,13,6,0,491,116,1,0,0,
  	0,492,493,3,21,10,0,493,494,3,31,15,0,494,495,3,43,21,0,495,496,3,13,
  	6,0,496,497,3,39,19,0,497,498,3,15,7,0,498,499,3,5,2,0,499,500,3,9,4,
  	0,500,501,3,13,6,0,501,118,1,0,0,0,502,503,3,27,13,0,503,504,3,5,2,0,
  	504,505,3,7,3,0,505,506,3,13,6,0,506,507,3,27,13,0,507,120,1,0,0,0,508,
  	509,3,29,14,0,509,510,3,33,16,0,510,511,3,11,5,0,511,122,1,0,0,0,512,
  	513,3,31,15,0,513,514,3,21,10,0,514,515,3,27,13,0,515,124,1,0,0,0,516,
  	517,3,31,15,0,517,518,3,33,16,0,518,519,3,43,21,0,519,126,1,0,0,0,520,
  	521,3,33,16,0,521,522,3,7,3,0,522,523,3,23,11,0,523,524,3,13,6,0,524,
  	525,3,9,4,0,525,526,3,43,21,0,526,128,1,0,0,0,527,528,3,33,16,0,528,529,
  	3,15,7,0,529,130,1,0,0,0,530,531,3,33,16,0,531,532,3,31,15,0,532,132,
  	1,0,0,0,533,534,3,33,16,0,534,535,3,35,17,0,535,536,3,13,6,0,536,537,
  	3,39,19,0,537,538,3,5,2,0,538,539,3,43,21,0,539,540,3,33,16,0,540,541,
  	3,39,19,0,541,134,1,0,0,0,542,543,3,33,16,0,543,544,3,39,19,0,544,136,
  	1,0,0,0,545,546,3,35,17,0,546,547,3,5,2,0,547,548,3,9,4,0,548,549,3,25,
  	12,0,549,550,3,13,6,0,550,551,3,11,5,0,551,138,1,0,0,0,552,553,3,35,17,
  	0,553,554,3,39,19,0,554,555,3,33,16,0,555,556,3,9,4,0,556,557,3,13,6,
  	0,557,558,3,11,5,0,558,559,3,45,22,0,559,560,3,39,19,0,560,561,3,13,6,
  	0,561,140,1,0,0,0,562,563,3,35,17,0,563,564,3,39,19,0,564,565,3,33,16,
  	0,565,566,3,17,8,0,566,567,3,39,19,0,567,568,3,5,2,0,568,569,3,29,14,
  	0,569,142,1,0,0,0,570,571,3,39,19,0,571,572,3,13,6,0,572,573,3,9,4,0,
  	573,574,3,33,16,0,574,575,3,39,19,0,575,576,3,11,5,0,576,144,1,0,0,0,
  	577,578,3,39,19,0,578,579,3,13,6,0,579,580,3,35,17,0,580,581,3,13,6,0,
  	581,582,3,5,2,0,582,583,3,43,21,0,583,146,1,0,0,0,584,585,3,41,20,0,585,
  	586,3,13,6,0,586,587,3,43,21,0,587,148,1,0,0,0,588,589,3,41,20,0,589,
  	590,3,19,9,0,590,591,3,27,13,0,591,150,1,0,0,0,592,593,3,41,20,0,593,
  	594,3,19,9,0,594,595,3,39,19,0,595,152,1,0,0,0,596,597,5,39,0,0,597,154,
  	1,0,0,0,598,599,3,153,76,0,599,600,3,247,123,0,600,601,3,153,76,0,601,
  	156,1,0,0,0,602,606,3,253,126,0,603,605,3,249,124,0,604,603,1,0,0,0,605,
  	608,1,0,0,0,606,604,1,0,0,0,606,607,1,0,0,0,607,609,1,0,0,0,608,606,1,
  	0,0,0,609,610,3,253,126,0,610,621,1,0,0,0,611,615,3,255,127,0,612,614,
  	3,251,125,0,613,612,1,0,0,0,614,617,1,0,0,0,615,613,1,0,0,0,615,616,1,
  	0,0,0,616,618,1,0,0,0,617,615,1,0,0,0,618,619,3,255,127,0,619,621,1,0,
  	0,0,620,602,1,0,0,0,620,611,1,0,0,0,621,158,1,0,0,0,622,623,3,43,21,0,
  	623,624,3,19,9,0,624,625,3,13,6,0,625,626,3,31,15,0,626,160,1,0,0,0,627,
  	628,3,43,21,0,628,629,3,33,16,0,629,162,1,0,0,0,630,631,3,43,21,0,631,
  	632,3,39,19,0,632,633,3,45,22,0,633,634,3,13,6,0,634,164,1,0,0,0,635,
  	636,3,43,21,0,636,637,3,53,26,0,637,638,3,35,17,0,638,639,3,13,6,0,639,
  	166,1,0,0,0,640,641,3,45,22,0,641,642,3,31,15,0,642,643,3,21,10,0,643,
  	644,3,43,21,0,644,168,1,0,0,0,645,646,3,45,22,0,646,647,3,31,15,0,647,
  	648,3,43,21,0,648,649,3,21,10,0,649,650,3,27,13,0,650,170,1,0,0,0,651,
  	652,3,45,22,0,652,653,3,41,20,0,653,654,3,13,6,0,654,655,3,41,20,0,655,
  	172,1,0,0,0,656,657,3,47,23,0,657,658,3,5,2,0,658,659,3,39,19,0,659,174,
  	1,0,0,0,660,661,3,49,24,0,661,662,3,19,9,0,662,663,3,21,10,0,663,664,
  	3,27,13,0,664,665,3,13,6,0,665,176,1,0,0,0,666,667,3,49,24,0,667,668,
  	3,39,19,0,668,669,3,21,10,0,669,670,3,43,21,0,670,671,3,13,6,0,671,672,
  	3,27,13,0,672,673,3,31,15,0,673,178,1,0,0,0,674,675,3,49,24,0,675,676,
  	3,21,10,0,676,677,3,43,21,0,677,678,3,19,9,0,678,180,1,0,0,0,679,680,
  	3,51,25,0,680,681,3,33,16,0,681,682,3,39,19,0,682,182,1,0,0,0,683,684,
  	3,27,13,0,684,685,3,11,5,0,685,686,3,51,25,0,686,184,1,0,0,0,687,688,
  	3,27,13,0,688,689,3,11,5,0,689,690,3,9,4,0,690,691,3,19,9,0,691,186,1,
  	0,0,0,692,694,7,27,0,0,693,692,1,0,0,0,694,695,1,0,0,0,695,693,1,0,0,
  	0,695,696,1,0,0,0,696,188,1,0,0,0,697,698,5,46,0,0,698,699,5,46,0,0,699,
  	190,1,0,0,0,700,701,3,187,93,0,701,702,5,46,0,0,702,703,3,187,93,0,703,
  	721,1,0,0,0,704,705,3,187,93,0,705,707,7,4,0,0,706,708,7,28,0,0,707,706,
  	1,0,0,0,707,708,1,0,0,0,708,709,1,0,0,0,709,710,3,187,93,0,710,721,1,
  	0,0,0,711,712,3,187,93,0,712,713,5,46,0,0,713,714,3,187,93,0,714,716,
  	7,4,0,0,715,717,7,28,0,0,716,715,1,0,0,0,716,717,1,0,0,0,717,718,1,0,
  	0,0,718,719,3,187,93,0,719,721,1,0,0,0,720,700,1,0,0,0,720,704,1,0,0,
  	0,720,711,1,0,0,0,721,192,1,0,0,0,722,726,7,29,0,0,723,725,7,30,0,0,724,
  	723,1,0,0,0,725,728,1,0,0,0,726,724,1,0,0,0,726,727,1,0,0,0,727,194,1,
  	0,0,0,728,726,1,0,0,0,729,730,5,43,0,0,730,196,1,0,0,0,731,732,5,45,0,
  	0,732,198,1,0,0,0,733,734,5,47,0,0,734,200,1,0,0,0,735,736,5,42,0,0,736,
  	202,1,0,0,0,737,738,5,58,0,0,738,739,5,61,0,0,739,204,1,0,0,0,740,741,
  	5,61,0,0,741,206,1,0,0,0,742,743,5,60,0,0,743,744,5,62,0,0,744,208,1,
  	0,0,0,745,746,5,60,0,0,746,747,5,61,0,0,747,210,1,0,0,0,748,749,5,62,
  	0,0,749,750,5,61,0,0,750,212,1,0,0,0,751,752,5,60,0,0,752,214,1,0,0,0,
  	753,754,5,62,0,0,754,216,1,0,0,0,755,756,5,43,0,0,756,757,5,61,0,0,757,
  	218,1,0,0,0,758,759,5,45,0,0,759,760,5,61,0,0,760,220,1,0,0,0,761,762,
  	5,42,0,0,762,763,5,61,0,0,763,222,1,0,0,0,764,765,5,47,0,0,765,766,5,
  	61,0,0,766,224,1,0,0,0,767,768,5,94,0,0,768,226,1,0,0,0,769,770,5,59,
  	0,0,770,228,1,0,0,0,771,772,5,44,0,0,772,230,1,0,0,0,773,774,5,40,0,0,
  	774,232,1,0,0,0,775,776,5,41,0,0,776,234,1,0,0,0,777,778,5,91,0,0,778,
  	236,1,0,0,0,779,780,5,93,0,0,780,238,1,0,0,0,781,782,5,123,0,0,782,240,
  	1,0,0,0,783,784,5,125,0,0,784,242,1,0,0,0,785,786,5,40,0,0,786,787,5,
  	42,0,0,787,244,1,0,0,0,788,789,5,42,0,0,789,790,5,41,0,0,790,246,1,0,
  	0,0,791,792,8,31,0,0,792,248,1,0,0,0,793,796,3,255,127,0,794,796,8,32,
  	0,0,795,793,1,0,0,0,795,794,1,0,0,0,796,250,1,0,0,0,797,800,3,253,126,
  	0,798,800,8,31,0,0,799,797,1,0,0,0,799,798,1,0,0,0,800,252,1,0,0,0,801,
  	802,5,34,0,0,802,254,1,0,0,0,803,804,5,39,0,0,804,256,1,0,0,0,14,0,263,
  	329,338,606,615,620,695,707,716,720,726,795,799,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
}
