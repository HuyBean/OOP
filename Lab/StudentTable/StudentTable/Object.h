#ifndef OBJECT_STUDENT
#define OBJECT_STUDENT

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <memory>

using namespace std;

class Object
{
public:
    virtual string toString() = 0;
};

bool isDigit(char ch);

#endif