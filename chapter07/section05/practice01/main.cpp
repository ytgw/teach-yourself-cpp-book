#include <iostream>


class BaseA
{
public:
    BaseA() { std::cout << __PRETTY_FUNCTION__  << std::endl; }
    void show_base_a() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};


class BaseB
{
public:
    BaseB() { std::cout << __PRETTY_FUNCTION__  << std::endl; }
    void show_base_b() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};


class Derived: public BaseA, public BaseB
{
public:
    Derived() { std::cout << __PRETTY_FUNCTION__  << std::endl; }
    void show_derived() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};


int main()
{
    Derived instance;
    instance.show_base_a();
    instance.show_base_b();
    instance.show_derived();
}
