#include "Fraction.h"

// 21127511 - Nguyễn Quốc Huy

int main()
{
    Fraction phanso1;
    phanso1.getFraction();
    phanso1.printFraction();
    cout <<"\nAfter reduced: ";
    doWithFraction(phanso1, reduceFraction);
    phanso1.printFraction();
    // cout <<"\nAfter inversed: ";
    // doWithFraction(phanso1, inversFraction);
    // phanso1.printFraction();
    Fraction phanso2;
    phanso2.getFraction();
    phanso2.printFraction();
    Fraction ketqua;
    ketqua = multipleFraction(phanso1, phanso2, addFraction);
    doWithFraction(ketqua, reduceFraction);
    cout << "\nTong 2 phan so: ";
    ketqua.printFraction();
    cout << "\nSo sanh 2 phan so: ";
    cout << multipleFraction(phanso1, phanso2, compareFraction);
    return 0;
}