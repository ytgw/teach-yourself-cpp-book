#include <iostream>


class Base
{
public:
    virtual ~Base() { std::cout << "~Base()" << std::endl; }
};


class Derived: public Base
{
private:
    int* ptr = nullptr;
public:
    Derived(): ptr{new int} { std::cout << "Derived()" << std::endl; }
    ~Derived()
    {
        std::cout << "~Derived()" << std::endl;
        delete ptr;
    }
};


int main()
{
    Base* ptr = new Derived;
    delete ptr;
}
