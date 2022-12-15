#ifndef TABLE_STUDENT
#define TABLE_STUDENT

#include "StudentToRowConverter.h"
#include "Student.h"


class Table 
{
private:
    vector<string> headers;
    vector<int> widths;
    vector<shared_ptr<Object>> data;
    shared_ptr<IValueConverter> converter;

public:
    Table(vector<string> h, vector<int> w, vector<shared_ptr<Object>> d, shared_ptr<IValueConverter> c);
    void display();
    string convert(shared_ptr<Object> data);
    string toString();
};

#endif