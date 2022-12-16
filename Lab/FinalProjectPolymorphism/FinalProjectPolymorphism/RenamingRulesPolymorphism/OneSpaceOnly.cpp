#include "OneSpaceOnly.h"

OneSpaceOnly::OneSpaceOnly()
{
}
string OneSpaceOnly::toString()
{
    return "OneSpaceOnly";
}
string OneSpaceOnly::rename(string name)
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