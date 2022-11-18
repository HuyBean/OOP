#include "Vehicle.h"

int main()
{
    Truck T;
    Motorbike M;
    T.addFuel(200);
    T.addWeight(20'000);
    T.runVehicle(200);
    cout << T.getCurrentFuel(20, 1'000) << endl; // 200 - 40 - 20 = 140

    M.addFuel(20);
    M.addWeight(50);
    M.runVehicle(20);
    cout << M.getCurrentFuel(2, 100) << endl; // 20 - 0.5 - 0.4 = 19.1

    return 0;
}