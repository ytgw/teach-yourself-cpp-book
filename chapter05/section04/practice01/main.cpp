#include <iostream>


class Example
{
private:
    int value = 0;
public:
    Example() { std::cout << "Example::Example()" << std::endl; }
    explicit Example(int value): value(value) { std::cout << "Example::Example(" << value << ")" << std::endl; }
    ~Example() { std::cout << "destructor" << std::endl; }
};


int main()
{
    Example* ex1 = new Example();
    delete ex1;

    Example* ex2 = new Example(1);
    delete ex2;
}
