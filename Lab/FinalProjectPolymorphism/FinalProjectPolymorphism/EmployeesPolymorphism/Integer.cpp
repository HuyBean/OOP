#include "Integer.h"

Integer::Integer(int I)
{
    this->_value = I;
}

int Integer::value()
{
    return this->_value;
}

string Integer::toString()
{
    return to_string(this->_value);
}