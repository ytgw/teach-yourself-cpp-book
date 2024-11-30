#include <iostream>
#include <regex>


int main()
{
    std::string str, regexStr;

    std::cout << "文字列> ";
    std::getline(std::cin, str);

    std::cout << "正規表現> ";
    std::getline(std::cin, regexStr);

    std::smatch match;
    if (std::regex_search(str, match, std::regex{regexStr}))
    {
        for (std::size_t i = 0; i < match.size(); i++)
        {
            std::cout << match.str(i) << std::endl;
        }
    }
    else
    {
        std::cout << "マッチなし" << std::endl;
    }
}
