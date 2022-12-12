#ifndef ADD_PREFIX
#define ADD_PREFIX

#include "IRule.h"

class AddPrefix : public IRule
{
private:
    string _prefix;

public:
    AddPrefix()
    {
        _prefix = "";
    }
    AddPrefix(string pre)
    {
        this->_prefix = pre;
    }
    AddPrefix(const AddPrefix &Add)
    {
        this->_prefix = Add._prefix;
    }
    string toString()
    {
        return "prefix";
    }
    string rename(string name)
    {
        return this->_prefix + " " + name;
    }
};

#endif