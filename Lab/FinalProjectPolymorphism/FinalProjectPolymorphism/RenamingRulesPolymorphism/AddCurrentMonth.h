#ifndef ADD_CURRENT_MONTH
#define ADD_CURRENT_MONTH

#include "IRule.h"
#include "time.h"

class ACM : public IRule
{
private:
    int month;
    int year;

public:
    ACM();
    ACM(int m, int y);
    ACM(const ACM &A);
    string toString();
    string rename(string name);
};
#endif