#include <iostream>


void foo() noexcept
{
    throw 0;
}


int main()
{
    try
    {
        foo();
    }
    catch(int e)
    {
        // noexcept指定をしているのでcatchは呼ばれずプログラムが異常終了する
        std::cout << "catch: " << e << std::endl;
    }
}