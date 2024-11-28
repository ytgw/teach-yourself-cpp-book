#include <iostream>


template <typename T>
class Foo
{
private:
    T value;

public:
    using value_type = T;
    explicit Foo(T value): value{value} {}
    T& get() { return value; }
};


template <typename T>
using Foo_value = typename Foo<T>::value_type;


template <typename T>
Foo_value<T>& get_value(Foo<T>& foo)
{
    return foo.get();
}


int main()
{
    Foo<int> foo(1);

    std::cout << get_value(foo) << std::endl;
}
