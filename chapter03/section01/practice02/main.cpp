#include <iostream>


class A
{
    int v;

public:
    A();

    int& get();
    const int& get() const;
};


A::A(): v(0) {}


int& A::get()
{
    return v;
}


const int& A::get() const
{
    return v;
}


int main()
{
    A a1;
    int& v = a1.get();
    v = 42;
    std::cout << a1.get() << std::endl;  // 42

    const A a2;  // 自分でデフォルトコンストラクタを定義しないとコンパイルエラーとなる
    const int& v2 = a2.get();
    std::cout << v2 << std::endl;
}
