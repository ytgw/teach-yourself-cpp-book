#include <iostream>


class Counter
{
private:
    static int count;

public:
    Counter() { count++; };
    static int get_count() { return count; };
};


int Counter::count = 0;


int main()
{
    Counter a;
    std::cout << Counter::get_count() << std::endl;

    Counter b;
    std::cout << Counter::get_count() << std::endl;
}
