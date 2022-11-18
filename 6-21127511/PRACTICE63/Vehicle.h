#ifndef VEHICLE
#define VEHICLE

#include <iostream>
using namespace std;

class Vehicle
{
private:
    float m_weight;
    float m_fuel;
    float m_distance;

protected:
    void setVehicle(float w, float f, float d)
    {
        m_weight = w;
        m_fuel = f;
        m_distance = d;
    }

public:
    Vehicle()
    {
        m_distance = 0;
        m_fuel = 0;
        m_weight = 0;
    }
    Vehicle(float w, float f, float d)
    {
        m_weight = w;
        m_fuel = f;
        m_distance = d;
    }
    void addWeight(float w)
    {
        m_weight += w;
    }
    void addFuel(float f)
    {
        m_fuel = f;
    }
    void runVehicle(float km)
    {
        m_distance += km;
    }
    float getCurrentFuel(float consume_per_100_km, float additional_goods_weight_per_lit)
    {
        return m_fuel - ((m_distance * consume_per_100_km / 100) + (m_weight / additional_goods_weight_per_lit));
    }
};

class Truck : public Vehicle
{
public:
    Truck()
    {
        Vehicle();
    }
    Truck(float w, float f, float d)
    {
        Vehicle(w, f, d);
    }
    float getCurrentFuel(float consume, float more)
    {
        return Vehicle::getCurrentFuel(consume, more);
    }
};

class Motorbike : public Vehicle
{
public:
    Motorbike()
    {
        Vehicle();
    }
    Motorbike(float w, float f, float d)
    {
        Vehicle(w, f, d);
    }
    float getCurrentFuel(float consume, float more)
    {
        return Vehicle::getCurrentFuel(consume, more);
    }
};
#endif