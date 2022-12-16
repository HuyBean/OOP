#ifndef REPLACE
#define REPLACE

#include "IRule.h"

class Replace : public IRule
{
private:
    string _replace;
    string _newstring;

public:
    Replace();
    Replace(string r, string n);
    Replace(const Replace &R);
    string rename(string name);
    string toString();
};

#endif