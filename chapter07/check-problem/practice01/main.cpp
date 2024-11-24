#include <iostream>


class Base
{
public:
    virtual void show() const { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


class Derived: public Base
{
public:
    void show() const override { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


int main()
{
    Derived derived;
    Base* ptr = &derived;
    ptr->show();

    Base& ref = derived;
    ref.show();
}
