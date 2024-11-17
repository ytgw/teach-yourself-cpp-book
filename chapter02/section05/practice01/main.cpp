#include <iostream>


class LongLongLongLongLongLongNameClass
{
public:
    int get();
};


int LongLongLongLongLongLongNameClass::get()
{
    return 0;
}


int main()
{
    using LongNameClass = LongLongLongLongLongLongNameClass;
    LongNameClass instance;
    std::cout << instance.get() << std::endl;
}
