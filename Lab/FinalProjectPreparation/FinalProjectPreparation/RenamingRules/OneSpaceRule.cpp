#include "OneSpaceRule.h"

OneSpaceRule::OneSpaceRule()
{
}

string OneSpaceRule::Rename(string origin)
{
    string content = origin;
    for (int i = 0; i < content.length(); i++)
    {
        if (content[i] == ' ' && content[i + 1] == ' ')
        {
            for (int j = i; j < content.length(); j++)
            {
                content[j] = content[j + 1];
            }
            i--;
        }
    }
    if (content[0] == ' ')
    {
        for (int j = 0; j < content.length(); j++)
        {
            content[j] = content[j + 1];
        }
    }
    if (content[content.length()] == ' ')
    {
        for (int j = content[content.length()]; j < content.length(); j++)
        {
            content[j] = content[j + 1];
        }
    }
    return content;
}