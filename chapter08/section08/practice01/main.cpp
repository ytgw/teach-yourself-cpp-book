#include <iostream>
#include <fstream>
#include <format>


void show_state(std::ios::iostate state)
{
    std::string message = std::format(
        "eofbit: {}, failbit: {}, badbit: {}",
        bool(state & std::ios::eofbit),
        bool(state & std::ios::failbit),
        bool(state & std::ios::badbit)
    );
    std::cout << message << std::endl;
}


int main()
{
    std::ifstream file{__FILE__};
    file.seekg(0, std::ios::end);

    std::cout << "seek end" << std::endl;
    show_state(file.rdstate());

    file.get();
    std::cout << "get after seek end" << std::endl;
    show_state(file.rdstate());
}
