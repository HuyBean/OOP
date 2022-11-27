#include "seat.h"

Seat::Seat()
{
    m_row = 0;
    m_col = 0;
    m_price = 0;
    book = false;
}
Seat::Seat(int r, int c, float p)
{
    m_row = r;
    m_col = c;
    m_price = p;
    book = false;
}
Seat::Seat(const Seat &S)
{
    m_row = S.m_row;
    m_col = S.m_col;
    m_price = S.m_price;
    book = S.book;
}

void Seat::setPrice(float price)
{
    m_price = price;
}

Seat &Seat::operator=(Seat S)
{
    m_row = S.m_row;
    m_col = S.m_col;
    m_price = S.m_price;
    book = S.book;
    return *this;
}
void Seat::bookPlace()
{
    this->book = true;
}

bool Seat::situation()
{
    return this->book;
}

float Seat::getPrice()
{
    return this->m_price;
}