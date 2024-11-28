#include <iostream>


int main()
{
    std::cout << "エラーを投げる前" << std::endl;
    throw std::runtime_error("test");
    std::cout << "エラーを投げた後" << std::endl;
}
