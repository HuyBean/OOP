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
        Fraction(int N = 0, int den = 1);
        Fraction(const Fraction &frac);
};

#endif