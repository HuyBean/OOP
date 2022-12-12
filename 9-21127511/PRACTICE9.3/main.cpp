#include "Company.h"

int main()
{
    Company Vin;
    Vin.inputLandList();
    cout << "\nTotal area: " << Vin.calcTotalArea();
    cout << "\nTotal price: "<< Vin.calcPriceAllLand();
    return 0;
}