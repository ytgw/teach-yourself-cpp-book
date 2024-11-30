#include <iostream>
#include <regex>


int main()
{
    std::string rawStrLiteral = R"raw(abc
def
\\
\n
\t
ghi)raw";

    std::cout << rawStrLiteral << std::endl;
}
