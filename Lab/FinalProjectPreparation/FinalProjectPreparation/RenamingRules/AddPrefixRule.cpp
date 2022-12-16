#include "AddPrefixRule.h"

AddPrefixRule::AddPrefixRule()
{
    this->prefix = " ";
}
void AddPrefixRule::setPrefix(string Prefix)
{
    this->prefix = Prefix;
}
string AddPrefixRule::Rename(string origin)
{
    return prefix + " " + origin;
}