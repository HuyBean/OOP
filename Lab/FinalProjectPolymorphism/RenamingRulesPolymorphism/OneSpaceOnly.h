#ifndef ONE_SPACE_ONLY
#define ONE_SPACE_ONLY

#include "IRule.h"

class OneSpaceOnly : public IRule
{
private:
public:
    OneSpaceOnly()
    {
    }
    string toString()
    {
        return "OneSpaceOnly";
    }
    string rename(string name)
    {
        string res;
        string word;
        istringstream ss(name);

        while (ss >> word)
        {
            if (!res.empty())
            {
                res += ' ';
            }
            res += word;
        }

        return res;
    }
};

#endif