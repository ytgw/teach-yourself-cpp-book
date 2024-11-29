#include <iostream>
#include <vector>


int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};
    values.push_back(6);

    for (int e: values) { std::cout << e << std::endl;}
}
