#include <iostream>
#include <cassert>


class Base
{
public:
    virtual ~Base() {}  // 仮想デストラクタを定義してポリモーフィックにする
    std::string get_class_name() { return "Base"; }
};


class Derived: public Base
{
public:
    std::string get_class_name() { return "Derived"; }
};


int main()
{
    Base base;

    assert("Derived" == static_cast<Derived*>(&base)->get_class_name());
    assert("Derived" == static_cast<Derived&>(base).get_class_name());

    // コンパイルエラー
    // assert("Derived" == static_cast<Derived>(base).get_class_name());
}
