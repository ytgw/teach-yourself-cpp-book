#include <iostream>


class Foo
{
public:
    explicit Foo(bool shoud_throw)
    {
        if (shoud_throw)
        {
            throw std::runtime_error("Foo::Foo()");
        }
        else
        {
            std::cout << "constructor" << std::endl;
        }
    }
    ~Foo() { std::cout << "destructor" << std::endl; }
    void show() const { std::cout << "Foo::show()" << std::endl; }
};


int main()
{
    std::cout << "new Foo[2]{Foo(false), Foo(true)}" << std::endl;
    try
    {
        Foo* foos = new Foo[2]{Foo(false), Foo(true)};
        foos[0].show();
    }
    catch (std::exception& e)
    {
        std::cout << "キャッチの内部: " << e.what() << std::endl;
    }

    std::cout << "new Foo[2]{Foo(true), Foo(false)}" << std::endl;
    try
    {
        Foo* foos = new Foo[2]{Foo(true), Foo(false)};
        foos[0].show();
    }
    catch (std::exception& e)
    {
        std::cout << "キャッチの内部: " << e.what() << std::endl;
    }
}
