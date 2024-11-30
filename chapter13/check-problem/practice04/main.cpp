#include <iostream>
#include <regex>


int main()
{
    const std::string str = "Hello  Regex   World";
    std::cout << std::regex_replace(str, std::regex{"\\s+R\\w+\\s+"}, " Replaced ") << std::endl;
}
