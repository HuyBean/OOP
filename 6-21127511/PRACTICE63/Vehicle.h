#ifndef VEHICLE
#define VEHICLE

#include <iostream>
using namespace std;

class Vehicle
{
protected:
    float m_weight;
    float m_fuel;
    float m_consume;
    float m_consume_per_100_km;

protected:
    void setVehicle(float w, float f)
    {
        m_weight = w;
        m_fuel = f;
    }

public:
    Vehicle()
    {
        m_fuel = 0;
        m_weight = 0;
    }
    Vehicle(float w, float f)
    {
        m_weight = w;
        m_fuel = f;
    }
    void addWeight(float w)
    {
        m_weight += w;
    }
    void removeWeight(float w)
    {
        if (m_weight >= w)
        {
            m_weight -= w;
        }
    }
    void addFuel(float f)
    {
        m_fuel += f;
    }
    float getCurrentFuel()
    {
        return m_fuel;
    }
    bool run(float km)
    {
        float fuel = km * (m_consume + km * m_consume_per_100_km);
        if (fuel > m_fuel)
        {
            return false;
        }
        else
        {
            m_fuel -= fuel;
            return true;
        }
    }
};

class Truck : public Vehicle
{
public:
    Truck()
    {
        Vehicle();
        m_consume = 20 / 100;
        m_consume_per_100_km = 1 / 1000 * 100;
    }
    Truck(float w, float f)
    {
        Vehicle(w, f);
        m_consume = 20 / 100;
        m_consume_per_100_km = 1 / 1000 * 100;
    }
};

class Motorbike : public Vehicle
{
public:
    Motorbike()
    {
        Vehicle();
        m_consume = 2 / 100;
        m_consume_per_100_km = 0.1 / 10 * 100;
    }
    Motorbike(float w, float f)
    {
        Vehicle(w, f);
        m_consume = 2 / 100;
        m_consume_per_100_km = 0.1 / 10 * 100;
    }
};
#endif