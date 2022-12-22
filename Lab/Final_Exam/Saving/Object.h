#ifndef OBJECT
#define OBJECT

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Object
{
public:
    virtual string toString() = 0;
};


#endif