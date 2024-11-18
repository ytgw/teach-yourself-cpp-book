#include <iostream>


class Base
{
public:
    virtual std::string name() const;
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
};


std::string MoreDerived::name() const { return "MoreDerived"; };


int main()
{
    Base base;
    std::cout << base.name() << std::endl;

    Derived derived;
    std::cout << derived.name() << std::endl;

    MoreDerived moreDerived;
    std::cout << moreDerived.name() << std::endl;
}
