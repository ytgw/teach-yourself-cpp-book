#include <iostream>


int main()
{
    std::cout << "エラーを投げる前" << std::endl;
    try
    {
        throw std::runtime_error("test");
        std::cout << "エラーを投げた後" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "キャッチの内部: " << e.what() << std::endl;
    }
    std::cout << "tryブロックの後" << std::endl;
}
