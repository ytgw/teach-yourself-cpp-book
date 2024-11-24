#include <iostream>


template <typename T>
T id(T value)
{
    return value;
}


int main()
{
    std::cout << id<int>(2.1) << std::endl;
}
