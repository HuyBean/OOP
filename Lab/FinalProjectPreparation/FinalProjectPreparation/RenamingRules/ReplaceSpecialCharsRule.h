#include "RenamingRules.h"

class ReplaceSpecialCharsRule : public RenamingRules
{
private:
    vector<string> special;
    string replacement;

public:
    ReplaceSpecialCharsRule();
    vector<string> &specialChars();
    void setReplacement(string replace);
    string Rename(string origin);
};
