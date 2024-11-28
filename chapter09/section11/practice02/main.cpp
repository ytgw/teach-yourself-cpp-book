#include <iostream>
#include <format>


int main()
{
    auto show = [](const auto& value)
    {
        std::cout << value << std::endl;
    };

    show(1);
    show(2.1);
    show("string");
}
