#include <iostream>
#include <fstream>


int main()
{
    std::string filename;
    std::cout << "filename: >";
    std::cin >> filename;

    std::ifstream file{filename};
    std::string line;
    std::getline(file, line);
    std::cout << "line: " << line << std::endl;
}
