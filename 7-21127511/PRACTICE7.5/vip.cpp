#include "vip.h"

VIPCinema::VIPCinema() : StandardCinema()
{
    thursday = false;
}

VIPCinema::VIPCinema(int r, int c, bool thday) : StandardCinema(r, c)
{
    this->thursday = thday;
}

VIPCinema::VIPCinema(int r, int c, Seat **S, bool thday) : StandardCinema(r, c, S)
{
    this->thursday = thday;
}

bool VIPCinema::checkEmptySeat(int r, int c)
{
    return StandardCinema::checkEmptySeat(r, c);
}
bool VIPCinema::bookSeat(int r, int c)
{
    return StandardCinema::bookSeat(r, c);
}

float VIPCinema::tellPrice(int r, int c)
{
    float price = 0;
    if (thursday == true)
    {
        price = 5 + StandardCinema::tellPrice(r, c);
        price *= (float)80 / 100;
        setPrice(r, c, price);
        return price;
    }
    price = 5 + StandardCinema::tellPrice(r, c);
    setPrice(r, c, price);
    return price;
}
float VIPCinema::totalSoldTicket()
{
    return StandardCinema::totalSoldTicket();
}
VIPCinema::~VIPCinema()
{
}