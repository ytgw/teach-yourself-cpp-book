#include <iostream>


template <typename T>
class Foo
{
private:
    T value;

public:
    Foo(T value);
    T get() const;
};


template <typename T>
Foo<T>::Foo(T value): value{value} {}


template <typename T>
T Foo<T>::get() const { return value; }


int main()
{
    Foo<int> foo{1};
    std::cout << foo.get() << std::endl;
}
