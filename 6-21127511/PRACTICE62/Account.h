#ifndef ACCOUNT
#define ACCOUNT

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <math.h>

using namespace std;

class Account
{
private:
    float m_balance;

protected:
    void setBalance(float balance)
    {
        m_balance = balance;
    }

public:
    Account()
    {
        m_balance = 0;
    }
    Account(int balance)
    {
        m_balance = balance;
    }

    float getBalance()
    {
        return m_balance;
    }
    void deposit(float money)
    {
        m_balance += money;
    }
    void withdraw(float money)
    {
        if (money <= m_balance)
        {
            m_balance -= money;
        }
    }
};

class SavingAccount : public Account
{
private:
    int m_period;
    float m_rate;
    int m_duration;

public:
    SavingAccount()
    {
        m_period = 0;
        m_rate = 0.1;
        m_duration = 0;
    }
    SavingAccount(int p, float r, int d, float b)
    {
        Account::setBalance(b);
        m_period = p;
        m_rate = r;
        m_duration = d;
    }
    float calInterest()
    {
        return Account::getBalance() * (pow(1 + m_rate * (m_period / 12.0), m_duration / m_period) - 1);
    }
    void deposit(float money)
    {
        float interest = calInterest();
        Account::deposit(money + interest);
        m_duration = 0;
    }
    void withdraw(float money)
    {
        float interest = calInterest();
        if (money <= Account::getBalance() + interest)
        {
            Account::withdraw(money - interest);
            m_duration = 0;
        }
    }
    void increaseDuration()
    {
        m_duration += 1;
    }
};

#endif