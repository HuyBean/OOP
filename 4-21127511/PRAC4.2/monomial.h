#ifndef MONOMIAL_OPERATOR
#define MONOMIAL_OPERATOR

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Monomial
{
private:
    double m_coef;
    double m_expo;

public:
    Monomial();
    Monomial(int, int);
    Monomial operator+(const Monomial &);
    Monomial operator*(const Monomial &);
    bool operator>(const Monomial &);
    bool operator<(const Monomial &);
    bool operator==(const Monomial &);
    bool operator>=(const Monomial &);
    bool operator<=(const Monomial &);
    bool operator!=(const Monomial &);
    Monomial &operator=(Monomial);
    Monomial &operator+=(Monomial);
    Monomial &operator*=(Monomial);
    Monomial &operator++();
    Monomial operator++(int);
    Monomial &operator--();
    Monomial operator--(int);
    Monomial &operator!();
    friend ostream &operator<<(ostream &, const Monomial &);
    friend istream &operator>>(istream &, Monomial &);
};

#endif