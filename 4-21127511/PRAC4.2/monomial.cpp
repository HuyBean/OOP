#include "monomial.h"

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

// Arithmetic
Monomial Monomial::operator+(const Monomial &M)
{
    Monomial temp;
    temp.m_coef = this->m_coef + M.m_coef;
    temp.m_expo = this->m_expo;
    return temp;
}

Monomial Monomial::operator*(const Monomial &M)
{
    Monomial temp;
    temp.m_coef = this->m_coef * M.m_coef;
    temp.m_expo = this->m_expo + M.m_expo;
    return temp;
}

// Comparison
bool Monomial::operator>(const Monomial &M)
{
    float x;
    cout << "Input x: ";
    cin >> x;
    return (this->m_coef * pow(x, this->m_expo) > M.m_coef * pow(x, M.m_expo));
}

bool Monomial::operator<(const Monomial &M)
{
    float x;
    cout << "Input x: ";
    cin >> x;
    return (this->m_coef * pow(x, this->m_expo) < M.m_coef * pow(x, M.m_expo));
}

bool Monomial::operator==(const Monomial &M)
{
    return (M.m_coef == this->m_coef && this->m_expo == M.m_expo);
}

bool Monomial::operator>=(const Monomial &M)
{
    float x;
    cout << "Input x: ";
    cin >> x;
    return (this->m_coef * pow(x, this->m_expo) >= M.m_coef * pow(x, M.m_expo));
}

bool Monomial::operator<=(const Monomial &M)
{
    float x;
    cout << "Input x: ";
    cin >> x;
    return (this->m_coef * pow(x, this->m_expo) <= M.m_coef * pow(x, M.m_expo));
}

bool Monomial::operator!=(const Monomial &M)
{
    float x;
    cout << "Input x: ";
    cin >> x;
    return (this->m_coef * pow(x, this->m_expo) != M.m_coef * pow(x, M.m_expo));
}

// Assignment
Monomial &Monomial::operator=(Monomial M)
{
    this->m_coef = M.m_coef;
    this->m_expo = M.m_expo;
    return *this;
}

Monomial &Monomial::operator+=(Monomial M)
{
    this->m_coef += M.m_coef;

    return *this;
}
Monomial &Monomial::operator*=(Monomial M)
{
    this->m_coef *= M.m_coef;
    this->m_expo += M.m_expo;
    return *this;
}

// Inc / Dec
Monomial &Monomial::operator++()
{
    this->m_expo = ++this->m_expo;
    return *this;
}

Monomial Monomial::operator++(int)
{
    Monomial temp = *this;
    ++(*this);
    return temp;
}

Monomial &Monomial::operator--()
{
    this->m_expo = --this->m_expo;
    return *this;
}

Monomial Monomial::operator--(int)
{
    Monomial temp = *this;
    --(*this);
    return temp;
}

Monomial &Monomial::operator!()
{
    this->m_coef *= this->m_expo;
    this->m_expo = --this->m_expo;
    return *this;
}

// Input / Output
ostream &operator<<(ostream &out, const Monomial &M)
{
    if (M.m_expo == 1)
    {
        (M.m_coef <= 1) ? out << " " : out << M.m_coef;
        out << "x";
        return out;
    }
    if (M.m_expo == 0)
    {
        (M.m_coef == 0) ? out << "0" : out << M.m_coef;
        return out;
    }
    out << M.m_coef << "x^" << M.m_expo;
    return out;
}

istream &operator>>(istream &in, Monomial &M)
{
    cout << "Input coefficient:";
    in >> M.m_coef;
    cout << "Input exponient: ";
    in >> M.m_expo;
    return in;
}