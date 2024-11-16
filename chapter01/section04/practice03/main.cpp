#include <iostream>


int main()
{
    int a = 2;
    int aplus1 = a + 1;

    if (aplus1 == 1)
    {
        std::cout << "a + 1は1です" << std::endl;
    }
    else if (aplus1 == 2)
    {
        std::cout << "a + 1は2です" << std::endl;
    }
    else if (aplus1 == 3)
    {
        std::cout << "a + 1は3です" << std::endl;
    }
    else{
        std::cout << "a + 1は1でも2でも3でもありません" << std::endl;
    }
}
