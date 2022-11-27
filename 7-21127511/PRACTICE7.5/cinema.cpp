#include "cinema.h"

void StandardCinema::setPrice(int r, int c, float price)
{
    this->m_seat[r][c].setPrice(price);
    return;
}


StandardCinema::StandardCinema()
{
    *m_seat = NULL;
}

StandardCinema::StandardCinema(int r, int c)
{
    row = r;
    col = c;
    m_seat = new Seat *[r];
    for (int i = 0; i < r; i++)
    {
        m_seat[i] = new Seat[c];
    }
}
StandardCinema::StandardCinema(int r, int c, Seat **S)
{
    row = r;
    col = c;
    m_seat = new Seat *[r];
    for (int i = 0; i < r; i++)
    {
        m_seat[i] = new Seat[c];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m_seat[i][j] = S[i][j];
        }
    }
}
StandardCinema::StandardCinema(const StandardCinema &SC)
{
    row = SC.row;
    col = SC.col;
    m_seat = new Seat *[row];
    for (int i = 0; i < row; i++)
    {
        m_seat[i] = new Seat[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m_seat[i][j] = SC.m_seat[i][j];
        }
    }
}
bool StandardCinema::checkEmptySeat(int r, int c)
{
    if (this->m_seat[r][c].situation())
    {
        cout << "\nSeat row " << r + 1 << ", col " << c + 1 << " is booked\n";
        return false;
    }
    cout << "\nSeat row " << r + 1 << ", col " << c + 1 << " is empty\n";
    return true;
}
bool StandardCinema::bookSeat(int r, int c)
{
    if (m_seat[r][c].situation() == true)
    {
        cout << "\nSeat row " << r + 1 << ", col " << c + 1 << " is booked, you can't seat here\n";
        return false;
    }
    m_seat[r][c].bookPlace();
    cout << "\nSeat row " << r + 1 << ", col " << c + 1 << " booked successfully\n";
    return true;
}
float StandardCinema::tellPrice(int r, int c)
{
    int further = 0;
    int central = row / 2 + 1;
    if (row % 2 == 0 && r < central - 1)
    {
        further = central - 1 - r;
    }
    else if (row % 2 == 0 && r > central)
    {
        further = r - central;
    }
    else if (row % 2 == 1 && r > central)
    {
        further = r - central;
    }
    else if (row % 2 == 1 && r < central)
    {
        further = central - r;
    }

    m_seat[r][c].setPrice(10 - 0.5 * further);
    return m_seat[r][c].getPrice();
}
float StandardCinema::totalSoldTicket()
{
    float total = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (m_seat[i][j].situation() == true)
            {
                total += m_seat[i][j].getPrice();
            }
        }
    }
    return total;
}
StandardCinema::~StandardCinema()
{
    for (int i = 0; i < row; i++)
    {
        delete[] m_seat[i];
    }
    delete[] m_seat;
}