#include <iostream>


int main()
{
    int i = 42;

    if (int i = 0; i > 0)
    {
        std::cout << "if: " << i << std::endl;
    }
    else
    {
        std::cout << "else: " << i << std::endl;
    }

    // else: 0と表示される
}
