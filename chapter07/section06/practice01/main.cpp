#include <iostream>


class Base
{
public:
    explicit Base(int value) { std::cout << __PRETTY_FUNCTION__  << ", value=" << value << std::endl; }
};


class DerivedA: virtual public Base
{
public:
    DerivedA(): Base{1} { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


class DerivedB: virtual public Base
{
public:
    DerivedB(): Base{2} { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


class MoreDerived: public DerivedA, public DerivedB
{
public:
    MoreDerived(): Base{3} { std::cout << __PRETTY_FUNCTION__  << std::endl; }
};


int main()
{
    MoreDerived instance;
}
