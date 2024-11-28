#include <iostream>


template <typename T>
void show(T value)
{
    std::cout << __PRETTY_FUNCTION__ << ": " << value << std::endl;
}


template <>
void show(int value)
{
    std::cout << __PRETTY_FUNCTION__ << ": " << std::hex << value << std::endl;
}


int main()
{
    show<int>(255);
    show<float>(1.2f);
}
