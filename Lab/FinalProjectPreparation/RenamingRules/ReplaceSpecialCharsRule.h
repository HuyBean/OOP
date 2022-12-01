#include "RenamingRules.h"

class ReplaceSpecialCharsRule : public RenamingRules
{
private:
    vector<string> special;
    string replacement;

public:
    ReplaceSpecialCharsRule()
    {
        special.resize(0);
    }

    vector<string> &specialChars()
    {
        return this->special;
    }
    void setReplacement(string replace)
    {
        this->replacement = replace;
        return;
    }

    string Rename(string origin)
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
};
