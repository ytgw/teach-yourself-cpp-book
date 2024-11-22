#include <iostream>


int* allocate(unsigned int size)
{
    return new int[size]{};
}


int main()
{
    unsigned int size = 3;
    int* array = allocate(size);

    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }

    delete [] array;
}
