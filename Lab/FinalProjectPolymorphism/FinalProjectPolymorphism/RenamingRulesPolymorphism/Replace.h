#ifndef REPLACE
#define REPLACE

#include "IRule.h"

class Replace : public IRule
{
private:
    string _replace;
    string _newstring;

public:
    Replace()
    {
        this->_newstring = " ";
        this->_replace = " ";
    }
    Replace(string r, string n)
    {
        this->_newstring = n;
        this->_replace = r;
    }
    Replace(const Replace &R)
    {
        this->_newstring = R._newstring;
        this->_replace = R._replace;
    }
    string rename(string name)
    {
        string result = name;
        result = result.replace(result.find(this->_replace, this->_replace.length()), this->_replace.length(), this->_newstring);
        return result;
    }
    string toString()
    {
        return "Replace";
    }
};

#endif