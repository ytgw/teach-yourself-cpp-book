#include <iostream>


class Sample
{
private:
    int value = 3;

// public:  // friend関数はpublic的な扱いができる(非メンバ関数のため)
    friend void show(const Sample& other);
};


void show(const Sample& other)
{
    std::cout << other.value << std::endl;
}


int main()
{
    Sample instance;
    show(instance);
}
