#include <iostream>


template <typename T>
T id(T value)
{
    return value;
}


int main()
{
    std::cout << id<int>(2.1) << std::endl;
    std::cout << id<float>(3.1) << std::endl;
    std::cout << id<std::string>("string") << std::endl;
}
