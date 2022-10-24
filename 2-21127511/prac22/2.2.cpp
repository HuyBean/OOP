#include "2.2.h"

Monomial::Monomial(int C, int E)
{
    this->Coef = C;
    this->Expo = E;
}

void Monomial::input()
{
    cout << "Coefficient: ";
    cin >> this->Coef;
    cout << "Exponient: ";
    cin >> this->Expo;
    return;
}

void Monomial::output()
{
    if (this->Expo == 1)
    {
        cout << "The monomial is: " << this->Coef << "x\n";
        return;
    }
    if (this->Expo == 0)
    {
        cout << "The monomial is: " << this->Coef << "\n";
        return;
    }
    cout << "The monomial is: " << this->Coef << "x^" << this->Expo << "\n";
    return;
}

int Monomial::getCoef()
{
    return this->Coef;
}

void Monomial::setCoef()
{
    cout << "Update coefficient: ";
    cin >> this->Coef;
}

int Monomial::getExpo()
{
    return this->Expo;
}

void Monomial::setExpo()
{
    cout << "Update exponient: ";
    cin >> this->Expo;
}

float Monomial::evaluate(float x)
{
    return (float)(this->Expo * (pow(x, this->Expo)));
}

Monomial Monomial::derive()
{
    Monomial Tmp;
    if (this->Expo > 1)
    {
        Tmp.Coef = (int)(this->Coef * this->Expo);
        Tmp.Expo = this->Expo - 1;
        return Tmp;
    }
    if (this->Expo == 1)
    {
        return Monomial(this->Coef, 0);
    }
    return Monomial();
}
Monomial Monomial::mul(Monomial M)
{
    Monomial Res;
    Res.Coef = this->Coef * M.Coef;
    Res.Expo = this->Expo + M.Expo;
    return Res;
}