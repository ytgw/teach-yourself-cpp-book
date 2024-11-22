#include <iostream>


void clear(int& value)
{
    value = 0;
}


int main()
{
    int value = 3;
    clear(value);
    std::cout << value << std::endl;
}
