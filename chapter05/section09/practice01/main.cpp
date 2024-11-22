#include <iostream>


int sum(int a, int b)
{
    return a + b;
}


int main()
{
    int (*fun_ptr)(int, int) = sum;

    std::cout << fun_ptr(1, 2) << std::endl;
}
