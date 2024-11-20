#include <iostream>
#define hello(foo) hi(foo)


void hello(std::string name)
{
    std::cout << "hello " << name << std::endl;
}


int main()
{
    hi("cpp");
}
