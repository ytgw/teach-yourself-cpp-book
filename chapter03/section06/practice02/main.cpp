#include <iostream>


class SampleClass
{
private:
    int value = 0;
public:
    int add_with_arg(int value) const;
    int add_with_this(int value) const;
};


int SampleClass::add_with_arg(int value) const
{
    return value + value;
}


int SampleClass::add_with_this(int value) const
{
    return this->value + value;
}


int main()
{
    SampleClass instance;
    std::cout << instance.add_with_arg(1) << std::endl;
    std::cout << instance.add_with_this(1) << std::endl;
}
