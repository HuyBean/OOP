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
    RemoveSpecialCharsParser()
    {
        vector<char> vChar;
        AP = RemoveSpecialChars(vChar);
    }
    string parsedObjectName()
    {
        return "RemoveSpecialChars";
    }
    IRule *parse(string token)
    {
        vector<string> sub = Utils::String::split(token, "=");
        vector<char> vToken;
        vToken.resize(sub[1].length());
        for (int i = 0; i < sub[1].length(); i++)
        {
            vToken[i] = sub[1][i];
        }
        RemoveSpecialChars *ap = new RemoveSpecialChars(vToken);
        return ap;
    }
    string toString()
    {
        return "RemoveSpecialCharsParser";
    }
};

#endif