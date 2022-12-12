#ifndef REMOVE_SPECIAL_CHARS
#define REMOVE_SPECIAL_CHARS

#include "IRule.h"

class RemoveSpecialChars : public IRule
{
private:
    int size;
    vector<char> chList;

public:
    RemoveSpecialChars()
    {
        size = 0;
    }
    RemoveSpecialChars(vector<char> vList)
    {
        size = vList.size();
        chList.resize(size);
        for (int i = 0; i < vList.size(); i++)
        {
            chList[i] = vList[i];
        }
    }
    RemoveSpecialChars(const RemoveSpecialChars &R)
    {
        size = R.chList.size();
        chList.resize(size);
        for (int i = 0; i < R.chList.size(); i++)
        {
            chList[i] = R.chList[i];
        }
    }
    string rename(string name)
    {
        for (int i = 0; i < chList.size(); i++)
        {
            size_t start_pos = 0;
            while ((start_pos = name.find(chList[i], start_pos)) != std::string::npos)
            {
                name.replace(start_pos, 1, " ");
                start_pos += 1; // Handles case where 'to' is a substring of 'from'
            }
        }
        return name;
    }
    string toString()
    {
        return "RemoveSpecialChars";
    }
};

#endif