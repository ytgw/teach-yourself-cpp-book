#include <iostream>


class A
{
private:
    int value = 0;

public:
    int& get_value();
    const int& get_value() const;
};


int& A::get_value()
{
    std::cout << "int& get_value()" << std::endl;
    return value;
}


const int& A::get_value() const
{
    std::cout << "const int& get_value() const" << std::endl;
    return value;
}


int main()
{
    A a1;
    int& v1 = a1.get_value();
    v1 = 2;

    const A a2;
    const int& v2 = a2.get_value();
    // v2 = 3;

    std::cout << "v1: " << v1 << ", v2: " << v2 << std::endl;
}
