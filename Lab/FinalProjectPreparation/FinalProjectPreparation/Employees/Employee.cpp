#include "Employee.h"

string convert(float n)
{
    string s = to_string(n);
    s.erase(s.find_last_not_of('0') + 1, std::string::npos);
    s.erase(s.find_last_not_of('.') + 1, std::string::npos);
    int count = 0;
    for (int i = s.length(); i > 0; i--)
    {
        if (count == 3)
        {
            s.insert(s.begin() + i, '.');
            count = 0;
        }
        count += 1;
    }
    s.insert(s.begin(), ' ');
    return s += " d";
}