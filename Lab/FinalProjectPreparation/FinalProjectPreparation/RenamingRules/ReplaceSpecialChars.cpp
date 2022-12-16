#include "ReplaceSpecialCharsRule.h"

ReplaceSpecialCharsRule::ReplaceSpecialCharsRule()
{
    special.resize(0);
}

vector<string> &ReplaceSpecialCharsRule::specialChars()
{
    return this->special;
}
void ReplaceSpecialCharsRule::setReplacement(string replace)
{
    this->replacement = replace;
    return;
}

string ReplaceSpecialCharsRule::Rename(string origin)
{
    string res = origin;
    for (int i = 0; i < this->specialChars().size(); i++)
    {
        for (int j = 0; j < res.length(); j++)
        {
            if (j == res.find(this->special[i]))
            {
                res.replace(j, 1, this->replacement);
            }
        }
    }
    return res;
}