#include "Product.h"

// 21127511 - Nguyễn Quốc Huy

// This Lab Project has 50% ideas of teacher support via Notion.
// Many functions made by teacher has been kept in this program.

int main()
{
    ProductDataSet A("Product");
    vector<Product> P;
    P = A.getAll();
    printProduct(P);

    // Adding Product
    int size = 2;
    for (int i = 0; i < size; i++)
    {
        Addnew();
    }
    printProduct(P);
    system("pause");
    return 0;
}