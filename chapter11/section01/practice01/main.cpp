#include <iostream>


int main()
{
    auto fn1 = [](int value) -> void {std::cout << value << std::endl;};
    auto fn2 = [](int value) -> void {std::cout << value << std::endl;};

    if (typeid(fn1) == typeid(fn2))
    {
        std::cout << "same" << std::endl;
    }
    else
    {
        std::cout << "different" << std::endl;
    }
}
