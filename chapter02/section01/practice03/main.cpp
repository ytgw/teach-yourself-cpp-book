#include <iostream>


struct S
{
    int x;
    int y;
};


union U
{
    S s;
};


int main()
{
    U u;
    u.s.x = 10;
    u.s.y = 20;

    std::cout << u.s.x << std::endl;  // 10が表示される
}
