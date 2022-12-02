#ifndef POINT
#define POINT

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Point
{
private:
    float m_x;
    float m_y;

public:
    Point()
    {
        this->m_x = this->m_y = 0;
    }
    Point(float x, float y)
    {
        this->m_x = x;
        this->m_y = y;
    }
    Point(const Point &P)
    {
        this->m_x = P.m_x;
        this->m_y = P.m_y;
    }
    Point &operator=(Point P)
    {
        this->m_x = P.m_x;
        this->m_y = P.m_y;
        return *this;
    }
    friend ostream &operator<<(ostream &out, Point &P)
    {
        out << P.m_x << ", " << P.m_y;
        return out;
    }
};

#endif