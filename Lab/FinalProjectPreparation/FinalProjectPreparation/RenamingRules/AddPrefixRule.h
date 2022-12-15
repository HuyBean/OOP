#include "RenamingRules.h"

class AddPrefixRule : public RenamingRules
{
private:
    string prefix;

public:
    AddPrefixRule()
    {
        this->prefix = " ";
    }
    void setPrefix(string Prefix)
    {
        this->prefix = Prefix;
    }
    string Rename(string origin)
    {
        return prefix + " " + origin;
    }
};