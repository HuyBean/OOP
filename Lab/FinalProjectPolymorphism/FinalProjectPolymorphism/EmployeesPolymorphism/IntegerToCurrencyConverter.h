#ifndef INTEGER_TO_CURRENCY_CONVERTER
#define INTEGER_TO_CURRENCY_CONVERTER

#include "IValueConverter.h"
#include "Integer.h"
#include "NumberFormatInfo.h"

#include <sstream>
#include <string>
#include <regex>

class IntegerToCurrencyConverter : public IValueConverter
{
public:
    IntegerToCurrencyConverter();
    string toString();
    string convert(string object);
    string convert(Object *object);
};

#endif