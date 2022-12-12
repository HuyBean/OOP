#ifndef NUMBER_FORMAT_INFO
#define NUMBER_FORMAT_INFO

#include "Object.h"

class NumberFormatInfo : public Object
{
private:
    string _currencyDecimalSeparator = ".";
    string _currencySymbol = "d";
    int _currencyPositive = 3;          // 0		1		2		3
    string _currencyPositiveFormat = "n $"; // "$n"		"n$"	"$ n"	"n $"
public:
    string currencyDecimalSeparator()
    {
        return this->_currencyDecimalSeparator;
    }
    string currencySymbol()
    {
        return this->_currencySymbol;
    }
    int currencyPositive()
    {
        return this->_currencyPositive;
    }
    string currencyPositiveFormat()
    {
        return this->_currencyPositiveFormat;
    }

public:
    string toString()
    {
        return "NumberFormatInfo";
    }
};

#endif