#include <iostream>


template <typename T>
class Foo
{
private:
    T value;
public:
    explicit Foo(T value): value{value} {}
    T get() const { return value; }
};


template <typename T>
void show(Foo<T> foo)
{
    std::cout<< foo.get() << std::endl;
}


int main()
{
    Foo foo{1};
    show(foo);
}
