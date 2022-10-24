#ifndef PRACTICE_2_1
#define PRACTICE_2_1

#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int den;

public:
    Fraction(int n = 0, int d = 1);
    void input();
    void output();
    int getNum();
    void setNum();
    int getDenom();
    void setDenom();
    Fraction reduce();
    Fraction inverse();
    Fraction add(Fraction);
    int compare(Fraction);
};

#endif
