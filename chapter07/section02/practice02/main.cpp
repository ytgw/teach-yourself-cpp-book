#include <iostream>


class Base
{
public:
    explicit Base(int v) { std::cout << "Base(" << v << ")" << std::endl; }
    ~Base() { std::cout << "~Base()" << std::endl; }
};


class Derived: public Base
{
public:
    Derived(): Base(1) { std::cout << "Derived()" << std::endl; }
    ~Derived() { std::cout << "~Derived()" << std::endl; }
};


int main()
{
    Derived derived;
}
