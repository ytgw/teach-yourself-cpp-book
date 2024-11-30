#include <iostream>
#include <set>


int main()
{
    std::set<int> aSet{1, 2, 2};
    aSet.insert(1);
    aSet.insert(3);

    for (int e: aSet) { std::cout << e << std::endl; }
}
