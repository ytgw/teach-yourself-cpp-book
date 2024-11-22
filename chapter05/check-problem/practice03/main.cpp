#include <iostream>


void clear(int& value)
{
    std::cout << "void clear(int& value)" << std::endl;
    value = 0;
}


void clear(int&& value)
{
    std::cout << "void clear(int&& value)" << std::endl;
    value = 0;
}


int main()
{
    int value;
    clear(value);
    clear(std::move(value));
}
