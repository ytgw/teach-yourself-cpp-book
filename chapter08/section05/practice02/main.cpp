#include <iostream>
#include <fstream>


int main()
{
    std::ifstream in{__FILE__};

    while (!in.eof())
    {
        std::string line;
        std::getline(in, line);
        std::cout << line << std::endl;
    }
}
