#include "fraction.h"

int main()
{
    Fraction f, f2, tmp(2), tmp2(3, 4), tmp3;
    cin >> f; // 1/2
    cout << f << endl;
    bool ok1 = (f > tmp);  // 0
    bool ok2 = (f < tmp);  // 1
    bool ok3 = (f == tmp); // 0
    bool ok4 = (f >= tmp); // 0
    bool ok5 = (f <= tmp); // 1
    bool ok6 = (f != tmp); // 1
    cout << ok1 << endl;
    cout << ok2 << endl;
    cout << ok3 << endl;
    cout << ok4 << endl;
    cout << ok5 << endl;
    cout << ok6 << endl;
    f2 = tmp2; // 3/4
    cout << f2 << endl;
    f += f2; // 10/8
    cout << f << endl;
    f *= tmp2; // 3/8
    cout << f << endl;
    Fraction tmp4(1, 2);
    f = tmp4;
    tmp3 = f++; // 1/2 v 3/2
    cout << tmp3 << endl;
    cout << f << endl;
    tmp3 = ++f; // 5/2 v 5/2
    cout << tmp3 << endl;
    cout << f << endl;
    tmp3 = f--; // 5/2 v 3/2
    cout << tmp3 << endl;
    cout << f << endl;
    tmp3 = --f; // 1/2 v 1/2
    cout << tmp3 << endl;
    cout << f << endl;
    float a = (float)tmp3;
    float b = (int)tmp3;
    cout << a << " " << b << endl; // 0,5 v 0
    f2 = f * tmp3;                 // 1/4
    cout << f2 << endl;
    tmp2 = (tmp3 + f); // 4/4
    cout << tmp3 << f << endl;
    return 0;
}