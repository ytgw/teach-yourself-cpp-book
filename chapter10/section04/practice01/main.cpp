#include <iostream>


class MyException: public std::exception
{
private:
    const std::string message;

public:
    explicit MyException(std::string message): message{message} {}
    const char* what() const noexcept override
    {
        return message.c_str();
    }
};


int main()
{
    std::cout << "エラーを投げる前" << std::endl;
    try
    {
        throw MyException("MyException");
        std::cout << "エラーを投げた後" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "キャッチの内部: " << e.what() << std::endl;
    }
    std::cout << "tryブロックの後" << std::endl;
}
