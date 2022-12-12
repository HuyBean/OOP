#ifndef INTEGER
#define INTEGER

#include "Object.h"

class Integer : public Object
{
private:
    int _value;

public:
    Integer(int I)
    {
        this->_value = I;
    }

    int value()
    {
        return this->_value;
    }
    
    string toString()
    {
        return to_string(this->_value);
    }
};

#endif