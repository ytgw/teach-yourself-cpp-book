#include <iostream>
#include <fstream>
#include <format>


bool is_same(const char* a, const char* b, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i]) { return false; }
    }
    return true;
}


int main()
{
    std::string filename = "tmp.bin";
    const char write_msg[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::ofstream out{filename, std::ios::binary};
    out.write(write_msg, sizeof(write_msg));
    out.close();

    char buffer[1024];
    std::ifstream in{filename, std::ios::binary};

    unsigned int idx = 0;
    bool is_same_msg = false;
    while (!in.eof())
    {
        in.read(buffer, sizeof(buffer));
        auto read_size = in.gcount();

        is_same_msg = is_same(&write_msg[idx], buffer, read_size);
        if (!is_same_msg) { break; }
        idx += read_size;
    }

    if (is_same_msg) { std::cout << "Same" << std::endl; }
    else { std::cout << "Different" << std::endl; }
}
