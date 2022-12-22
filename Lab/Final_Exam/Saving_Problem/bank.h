#ifndef bank_h
#define bank_h

#include <string>
#include "saving.h"
#include <vector>
using namespace std;

class Bank : public Saving
{
protected:
    string _name;
    int _term; // 1.Undetermined  2.Short term (1-6 months)  3.Long term( > 6 months)
    vector<float> _interest;
    double _money;

public:
    Bank()
    {
        _name = "";
        _term = 0;
        _money = 0;
    }
    Bank(vector<float> interest)
    {
        _interest = interest;
        _name = "";
        _term = 0;
        _money = 0;
    }
    Bank(string name, vector<float> interest)
    {
        _name = name;
        _interest = interest;
    }
    virtual float getInterest(int month)
    {
        if (month == 0)
            return _interest[0];
        else if (month == 1)
            return _interest[1];
        else if (month == 2)
            return _interest[2];
        else if (month == 3)
            return _interest[3];
        else if (month == 6)
            return _interest[4];
        else if (month == 12)
            return _interest[5];
        else if (month == 18)
            return _interest[6];
        else
            return _interest[7];
    }
    virtual double calMoney(int month)
    {
        return _money * month;
    }
    virtual vector<float> getInterest()
    {
        return this->_interest;
    }
    virtual double getMoney(int month)
    { // = 20.000.000 * 0.063 / 12 * 6 + 20.000.000
        return _money * (this->getInterest(month) / 100) * month + _money;
    }
    virtual void deposit(double money)
    { // gui tien
        _money = money;
    }
    string toString()
    {
        return "Bank";
    }
};

class Vietcombank : public Bank
{
public:
    Vietcombank()
    {
        _name = "Vietcombank";
        _term = 0;
        _money = 0;
    }
    Vietcombank(vector<float> interest)
    {
        _interest = interest;
        _name = "Vietcombank";
        _term = 0;
        _money = 0;
    }
    Vietcombank(int term, vector<float> interest, double money)
    {
        _term = term;
        _interest = interest;
        _money = money;
    }
    string toString()
    {
        return _name;
    }
};

class Agribank : public Bank
{
public:
    Agribank()
    {
        _name = "Agribank";
        _term = 0;
        _money = 0;
    }
    Agribank(vector<float> interest)
    {
        _interest = interest;
        _name = "Agribank";
        _term = 0;
        _money = 0;
    }
    Agribank(int term, vector<float> interest, double money)
    {
        _term = term;
        _interest = interest;
        _money = money;
    }
    string toString()
    {
        return _name;
    }
};

class Techcombank : public Bank
{
public:
    Techcombank()
    {
        _name = "Techcombank";
        _term = 0;
        _money = 0;
    }
    Techcombank(vector<float> interest)
    {
        _interest = interest;
        _name = "Techcombank";
        _term = 0;
        _money = 0;
    }
    Techcombank(int term, vector<float> interest, double money)
    {
        _term = term;
        _interest = interest;
        _money = money;
    }
    string toString()
    {
        return _name;
    }
};

class ACB : public Bank
{
public:
    ACB()
    {
        _name = "ACB";
        _term = 0;
        _money = 0;
    }
    ACB(vector<float> interest)
    {
        _interest = interest;
        _name = "ACB";
        _term = 0;
        _money = 0;
    }
    ACB(int term, vector<float> interest, double money)
    {
        _term = term;
        _interest = interest;
        _money = money;
    }
    string toString()
    {
        return _name;
    }
};

#endif