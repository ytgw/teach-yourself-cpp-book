#include <iostream>


// extern "C"がないときは下記エラーが発生した
// main.c:(.text+0xe): undefined reference to `hello'
extern "C" void hello()
{
    std::cout << "hello cpp" << std::endl;
}
