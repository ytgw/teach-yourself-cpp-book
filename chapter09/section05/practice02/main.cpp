#include <iostream>


template <typename T>
auto id(T value)
{
    return value;
}


int main()
{
    // id(1)は int id<int>(int value) と型推論されている
    std::cout << id(1) << std::endl;
}
