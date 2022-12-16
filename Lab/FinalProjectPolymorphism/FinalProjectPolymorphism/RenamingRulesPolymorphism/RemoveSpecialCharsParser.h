#ifndef REMOVE_SPECIAL_CHARS_PARSER
#define REMOVE_SPECIAL_CHARS_PARSER

#include "IParsable.h"
#include "RemoveSpecialChars.h"
#include "Utils.h"

class RemoveSpecialCharsParser : public IParsable
{
private:
    RemoveSpecialChars AP;

public:
    RemoveSpecialCharsParser();
    string parsedObjectName();
    IRule *parse(string token);
    string toString();
};

#endif