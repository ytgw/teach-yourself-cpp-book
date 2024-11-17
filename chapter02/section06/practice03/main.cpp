#include <iostream>


int main()
{
    std::string input;

    do
    {
        std::cout << "文字列を入力してください > ";
        std::getline(std::cin, input);

        std::cout << "入力された行: \"" << input << "\"" << std::endl;
    } while (input != "");
}
