#include <iostream>


class Base
{
public:
    virtual void show_class_name() const { std::cout << "Base" << std::endl; }
};


template <typename T>
class Derived: public Base
{
public:
    void show_class_name() const override { std::cout << "Derived" << std::endl; }
    T id(T value) const { return value; }
};


int main()
{
    Derived<int> derived;
    Base& instance = derived;
    instance.show_class_name();
}
