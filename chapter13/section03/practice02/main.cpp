#include <iostream>


int main()
{
    std::string str = "0123456789";
    if ((str.data())[str.size()] == '\0')
    {
        std::cout << "null文字あり" << std::endl;
    }
}
