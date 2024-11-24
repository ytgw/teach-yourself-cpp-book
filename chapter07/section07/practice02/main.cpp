#include <iostream>


class Base
{
public:
    virtual void show() { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


class Derived: public Base
{
public:
    void show() final override { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


class MoreDerived: public Derived
{
public:
    // finalメソッドはオーバーライドできない
    // void show() override { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


int main()
{
    MoreDerived instance;
    instance.show();
}
