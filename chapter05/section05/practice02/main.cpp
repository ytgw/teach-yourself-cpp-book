#include <iostream>


class InitilizarListViewer
{
public:
    InitilizarListViewer(std::initializer_list<int> list);
};


InitilizarListViewer::InitilizarListViewer(std::initializer_list<int> list)
{
    for (int e: list)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;
}


int main()
{
    InitilizarListViewer viewer{1, 2, 3};
}
