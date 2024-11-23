#include <iostream>
#include <memory>


class A
{
private:
    int value = 0;

public:
    explicit A(int value): value(value) { std::cout << "constructor: value=" << value << std::endl; }
    ~A() { std::cout << "destructor" << std::endl; }

    void show() const { std::cout << value << std::endl; }
};


int main()
{
    std::unique_ptr<A> a{new A{1}};
    a->show();

    std::unique_ptr<A> b = std::make_unique<A>(3);
    b->show();
}
