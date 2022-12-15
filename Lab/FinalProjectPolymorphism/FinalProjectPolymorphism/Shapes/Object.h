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
    Object()
    {

    }
};

double findNum(string Seq)
{
    string Num = "";
    for (int i = Seq.find("=") + 1; i < Seq.size(); i++)
    {
        Num += Seq[i];
    }
    return stod(Num);
}

#endif