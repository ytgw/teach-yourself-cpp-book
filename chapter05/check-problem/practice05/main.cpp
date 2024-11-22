#include <iostream>


void enumerate(int* begin, int* end, void (*fn)(int))
{
    for (int* address = begin; address != end; address++)
    {
        fn(*address);
    }
}


int main()
{
    int array[] = {1, 2, 3, 5, 7, 11, 13};

    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(
        array,
        array + length,
        [](int v) -> void { std::cout << v << std::endl; }
    );
}
