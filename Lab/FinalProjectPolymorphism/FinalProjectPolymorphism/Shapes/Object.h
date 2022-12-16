#ifndef SHAPE_POLYMORPHISM
#define SHAPE_POLYMORPHISM

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Utils.h"
using namespace std;

class Object
{
public:
    virtual string toString() = 0;
    Object();
};

double findNum(string Seq);


#endif