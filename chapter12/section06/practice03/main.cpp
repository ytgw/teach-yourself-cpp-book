#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    const std::vector<int> src{0, 1, 2};
    std::vector<int> dest{10, 11, 12};

    std::copy(
        src.begin(),
        src.end(),
        std::inserter(dest, dest.begin())
    );

    for (int e: dest) { std::cout << e << std::endl; }
}
