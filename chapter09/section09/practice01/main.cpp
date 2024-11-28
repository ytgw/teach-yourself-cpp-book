#include <iostream>


template <typename... T>
void show_arg_num(T... args)
{
    std::cout << "引数の数: " << sizeof...(T) << std::endl;
}


int main()
{
    show_arg_num(1, 2, 3, 4);
}
