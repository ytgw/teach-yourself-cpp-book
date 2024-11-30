#include <iostream>


int main()
{
    std::string str1{"abc"}, str2{"ABC"}, str3{"012"};
    std::string str = str1 + str2 + str3;
    std::cout << str << std::endl;
}
