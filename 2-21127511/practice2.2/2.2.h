#ifndef PRACTICE_2_2
#define PRACTICE_2_2

#include <iostream>
using namespace std;

class Monomial
{
private:
    int Coef;
    int Expo;

public:
    Monomial(int C = 0, int E = 1);
    void input();
    void output();
    int getCoef();
    void setCoef();
    int getExpo();
    void setExpo();
    float evaluate(float);
    Monomial derive();
    Monomial mul(Monomial);
};

#endif
