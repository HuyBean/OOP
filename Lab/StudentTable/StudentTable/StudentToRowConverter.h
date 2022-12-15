#ifndef STUDENT_TO_ROW
#define STUDENT_TO_ROW

#include "IValueConverter.h"

class StudentToRowConverter : public IValueConverter
{
private:
    int name_box;
    int phone_box;
    int address_box;

public:
    StudentToRowConverter();
    StudentToRowConverter(int n, int p, int a);
    StudentToRowConverter(const StudentToRowConverter &S_to_R);
    StudentToRowConverter(vector<int> widths);
    string convert(shared_ptr<Object> object);
};

#endif