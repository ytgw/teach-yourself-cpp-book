#include <iostream>


template <int value>
void show()
{
    std::cout<< value << std::endl;
}


int main()
{
    show<2>();
}
