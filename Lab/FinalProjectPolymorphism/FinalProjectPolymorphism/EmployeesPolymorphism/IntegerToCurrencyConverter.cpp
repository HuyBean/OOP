#include "IntegerToCurrencyConverter.h"

IntegerToCurrencyConverter::IntegerToCurrencyConverter()
{
}
string IntegerToCurrencyConverter::toString()
{
    return "IntegerToCurrencyConverter";
}
string IntegerToCurrencyConverter::convert(string object)
{
    return object;
}
string IntegerToCurrencyConverter::convert(Object *object)
{
    auto number = dynamic_cast<Integer *>(object);
    int value = number->value();

    stringstream builder;
    NumberFormatInfo info;
    int count = 0;

    while (value != 0)
    {
        int lastDigit = value % 10;
        builder << lastDigit;

        count++;

        if (count == 3)
        {
            builder << info.currencyDecimalSeparator();
            count = 0;
        }

        value /= 10;
    }

    string numberSeparated = builder.str(); // "000.000.1"
    reverse(numberSeparated.begin(), numberSeparated.end());

    string format = info.currencyPositiveFormat();
    // "n $" == > "1.000.000 d"
    string symbol = info.currencySymbol(); // "d"

    // https://stackoverflow.com/questions/17459450/how-to-determine-currency-symbol-position-for-a-culture
    string result = regex_replace(format, regex("n"), numberSeparated);
    result = regex_replace(result, regex("\\$"), symbol);

    return result;
}