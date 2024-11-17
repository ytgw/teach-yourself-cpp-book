#include <iostream>


int main()
{
    std::string string = "hello, \0 null charactor";

    std::cout << string << std::endl;  // hello, と表示されnull以降の文字は表示されない
}
