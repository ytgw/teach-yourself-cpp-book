#include <iostream>
#include <vector>


int main()
{
    std::vector<int> aVector{1, 2, 3};
    aVector.erase(aVector.cbegin() + 1);
    for (int e: aVector) { std::cout << e << std::endl; }
}
