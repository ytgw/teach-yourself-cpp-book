#include <iostream>


int main()
{
    std::string message = "hello";

    for (char ch : message)
    {
        std::cout << ch << std::endl;
    }
}
