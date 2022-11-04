#ifndef FRACTION_OPERATOR
#define FRACTION_OPERATOR

#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_num;
    int m_den;

public:
    Fraction();
    Fraction(int);
    Fraction(int, int);
    Fraction operator+(Fraction);
    Fraction operator*(Fraction);
    bool operator>(Fraction);
    bool operator<(Fraction);
    bool operator==(Fraction);
    bool operator>=(Fraction);
    bool operator<=(Fraction);
    bool operator!=(Fraction);
    Fraction &operator=(Fraction);
    Fraction &operator+=(Fraction);
    Fraction &operator*=(Fraction);
    Fraction &operator++();
    Fraction operator++(int);
    Fraction &operator--();
    Fraction operator--(int);
    operator float();
    operator int();
    friend ostream &operator<<(ostream &, const Fraction &);
    friend istream &operator>>(istream &, Fraction &);
};

#endif