#include "Bank.h"

Bank::Bank()
{
    _name = "";
    term = 0;
    month = 0;
    deposit = 0;
}
Bank::Bank(string name, vector<double> interest)
{
    _name = name;
    _interest = interest;
}
Bank::Bank(string n, vector<double> inte, int ter, int mon, double depo)
{
    _name = n;
    _interest = inte;
    term = ter;
    month = mon;
    deposit = depo;
}
Bank::Bank(const Bank &B)
{
    _name = B._name;
    _interest = B._interest;
    term = B.term;
    month = B.month;
    deposit = B.deposit;
}
Bank &Bank::operator=(Bank B)
{
    _name = B._name;
    _interest = B._interest;
    term = B.term;
    month = B.month;
    deposit = B.deposit;
    return *this;
}
double Bank::getInterestByMonth(int mon)
{
    switch (mon)
    {
    case 0:
        return this->_interest[0];
        break;
    case 1:
        return this->_interest[1];
        break;
    case 2:
        return this->_interest[2];
        break;
    case 3:
        return this->_interest[3];
        break;
    case 6:
        return this->_interest[4];
        break;
    case 12:
        return this->_interest[5];
        break;
    case 18:
        return this->_interest[6];
        break;
    case 24:
        return this->_interest[7];
        break;
    default:
        return getInterestByMonth(findMonthHighestInterest());
        break;
    }
}
int Bank::findMonthHighestInterestTerm2()
{
    double maxInterest = 0;
    int posMonth = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (this->_interest[i] > maxInterest)
        {
            maxInterest = this->_interest[i];
            posMonth = i;
        }
    }
    int res = 0;
    switch (posMonth)
    {
    case 0:
        res = 0;
        break;
    case 1:
        res = 1;
        break;
    case 2:
        res = 2;
        break;
    case 3:
        res = 3;
        break;
    case 4:
        res = 6;
        break;
    default:
        res = 0;
        break;
    }
    return res;
}
double Bank::calcInterestEveryday(double inte)
{
    return 1000000 * inte * 1.0 / 36500;
}
int Bank::findMonthHighestInterest()
{
    double maxInterest = 0;
    int posMonth = 0;
    for (int i = 5; i < this->_interest.size(); i++)
    {
        if (this->_interest[i] > maxInterest)
        {
            maxInterest = this->_interest[i];
            posMonth = i;
        }
    }
    int res = 0;
    switch (posMonth)
    {
    case 5:
        res = 12;
        break;
    case 6:
        res = 18;
        break;
    case 7:
        res = 24;
        break;
    default:
        res = 0;
        break;
    }
    return res;
}
vector<double> Bank::getInterestOfBank()
{
    return this->_interest;
}
double Bank::calcMoney(int mon, double money)
{
    return (money * this->getInterestByMonth(mon) * 1.0 / 100) / 12 * mon + money;
}
string Bank::toString()
{
    return "Bank";
}
void Bank::sendDeposit(double depo)
{
    deposit += depo;
}
void Bank::printRate()
{
    for (int i = 0; i < this->_interest.size(); i++)
    {

        cout << _interest[i] << "\t";
    }
}