#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal
{
public:
    float speed;

public:
    virtual void winning()
    {
        cout << "These animal run with same speed\n";
    };
};

class Cheetah : public Animal
{
public:
    Cheetah()
    {
        Animal::speed = 100;
    }
    void winning()
    {
        cout << "Cheetah win the race\n";
    }
};

class Antelope : public Animal
{
public:
    Antelope()
    {
        Animal::speed = 80;
    }
    void winning()
    {
        cout << "Antelope win the race\n";
    }
};

class Lion : public Animal
{
public:
    Lion()
    {
        Animal::speed = 70;
    }
    void winning()
    {
        cout << "Lion win the race\n";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        Animal::speed = 60;
    }
    void winning()
    {
        cout << "Dog win the race\n";
    }
};

class Human : public Animal
{
public:
    Human()
    {
        Animal::speed = 30;
    }
    void winning()
    {
        cout << "Human win the race\n";
    }
};

class Horse : public Animal
{
public:
    Horse()
    {
        Animal::speed = 60;
    }
    void winning()
    {
        cout << "Horse win the race\n";
    }
};

void compareAnimalSpeed(Animal *p1, Animal *p2)
{
    if (p1->speed > p2->speed)
    {
        p1->winning();
        return;
    }
    else if (p1->speed < p2->speed)
    {
        p2->winning();
        return;
    }
    Animal p;
    p.winning();
    return;
}

#endif