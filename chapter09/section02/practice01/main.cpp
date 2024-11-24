#include <iostream>


template <typename T>
class Foo
{
private:
    T value;

public:
    Foo(T value): value{value} {}
    T get() const { return value; }
};


int main()
{
    Foo<int> foo{1};
    std::cout << foo.get() << std::endl;
}
