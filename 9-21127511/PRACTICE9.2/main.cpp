#include "Hotel.h"
int main()
{
    Hotel FiveStar;
    FiveStar.inputRoomList();
    cout << "Total room price: " << FiveStar.calcTotalPrice();
    return 0;
}