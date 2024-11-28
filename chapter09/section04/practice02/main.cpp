#include <iostream>


template <typename T>
class Foo
{
private:
    T value;
public:
    Foo(T value): value{value} {}
    void show() const { std::cout << "primary template: " << value << std::endl; }
};


template <>
class Foo<void>
{
public:
    void show() const { std::cout << "specialized template: <void>" << std::endl; }
};


int main()
{
    Foo a(1);
    a.show();

    Foo<void> b;
    b.show();
}
