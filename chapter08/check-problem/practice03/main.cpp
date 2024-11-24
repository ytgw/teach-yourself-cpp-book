#include <iostream>
#include <fstream>


int main()
{
    std::ifstream file{__FILE__, std::ios::binary};

    char buffer[100];
    file.read(buffer, sizeof(buffer));
}
