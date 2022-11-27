#ifndef SEAT
#define SEAT

#include <iostream>
using namespace std;

class Seat
{
private:
    int m_row;
    int m_col;
    float m_price;
    bool book;

public:
    Seat();
    Seat(int, int, float);
    Seat(const Seat &S);
    void setPrice(float price);
    Seat &operator=(Seat);
    void bookPlace();
    bool situation();
    float getPrice();
};
#endif