#ifndef IPARSABLE
#define IPARSABLE

#include "Object.h"
#include "Utils.h"
#include "Employee.h"

class IParsable : public Object
{
public:
    virtual Employee *parse(string token) = 0;
    virtual string toString() = 0;
    virtual string parsedObjectName() = 0;
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