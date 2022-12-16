#include "RenamingRules.h"

class AddPrefixRule : public RenamingRules
{
private:
    string prefix;

public:
    AddPrefixRule();
    void setPrefix(string Prefix);
    string Rename(string origin);
};