#include "Matrix.h"
using namespace std;

int main()
{
    Matrix<int> m1(4, 6); // Create a 4 rows 6 cols matrix.
    cin >> m1;            // Enter matrix from keyboard.

    Matrix<int> m2 = m1;
    int max = m2.findMax(); // Find max element.

    m2[2][3] = max;
    cout << m2;

    return 0;
}
