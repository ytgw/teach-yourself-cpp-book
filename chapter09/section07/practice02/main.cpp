#include <iostream>


template <typename T>
void show(T&& value)
{
    std::cout << __PRETTY_FUNCTION__ << ": " << value << std::endl;
}


int main()
{
    int value = 2;
    show(value);
    show(3);
    show(3.14);
}
