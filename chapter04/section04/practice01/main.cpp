#include <iostream>


int heavy_process(int v)
{
    std::cout << "heavy_process" << std::endl;
    return v;
}


int main()
{
    if (int v = heavy_process(3); v == 3)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
}
