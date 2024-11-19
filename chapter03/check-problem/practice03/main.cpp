#include <iostream>


class Base
{
public:
    void show() const { std::cout << "Base" << std::endl; };
};


class Derived: public Base
{
public:
    using Base::show;
    void show(int i) const { std::cout << "Derived: " << i << std::endl; };
};


int main()
{
    Base base;
    Derived derived;

    base.show();
    derived.show();
    derived.show(1);
}
