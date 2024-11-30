#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> aVector{1, 2, 2, -1, 5, 3};
    std::sort(
        aVector.begin(),
        aVector.end(),
        [](int left, int right) { return left > right; }
    );

    for (int e: aVector) { std::cout << e << std::endl; }
}
