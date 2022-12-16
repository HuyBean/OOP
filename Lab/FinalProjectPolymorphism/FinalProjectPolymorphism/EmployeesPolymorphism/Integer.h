#ifndef INTEGER
#define INTEGER

#include "Object.h"

class Integer : public Object
{
private:
    int _value;

public:
    Integer(int I);
    int value();
    string toString();
};

#endif