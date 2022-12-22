#ifndef BANK_SAVING
#define BANK_SAVING

#include "Object.h"

using namespace std;

class Bank : public Object
{
protected:
    string _name;
    vector<double> _interest;

protected:
    int term;
    int month;
    double deposit;

public:
    Bank();
    Bank(string name, vector<double> interest);
    Bank(string n, vector<double> inte, int ter, int mon, double depo);
    Bank(const Bank &B);
    Bank &operator=(Bank B);
    double getInterestByMonth(int mon);
    int findMonthHighestInterestTerm2();
    double calcInterestEveryday(double inte);
    int findMonthHighestInterest();
    vector<double> getInterestOfBank();
    double calcMoney(int mon, double money);
    string toString();
    void sendDeposit(double depo);
    void printRate();
};
#endif