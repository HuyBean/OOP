#ifndef ADD_CURRENT_MONTH
#define ADD_CURRENT_MONTH

#include "IRule.h"
#include "time.h"

class ACM : public IRule
{
private:
    int month;
    int year;

public:
    ACM()
    {
        time_t now = time(0);

        tm *ltm = localtime(&now);
        this->month = 1 + ltm->tm_mon;
        this->year = 1900 + ltm->tm_year;
    }
    ACM(int m, int y)
    {
        this->month = m;
        this->year = y;
    }
    ACM(const ACM &A)
    {
        this->month = A.month;
        this->year = A.year;
    }
    string toString()
    {
        string y = to_string(this->year % 2000);
        string m = to_string(this->month);
        return m + y;
    }
    string rename(string name)
    {
        string res = "";
        string add = this->toString();
        if (name.find("CV") == -1)
        {
            res = add + " " + name;
            return res;
        }
        else
        {
            int pos = name.find("CV");
            res = name;
            res.insert(pos + 3, add);
            return res;
        }
    }
};
#endif