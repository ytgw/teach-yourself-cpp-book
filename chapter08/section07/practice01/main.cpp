#include <iostream>
#include <fstream>


int main()
{
    std::ofstream file{"tmp.txt"};

    file << "Hello, world";
    file.seekp(7, std::ios::beg);
    file << "file seek";
}
