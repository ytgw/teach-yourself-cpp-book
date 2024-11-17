#include <iostream>


int main()
{
    double input = 1.0;

    std::cout << "実数を入力してください > ";
    std::cin >> input;  // abcと入力された場合に例外が発生せずに0が代入された

    std::cout << "入力された実数: " << input << std::endl;
}
