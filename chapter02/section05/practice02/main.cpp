#include <iostream>


class SampleClass
{
private:
    using integer = int;  // インスタンス関数の戻り値として使う場合もprivateでネスト型名を使える
    integer id;

public:
    integer get_id();
    void set_id(integer new_id);
};


SampleClass::integer SampleClass::get_id()
{
    return id;
}


void SampleClass::set_id(integer new_id)
{
    id = new_id;
}


int main()
{
    SampleClass instance;
    instance.set_id(2);
    std::cout << instance.get_id() << std::endl;
}
