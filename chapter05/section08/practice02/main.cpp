#include <iostream>


class A
{
private:
    int value = 0;

public:
    A(int value): value{value} {};
    A(const A& other): value(other.value)
    {
        std::cout << "A(const A& other), value: " << this->value << std::endl;
    }
    A(A&& other): value(other.value)
    {
        std::cout << "A(A&& other), value: " << this->value << std::endl;
    }
};


int main()
{
    A a(1);
    A copy(a);
    A move(std::move(a));
}
