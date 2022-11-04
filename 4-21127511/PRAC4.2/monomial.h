#ifndef MONOMIAL_OPERATOR
#define MONOMIAL_OPERATOR

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Monomial
{
private:
    int m_coef;
    int m_expo;

public:
    Monomial();
    Monomial(int, int);
    bool operator>(Monomial);
    bool operator<(Monomial);
    bool operator==(Monomial);
    bool operator>=(Monomial);
    bool operator<=(Monomial);
    bool operator!=(Monomial);
};
Monomial::Monomial()
{
    this->m_coef = 1;
    this->m_expo = 1;
}
Monomial::Monomial(int C, int E)
{
    this->m_coef = C;
    this->m_expo = E;
}
#endif