#ifndef PRACTICE_3_1
#define PRACTICE_3_1

#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_num;
    int m_den;

public:
    Fraction();
    Fraction(int N = 0, int D = 1);
    Fraction(int Num, int Den);
    Fraction(int);
    Fraction(const Fraction &frac);
};

#endif