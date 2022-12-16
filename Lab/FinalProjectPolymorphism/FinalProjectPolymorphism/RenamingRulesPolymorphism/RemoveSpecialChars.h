#ifndef REMOVE_SPECIAL_CHARS
#define REMOVE_SPECIAL_CHARS

#include "IRule.h"

class RemoveSpecialChars : public IRule
{
private:
    int size;
    vector<char> chList;

public:
    RemoveSpecialChars();
    RemoveSpecialChars(vector<char> vList);
    RemoveSpecialChars(const RemoveSpecialChars &R);
    string rename(string name);
    string toString();
};

#endif