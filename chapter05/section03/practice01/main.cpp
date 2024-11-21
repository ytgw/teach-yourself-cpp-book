#include <iostream>


class Example
{
public:
    Example() { std::cout << "constructor" << std::endl; }
    ~Example() { std::cout << "destructor" << std::endl; }
};


int main()
{
    Example* ex = new Example();
    std::cout << "main" << std::endl;
    delete ex;  // コメントアウトすると終了時にもデストラクタが呼ばれなかった
}
