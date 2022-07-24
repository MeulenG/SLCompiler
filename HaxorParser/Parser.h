#ifndef PARSER_H
#define PARSER_H

#include "../cpplibs/Essentials.h"
#include "../HaxorLexer/Lexer.h"
/// CurTok/getNextToken - Provide a simple token buffer.  CurTok is the current
/// token the parser is looking at.  getNextToken reads another token from the
/// lexer and updates CurTok with its results.
static int CurTok;
static int getNextToken() { return CurTok = gettok(); }

/// BinopPrecedence - This holds the precedence for each binary operator that is
/// defined.
static std::map<char, int> BinopPrecedence;

void MainLoop();

#endif