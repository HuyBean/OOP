#include "fraction.h"

Fraction::Fraction()
{
    this->m_den = 1;
    this->m_num = 0;
}
Fraction::Fraction(int N)
{
    this->m_den = 1;
    this->m_num = N;
}
Fraction::Fraction(int N, int D)
{
    this->m_den = D ? D : 1;
    this->m_num = N;
}
// Arithmetic

Fraction Fraction::operator+(Fraction p)
{
    Fraction temp;
    temp.m_num = this->m_den * p.m_num + this->m_num * p.m_den;
    temp.m_den = this->m_den * p.m_den;
    return temp;
}
Fraction Fraction::operator*(Fraction p)
{
    Fraction temp;
    temp.m_num = this->m_num * p.m_num;
    temp.m_den = this->m_den * p.m_den;
    return temp;
}

// Comparison

bool Fraction::operator>(Fraction p)
{
    return ((double)this->m_num / this->m_den) > ((double)p.m_num / p.m_den);
}

bool Fraction::operator<(Fraction p)
{
    return ((double)this->m_num / this->m_den) < ((double)p.m_num / p.m_den);
}

bool Fraction::operator==(Fraction p)
{
    return ((double)this->m_num / this->m_den) == ((double)p.m_num / p.m_den);
}

bool Fraction::operator>=(Fraction p)
{
    return ((double)this->m_num / this->m_den) >= ((double)p.m_num / p.m_den);
}

bool Fraction::operator<=(Fraction p)
{
    return ((double)this->m_num / this->m_den) <= ((double)p.m_num / p.m_den);
}

bool Fraction::operator!=(Fraction p)
{
    return ((double)this->m_num / this->m_den) != ((double)p.m_num / p.m_den);
}

// Assignment

Fraction &Fraction::operator=(Fraction p)
{
    this->m_den = p.m_den;
    this->m_num = p.m_num;
    return *this;
}

Fraction &Fraction::operator+=(Fraction p)
{
    this->m_num = this->m_den * p.m_num + this->m_num * p.m_den;
    this->m_den = this->m_den * p.m_den;
    return *this;
}

Fraction &Fraction::operator*=(Fraction p)
{
    this->m_den *= p.m_den;
    this->m_num *= p.m_num;
    return *this;
}

// Inc/ Dec ++ -- (1 unit)

Fraction &Fraction::operator++()
{
    this->m_num += this->m_den;
    return *this;
}

Fraction Fraction::operator++(int)
{
    Fraction temp = *this;
    ++(*this);
    return temp;
}
Fraction &Fraction::operator--()
{
    this->m_num -= this->m_den;
    return *this;
}

Fraction Fraction::operator--(int)
{
    Fraction temp = *this;
    --(*this);
    return temp;
}

// Type - cast
Fraction::operator float()
{
    return (float)this->m_num / this->m_den;
}

Fraction::operator int()
{
    return (int)this->m_num / this->m_den;
}

// Input / Output
ostream &operator<<(ostream &out, const Fraction &p)
{
    if (p.m_den == 0)
    {
        out << "-1";
    }
    else
    {
        out << p.m_num << "/" << p.m_den;
    }
    return out;
}

istream &operator>>(istream &in, Fraction &p)
{
    cout << "Input numerator: ";
    in >> p.m_num;
    cout << "Input denominator: ";
    in >> p.m_den;
    return in;
}