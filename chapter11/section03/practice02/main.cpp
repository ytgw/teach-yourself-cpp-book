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

    std::cout << "dynamic_cast<Derived*>(&base)" << std::endl;
    assert("Derived" == dynamic_cast<Derived*>(&base)->get_class_name());

    // 実行時エラー
    std::cout << "dynamic_cast<Derived&>(base)" << std::endl;
    try
    {
        assert("Derived" == dynamic_cast<Derived&>(base).get_class_name());
    }
    catch(const std::bad_cast& e)
    {
        std::cout << e.what() << std::endl;
    }

    // コンパイルエラー
    // assert("Derived" == dynamic_cast<Derived>(base).get_class_name());
}
