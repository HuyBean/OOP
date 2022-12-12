#include "Company.h"

int main()
{
    Company Apple;
    Apple.inputEmplist();
    cout << "\nTotal salary: "<< Apple.calcTotalSal();
    return 0;
}