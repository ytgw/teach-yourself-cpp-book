#include <iostream>
#include <list>


int main()
{
    std::list<int> values = {3, 1, 2, 0, -1};
    values.sort();

    for (int e: values) { std::cout << e << std::endl;}
}
