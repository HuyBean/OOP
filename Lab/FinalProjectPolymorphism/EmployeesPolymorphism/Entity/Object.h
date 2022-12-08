#ifndef OBJECT
#define OBJECT

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Object
{
public:
    virtual string toString() = 0;
};

#endif