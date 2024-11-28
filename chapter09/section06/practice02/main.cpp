#include <iostream>


template <auto value>
void show()
{
    std::cout<< value << std::endl;
}


int main()
{
    show<1.1>();
    show<42>();
}
