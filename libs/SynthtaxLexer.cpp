
// Generated from SynthtaxLexer.g4 by ANTLR 4.12.0


#include "SynthtaxLexer.h"


using namespace antlr4;

using namespace synthtax_antlr;


using namespace antlr4;

namespace {

struct SynthtaxLexerStaticData final {
  SynthtaxLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SynthtaxLexerStaticData(const SynthtaxLexerStaticData&) = delete;
  SynthtaxLexerStaticData(SynthtaxLexerStaticData&&) = delete;
  SynthtaxLexerStaticData& operator=(const SynthtaxLexerStaticData&) = delete;
  SynthtaxLexerStaticData& operator=(SynthtaxLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag synthtaxlexerLexerOnceFlag;
SynthtaxLexerStaticData *synthtaxlexerLexerStaticData = nullptr;

void synthtaxlexerLexerInitialize() {
  assert(synthtaxlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<SynthtaxLexerStaticData>(
    std::vector<std::string>{
      "DEF", "IF", "ELSE", "WHILE", "RETURN", "BOOL", "COMMA", "SEMICOLON", 
      "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", "ASSIGN", 
      "EQUALITY", "LESS", "ADD", "SUB", "MUL", "DIV", "STRING", "INT", "FLOAT", 
      "CHAR", "ID", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'fun'", "'if'", "'else'", "'while'", "'return'", "", "','", "';'", 
      "'('", "')'", "'{'", "'}'", "'='", "'=='", "'<'", "'+'", "'-'", "'*'", 
      "'/'"
    },
    std::vector<std::string>{
      "", "DEF", "IF", "ELSE", "WHILE", "RETURN", "BOOL", "COMMA", "SEMICOLON", 
      "OPENPAREN", "CLOSEPAREN", "OPENBRACKET", "CLOSEBRACKET", "ASSIGN", 
      "EQUALITY", "LESS", "ADD", "SUB", "MUL", "DIV", "STRING", "INT", "FLOAT", 
      "CHAR", "ID", "NEWLINE", "WS", "BLOCKCOMMENT", "LINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,195,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,92,
  	8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,
  	5,19,123,8,19,10,19,12,19,126,9,19,1,19,1,19,1,20,4,20,131,8,20,11,20,
  	12,20,132,1,21,4,21,136,8,21,11,21,12,21,137,1,21,1,21,4,21,142,8,21,
  	11,21,12,21,143,1,22,1,22,1,22,1,22,1,23,4,23,151,8,23,11,23,12,23,152,
  	1,24,1,24,3,24,157,8,24,1,24,3,24,160,8,24,1,24,1,24,1,25,4,25,165,8,
  	25,11,25,12,25,166,1,25,1,25,1,26,1,26,1,26,1,26,5,26,175,8,26,10,26,
  	12,26,178,9,26,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,5,27,189,
  	8,27,10,27,12,27,192,9,27,1,27,1,27,1,176,0,28,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,1,0,5,4,0,
  	48,57,65,90,95,95,97,122,1,0,48,57,3,0,65,90,95,95,97,122,2,0,9,9,32,
  	32,2,0,10,10,13,13,205,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,1,57,1,0,0,0,3,61,1,0,0,0,5,64,1,0,
  	0,0,7,69,1,0,0,0,9,75,1,0,0,0,11,91,1,0,0,0,13,93,1,0,0,0,15,95,1,0,0,
  	0,17,97,1,0,0,0,19,99,1,0,0,0,21,101,1,0,0,0,23,103,1,0,0,0,25,105,1,
  	0,0,0,27,107,1,0,0,0,29,110,1,0,0,0,31,112,1,0,0,0,33,114,1,0,0,0,35,
  	116,1,0,0,0,37,118,1,0,0,0,39,120,1,0,0,0,41,130,1,0,0,0,43,135,1,0,0,
  	0,45,145,1,0,0,0,47,150,1,0,0,0,49,159,1,0,0,0,51,164,1,0,0,0,53,170,
  	1,0,0,0,55,184,1,0,0,0,57,58,5,102,0,0,58,59,5,117,0,0,59,60,5,110,0,
  	0,60,2,1,0,0,0,61,62,5,105,0,0,62,63,5,102,0,0,63,4,1,0,0,0,64,65,5,101,
  	0,0,65,66,5,108,0,0,66,67,5,115,0,0,67,68,5,101,0,0,68,6,1,0,0,0,69,70,
  	5,119,0,0,70,71,5,104,0,0,71,72,5,105,0,0,72,73,5,108,0,0,73,74,5,101,
  	0,0,74,8,1,0,0,0,75,76,5,114,0,0,76,77,5,101,0,0,77,78,5,116,0,0,78,79,
  	5,117,0,0,79,80,5,114,0,0,80,81,5,110,0,0,81,10,1,0,0,0,82,83,5,116,0,
  	0,83,84,5,114,0,0,84,85,5,117,0,0,85,92,5,101,0,0,86,87,5,102,0,0,87,
  	88,5,97,0,0,88,89,5,108,0,0,89,90,5,115,0,0,90,92,5,101,0,0,91,82,1,0,
  	0,0,91,86,1,0,0,0,92,12,1,0,0,0,93,94,5,44,0,0,94,14,1,0,0,0,95,96,5,
  	59,0,0,96,16,1,0,0,0,97,98,5,40,0,0,98,18,1,0,0,0,99,100,5,41,0,0,100,
  	20,1,0,0,0,101,102,5,123,0,0,102,22,1,0,0,0,103,104,5,125,0,0,104,24,
  	1,0,0,0,105,106,5,61,0,0,106,26,1,0,0,0,107,108,5,61,0,0,108,109,5,61,
  	0,0,109,28,1,0,0,0,110,111,5,60,0,0,111,30,1,0,0,0,112,113,5,43,0,0,113,
  	32,1,0,0,0,114,115,5,45,0,0,115,34,1,0,0,0,116,117,5,42,0,0,117,36,1,
  	0,0,0,118,119,5,47,0,0,119,38,1,0,0,0,120,124,5,34,0,0,121,123,7,0,0,
  	0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,
  	127,1,0,0,0,126,124,1,0,0,0,127,128,5,34,0,0,128,40,1,0,0,0,129,131,7,
  	1,0,0,130,129,1,0,0,0,131,132,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,
  	133,42,1,0,0,0,134,136,7,1,0,0,135,134,1,0,0,0,136,137,1,0,0,0,137,135,
  	1,0,0,0,137,138,1,0,0,0,138,139,1,0,0,0,139,141,5,46,0,0,140,142,7,1,
  	0,0,141,140,1,0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,
  	44,1,0,0,0,145,146,5,39,0,0,146,147,7,2,0,0,147,148,5,39,0,0,148,46,1,
  	0,0,0,149,151,7,2,0,0,150,149,1,0,0,0,151,152,1,0,0,0,152,150,1,0,0,0,
  	152,153,1,0,0,0,153,48,1,0,0,0,154,156,5,13,0,0,155,157,5,10,0,0,156,
  	155,1,0,0,0,156,157,1,0,0,0,157,160,1,0,0,0,158,160,5,10,0,0,159,154,
  	1,0,0,0,159,158,1,0,0,0,160,161,1,0,0,0,161,162,6,24,0,0,162,50,1,0,0,
  	0,163,165,7,3,0,0,164,163,1,0,0,0,165,166,1,0,0,0,166,164,1,0,0,0,166,
  	167,1,0,0,0,167,168,1,0,0,0,168,169,6,25,0,0,169,52,1,0,0,0,170,171,5,
  	47,0,0,171,172,5,42,0,0,172,176,1,0,0,0,173,175,9,0,0,0,174,173,1,0,0,
  	0,175,178,1,0,0,0,176,177,1,0,0,0,176,174,1,0,0,0,177,179,1,0,0,0,178,
  	176,1,0,0,0,179,180,5,42,0,0,180,181,5,47,0,0,181,182,1,0,0,0,182,183,
  	6,26,0,0,183,54,1,0,0,0,184,185,5,47,0,0,185,186,5,47,0,0,186,190,1,0,
  	0,0,187,189,8,4,0,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,
  	191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,6,27,0,0,194,56,1,
  	0,0,0,12,0,91,124,132,137,143,152,156,159,166,176,190,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  synthtaxlexerLexerStaticData = staticData.release();
}

}

SynthtaxLexer::SynthtaxLexer(CharStream *input) : Lexer(input) {
  SynthtaxLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *synthtaxlexerLexerStaticData->atn, synthtaxlexerLexerStaticData->decisionToDFA, synthtaxlexerLexerStaticData->sharedContextCache);
}

SynthtaxLexer::~SynthtaxLexer() {
  delete _interpreter;
}

std::string SynthtaxLexer::getGrammarFileName() const {
  return "SynthtaxLexer.g4";
}

const std::vector<std::string>& SynthtaxLexer::getRuleNames() const {
  return synthtaxlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SynthtaxLexer::getChannelNames() const {
  return synthtaxlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SynthtaxLexer::getModeNames() const {
  return synthtaxlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SynthtaxLexer::getVocabulary() const {
  return synthtaxlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SynthtaxLexer::getSerializedATN() const {
  return synthtaxlexerLexerStaticData->serializedATN;
}

const atn::ATN& SynthtaxLexer::getATN() const {
  return *synthtaxlexerLexerStaticData->atn;
}




void SynthtaxLexer::initialize() {
  ::antlr4::internal::call_once(synthtaxlexerLexerOnceFlag, synthtaxlexerLexerInitialize);
}
