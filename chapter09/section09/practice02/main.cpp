#include <iostream>
#include <format>


void show(int a)
{
    std::cout << std::format("{}", a) << std::endl;
}


void show(int a, int b)
{
    std::cout << std::format("{}, {}", a, b) << std::endl;
}


void show(int a, int b, int c)
{
    std::cout << std::format("{}, {}, {}", a, b, c) << std::endl;
}


template <typename... T>
void show_args(T... args)
{
    show(args...);
}



int main()
{
    show_args(1);
    show_args(1, 2);
    show_args(1, 2, 3);
}
