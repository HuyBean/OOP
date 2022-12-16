#include "RenamingRules.h"

class OneSpaceRule : public RenamingRules
{
private:
public:
    OneSpaceRule();
    string Rename(string origin);
};
