#include "cinema.h"
#include "seat.h"
#include "vip.h"

int main()
{
    StandardCinema Lotte(5, 5);
    Lotte.bookSeat(1, 2);
    Lotte.checkEmptySeat(1, 2); 
    cout << Lotte.tellPrice(1, 2); // 9
    Lotte.bookSeat(2, 2);
    cout << Lotte.tellPrice(2, 2); // 9.5
    Lotte.checkEmptySeat(1, 3);
    cout << "\nTotal pice: " << Lotte.totalSoldTicket() << "\n"; // 18.5

    VIPCinema CGV(5, 5, true);
    CGV.bookSeat(3, 2);
    CGV.checkEmptySeat(3, 2);
    cout << CGV.tellPrice(3, 2); // 12
    CGV.bookSeat(2, 2);
    cout << CGV.tellPrice(2, 2); //11.6
    CGV.checkEmptySeat(2, 2);
    cout << "\nTotal pice: " << CGV.totalSoldTicket() << "\n"; //23.6
    return 0;
}