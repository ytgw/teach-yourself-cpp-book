#include <iostream>


extern int global_variable;


int main()
{
    std::cout << global_variable << std::endl;

    global_variable++;
    std::cout << global_variable << std::endl;
}
