#include <iostream>
#include <tuple>


int main()
{
    std::tuple<int, double, std::string> values{1, 2.1, "str"};
    std::cout << std::get<0>(values) << ", " << std::get<1>(values) << ", " << std::get<2>(values) << std::endl;

    std::get<0>(values) = 2;
    std::cout << std::get<0>(values) << ", " << std::get<1>(values) << ", " << std::get<2>(values) << std::endl;
}
