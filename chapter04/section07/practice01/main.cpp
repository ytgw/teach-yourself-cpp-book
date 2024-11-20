#include <iostream>


void hello()
{
    std::cout << "hello global namespace" << std::endl;
}


namespace module
{
    void hello()
    {
        std::cout << "hello module namespace" << std::endl;
    }
}


int main()
{
    ::hello();
    module::hello();
}
