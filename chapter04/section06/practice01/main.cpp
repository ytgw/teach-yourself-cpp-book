#include <iostream>


inline int sum(int a, int b)
{
    return a + b;
}


int main()
{
    std::cout << sum(1, 2) << std::endl;
}
