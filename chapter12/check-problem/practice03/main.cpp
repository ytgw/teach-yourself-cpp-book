#include <iostream>
#include <tuple>


int main()
{
    std::tuple<int, std::string> aTuple{1, "str"};
    auto [a, b] = aTuple;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
