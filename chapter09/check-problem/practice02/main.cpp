#include <iostream>
#include <format>


template <typename A, typename B>
class Tuple
{
private:
    A a;
    B b;

public:
    explicit Tuple(A a, B b): a{a}, b{b} {}
    void show() const
    {
        std::cout << "プライマリテンプレート: " << a << ", " << b << std::endl;
    }
};


template <typename A>
class Tuple<A, int>
{
private:
    A a;
    int b;

public:
    explicit Tuple(A a, int b): a{a}, b{b} {}
    void show() const
    {
        std::cout << "部分特殊化: " << a << ", " << b << std::endl;
    }
};


int main()
{
    Tuple<std::string, double> v1{"v1", 1.1};
    v1.show();
    Tuple<std::string, int> v2{"v2", 2};
    v2.show();
}
