#include <iostream>


int get_value(int&& value)
{
    return value;
}


int main()
{
    std::cout << get_value(1) << std::endl;

    int i = 3;
    std::cout << get_value(std::move(i)) << std::endl;
}
