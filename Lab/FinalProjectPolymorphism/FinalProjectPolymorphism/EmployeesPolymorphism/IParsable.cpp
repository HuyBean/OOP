#include "IParsable.h"

double findNum(string Seq)
{
    string Num = "";
    for (int i = Seq.find("=") + 1; i < Seq.size(); i++)
    {
        Num += Seq[i];
    }
    return stod(Num);
}