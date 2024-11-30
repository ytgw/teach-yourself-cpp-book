#include <iostream>
#include <format>


int main()
{
    const int src = 123;
    const std::string str = std::to_string(src);
    const int dst = std::stoi(str);

    std::cout << std::format("src({}) == dst({}): {}", src, dst, src == dst) << std::endl;
}
