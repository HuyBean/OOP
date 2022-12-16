#include "Replace.h"

Replace::Replace()
{
    this->_newstring = " ";
    this->_replace = " ";
}
Replace::Replace(string r, string n)
{
    this->_newstring = n;
    this->_replace = r;
}
Replace::Replace(const Replace &R)
{
    this->_newstring = R._newstring;
    this->_replace = R._replace;
}
string Replace::rename(string name)
{
    string result = name;
    result = result.replace(result.find(this->_replace, this->_replace.length()), this->_replace.length(), this->_newstring);
    return result;
}
string Replace::toString()
{
    return "Replace";
}