#ifndef INTEGER
#define INTEGER

#include "Object.h"

class Integer : public Object
{
private:
    int _value;

public:
    Integer(int);
    int value();
    string toString()
    {
        return to_string(this->_value);
    }
};

Integer::Integer(int I)
{
    this->_value = I;
}

int Integer::value()
{
    return this->_value;
}

#endif