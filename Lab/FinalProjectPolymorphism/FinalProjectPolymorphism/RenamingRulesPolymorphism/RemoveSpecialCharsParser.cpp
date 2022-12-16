#include "RemoveSpecialCharsParser.h"

RemoveSpecialCharsParser::RemoveSpecialCharsParser()
{
    vector<char> vChar;
    AP = RemoveSpecialChars(vChar);
}
string RemoveSpecialCharsParser::parsedObjectName()
{
    return "RemoveSpecialChars";
}
IRule *RemoveSpecialCharsParser::parse(string token)
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
string RemoveSpecialCharsParser::toString()
{
    return "RemoveSpecialCharsParser";
}