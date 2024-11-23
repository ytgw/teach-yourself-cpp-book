#include <iostream>


class Foo
{
public:
    Foo() { std::cout << "Foo()" << std::endl; }
    ~Foo() { std::cout << "~Foo()" << std::endl; }
    void show() const { std::cout << "show" << std::endl; }
};


class SmartPointerOfFoo
{
private:
    Foo* ptr = nullptr;

public:
    SmartPointerOfFoo(Foo* ptr): ptr(ptr) { std::cout << "SmartPointerOfFoo(Foo* ptr)" << std::endl; };
    ~SmartPointerOfFoo()
    {
        std::cout << "~SmartPointerOfFoo()" << std::endl;
        delete ptr;
    }

    Foo* operator->() const { return ptr; }
    Foo& operator*() const {return *ptr; }
};


int main()
{
    SmartPointerOfFoo ptr{new Foo};
    ptr->show();
    (*ptr).show();
}
