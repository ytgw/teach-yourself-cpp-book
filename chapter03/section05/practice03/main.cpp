#include <iostream>


class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0;
};


std::string Base::name() const { return "Base"; }


class Derived: public Base
{
public:
    std::string name() const override;  // 更にオーバーライドする場合でもvirtualは不要。あってもエラーにはならなかった。
};


std::string Derived::name() const { return "Derived"; };


class MoreDerived: public Derived
{
public:
    std::string name() const override;
    std::string most_name() const override;
};


std::string MoreDerived::name() const { return "MoreDerived"; };
std::string MoreDerived::most_name() const { return "MoreDerived::most_name()"; };


int main()
{
    // BaseとDerivedは純粋仮想関数を含むので、コンパイルエラーでコンストラクトできない
    // Base base;
    // Derived derived;

    MoreDerived moreDerived;
    std::cout << moreDerived.most_name() << std::endl;
}
