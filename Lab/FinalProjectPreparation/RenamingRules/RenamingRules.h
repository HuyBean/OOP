#ifndef RENAMING_RULES
#define RENAMING_RULES

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class RenamingRules
{
public:
    virtual string Rename(string origin) = 0;
    // virtual vector<string> &specialChars() = 0;
};
#endif