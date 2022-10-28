#include "3.1.h"

Fraction::Fraction()
{
    this->m_den = 1;
    this->m_num = 0;
}
Fraction::Fraction(int N = 0, int D = 1)
{
    this->m_den = D;
    this->m_num = N;
}

Fraction::Fraction(int N, int D)
{
    this->m_num = N;
    this->m_den = D;
}
Fraction::Fraction(int F)
{
    this->m_num = F;
    this->m_den = 1;
}
Fraction::Fraction(const Fraction &frac)
{
    *this = frac;
}