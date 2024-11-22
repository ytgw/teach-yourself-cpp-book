#include <iostream>


class A
{
    int value = 0;

public:
    void set(int value) { this->value = value; }
    void foo();
};


void A::foo()
{
    auto lambda_ptr = [this]
    {
        std::cout << "lambda_ptr: " << value << std::endl;
    };

    // 定義段階でthisの中身がコピーされるので、valueを更新しても関数は更新されない
    auto lambda_val = [*this]
    {
        std::cout << "lambda_val: " << value << std::endl;
    };

    value = 0;

    lambda_ptr();
    lambda_val();
}


int main()
{
    A a;
    a.set(42);
    a.foo();
    a.foo();
}
