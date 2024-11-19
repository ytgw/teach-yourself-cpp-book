#include <iostream>


class Sample
{
private:
    static int value;

public:
    void set(int value) const { Sample::value = value; };
    int get() const { return value; };
};


int Sample::value = 0;


int main()
{
    Sample instance;

    instance.set(1);
    std::cout << instance.get() << std::endl;

    instance.set(2);
    std::cout << instance.get() << std::endl;
}
