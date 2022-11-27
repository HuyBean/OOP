#ifndef CINEMA
#define CINEMA

#include "seat.h"
#include <vector>
#include <math.h>
#include <string>
using namespace std;

class StandardCinema
{
private:
    int row;
    int col;
    Seat **m_seat; // empty = 0, booked = 1

protected:
    void setPrice(int r, int c, float price);

public:
    StandardCinema();
    StandardCinema(int r, int c);
    StandardCinema(int r, int c, Seat **);
    StandardCinema(const StandardCinema &);
    bool checkEmptySeat(int r, int c);
    bool bookSeat(int r, int c);
    float tellPrice(int r, int c);
    float totalSoldTicket();
    ~StandardCinema();
};

#endif