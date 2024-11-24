#include <iostream>


int main()
{
    while (true)
    {
        const unsigned int size = 256;
        char buffer[size];

        std::cout << "> ";
        std::cin.getline(buffer, sizeof(buffer));

        if (buffer[0] == '\0')
        {
            break;
        }
        std::cout << "buffer: " << buffer << std::endl;
    }
}
