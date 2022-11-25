#include "midterm.h"

//21127511 - NGUYỄN QUỐC HUY

int main()
{
    POST PT;
    cout << "\nThem buu kien:\n";
    cin >> PT;
    cout << PT;
    POST_OFFICE POF;
    getchar();
    cout << "\nAdding post 1: \n";
    POF.addPost();
    cout << "\nAdding post 2: \n";
    POF.addPost();
    // cout << "\nAdding post 3: \n";
    // POF.addPost();
    // cout << "\nAdding post 4: \n";
    // POF.addPost();
    POF.Output_Base_On_Name("Huy");
    cout << "\nTong gia tien van chuyen: " << POF.totalPrice() << endl;


    return 0;
}