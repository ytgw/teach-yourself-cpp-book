#include <iostream>


class Base
{
public:
    virtual void show() { std::cout << "Base::show()" << std::endl; }
};


class Derived: public Base
{
public:
    void show() { std::cout << "Derived::show()" << std::endl; }
};


int main()
{
    Derived derived;
    Base* ptr = &derived;
    ptr->show();
}
