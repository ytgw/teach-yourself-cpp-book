#include <iostream>


int main()
{
    std::cout.width(8);
    std::cout.fill('-');

    // 8進数表記をするには10進数をあんせっとしたうえで進数をセットする必要がある
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::oct);

    std::cout << 1234 << std::endl;
}
