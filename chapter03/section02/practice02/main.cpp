#include <iostream>


class SampleClass
{
public:
    SampleClass();
    ~SampleClass();
};


SampleClass::SampleClass()
{
    std::cout << "コンストラクタ" << std::endl;
}


SampleClass::~SampleClass()
{
    std::cout << "デストラクタ" << std::endl;
}


int main()
{
    SampleClass instance;
    std::cout << "main()" << std::endl;
}
