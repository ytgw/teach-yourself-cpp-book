#include <iostream>
#include <regex>


int main()
{
    std::string str, regexStr;

    std::cout << "文字列> ";
    std::getline(std::cin, str);

    std::cout << "正規表現> ";
    std::getline(std::cin, regexStr);

    if (std::regex_match(str, std::regex{regexStr}))
    {
        std::cout << "完全マッチ" << std::endl;
    }
    else
    {
        std::cout << "完全マッチでない" << std::endl;
    }
}
