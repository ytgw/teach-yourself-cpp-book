#include <iostream>


class Base
{
};


class Derived: public Base
{
};


int main()
{
    Derived derived;
    Base& base = derived;

    if (typeid(base) == typeid(Derived))
    {
        std::cout << "Base and Derived are same type." << std::endl;
    }
    else
    {
        std::cout << "Base and Derived are different type." << std::endl;
    }
}
