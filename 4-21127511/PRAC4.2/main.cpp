#include "monomial.h"

int main()
{
    Monomial M, M1(5, 2), M3(8, 4), M2;
    cin >> M; // 3^ 2
    cout << M << endl;
    M2 = M + M1; // 8^2
    cout << M2 << endl;
    M += M2; // 11^2
    cout << M << endl;
    M1 *= M2; // 40^4
    cout << M1 << endl;
    bool ok1 = M1 > M3;  // 1;
    bool ok2 = M1 < M3;  // 0;
    bool ok3 = M1 == M3; // 0;
    bool ok4 = M1 >= M3; // 1;
    bool ok5 = M1 <= M3; // 0;
    bool ok6 = M1 != M3; // 1;
    cout << ok1 << " " << ok2 << " " << ok3 << endl;
    cout << ok4 << " " << ok5 << " " << ok6 << endl;
    M = M2++;
    cout << M << endl; // 8^2 v 8^3
    cout << M2 << endl;
    M = ++M2;
    cout << M << endl; // 8^4 v 8^4
    cout << M2 << endl;
    M = --M2;
    cout << M << endl; // 8^3 v 8^3
    cout << M2 << endl;
    M = M2++;
    cout << M << endl; // 8^3 v 8^4
    cout << M2 << endl;
    !(!(!M2));
    cout << M2 << endl; // 32^3 -> 96^2 -> 192^1
    M = !M2;
    cout << M << endl; // 192;
    return 0;
}