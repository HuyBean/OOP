#ifndef VIP
#define VIP

#include "cinema.h"


class VIPCinema : public StandardCinema
{
private:
    bool thursday;

public:
    VIPCinema();
    VIPCinema(int r, int c, bool thday);
    VIPCinema(int r, int c, Seat **S, bool thday);
    bool checkEmptySeat(int r, int c);
    bool bookSeat(int r, int c);
    float tellPrice(int r, int c);
    float totalSoldTicket();
    ~VIPCinema();
};


#endif 