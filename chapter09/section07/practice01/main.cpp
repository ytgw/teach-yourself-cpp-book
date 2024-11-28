#include <iostream>


template <typename T>
void show(const T& value)
{
    std::cout << __PRETTY_FUNCTION__ << ": " << value << std::endl;
}


int main()
{
    show<int>(2);
}
