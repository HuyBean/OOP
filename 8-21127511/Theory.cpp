#include <iostream>
using namespace std;

class Animal
{
public:
    // virtual void talk()
    // {
    //     cout << "\nDon't talk\n";
    // }
    virtual void talk() = 0;
};

class Cat : public Animal
{
public:
    void talk()
    {
        cout << "\nMeo meo meo\n";
    }
};

class Dog : public Animal
{
public:
    void talk()
    {
        cout << "\nGau gau gau\n";
    }
};

// void doSomething(Animal *p)
// {
//     p->talk();
//     return;
// }

void doSomething(Animal *p)
{
    p->talk();
    return;
}

int main()
{
    Cat c;
    Dog d;
    doSomething(&c); // Don't talk
    doSomething(&d);

    // Animal *p;
    // // p = &a;
    // // p = &c;
    // // p = &d;

    // p = &c;
    // p->talk();

    // p = &d;
    // p->talk();

    // Cat c;
    // Dog d;
    // doSomething(&c);
    // doSomething(&d);

    // Animal *p;
    // // p = new Animal; // Wrong
    // p = new Cat;
    // p->talk();
    return 0;
}
