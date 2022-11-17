#include "Salary.h"

int main()
{
    vector<Employee> Em, Tmp;
    const char* fileName = "salary112022.txt";
    Data D(fileName,Em, 0);
    D.readFile();
    D.Sort();
    D.printOut();
    system("pause");
    return 0;
}