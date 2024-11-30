#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    const std::vector<int> aVector{1, 2, 3, 1, 2, 3, 1};

    const int count = std::count(aVector.begin() + 1, aVector.end(), aVector[0]);
    std::cout << "先頭の要素と同じ要素の数(先頭を除く): " << count << std::endl;
}
