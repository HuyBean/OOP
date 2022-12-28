#include <iostream>
#include <cstring>

class Base
{
private:
    char *m_ptr;

public:
    Base() { m_ptr = strdup("default"); }
    Base(char* ptr) {m_ptr = strcpy(m_ptr, ptr);}
    Base(const Base &b) { m_ptr = strdup("copy"); }
    ~Base()
    {
        delete[] m_ptr;
    }
    virtual void foo() { std::cout << m_ptr << "\n"; }
};

class Derive : public Base
{
public:
    void foo()
    {
        std::cout << "derive";
        Base::foo();
    }
    ~Derive()
    {
        Base::~Base();
    }
};

void bar(Base *obj1, Base obj2)
{
    obj1->foo();
    obj2.foo();
}

int main()
{
    Derive d;
    bar(&d, d);
}