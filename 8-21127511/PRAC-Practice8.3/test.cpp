#include <iostream>
using namespace std;

class A
{
public:
    virtual void f1()
    {
        cout << "Good morning.\n";
        f2();
    }
     virtual void f2()
    {
        cout << "Good afternoon.\n";
    }
};

class B : public A
{
public:
    void f1()
    {
        cout << "Good evening.\n";
        A::f1();
    }
    void f2()
    {
        cout << "Good night.\n";
    }
};

int main()
{
    A *p = new B;
    p->f1();
    return 0;
}