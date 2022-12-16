#include "AddPrefix.h"

AddPrefix::AddPrefix()
{
    _prefix = "";
}
AddPrefix::AddPrefix(string pre)
{
    this->_prefix = pre;
}
AddPrefix::AddPrefix(const AddPrefix &Add)
{
    this->_prefix = Add._prefix;
}
string AddPrefix::toString()
{
    return "prefix";
}
string AddPrefix::rename(string name)
{
    return this->_prefix + " " + name;
}