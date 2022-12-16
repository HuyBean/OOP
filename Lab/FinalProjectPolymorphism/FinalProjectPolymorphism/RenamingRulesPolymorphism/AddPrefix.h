#ifndef ADD_PREFIX
#define ADD_PREFIX

#include "IRule.h"

class AddPrefix : public IRule
{
private:
    string _prefix;

public:
    AddPrefix();
    AddPrefix(string pre);
    AddPrefix(const AddPrefix &Add);
    string toString();
    string rename(string name);
};

#endif