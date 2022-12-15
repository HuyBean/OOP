#include "StudentToRowConverter.h"

StudentToRowConverter::StudentToRowConverter()
{
    this->name_box = 0;
    this->phone_box = 0;
    this->address_box = 0;
}
StudentToRowConverter::StudentToRowConverter(int n, int p, int a)
{
    this->name_box = n;
    this->phone_box = p;
    this->address_box = a;
}
StudentToRowConverter::StudentToRowConverter(const StudentToRowConverter &S_to_R)
{
    this->name_box = S_to_R.name_box;
    this->phone_box = S_to_R.phone_box;
    this->address_box = S_to_R.address_box;
}
StudentToRowConverter::StudentToRowConverter(vector<int> widths)
{
    if (widths.size() == 3)
    {
        this->name_box = widths[0];
        this->phone_box = widths[1];
        this->address_box = widths[2];
    }
}
string StudentToRowConverter::convert(shared_ptr<Object> object)
{
    return "StudentToRowConverter";
}