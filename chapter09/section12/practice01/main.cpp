#include <iostream>
#include <format>


template <typename T>
class Value
{
private:
    T value;

public:
    explicit Value(T value): value{value} { std::cout << this->value << std::endl; }
};


int main()
{
    Value a{1};
    Value b{1.2};
    Value c{"str"};
}
