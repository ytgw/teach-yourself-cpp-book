#include <iostream>


int main()
{
    float f = 100.001f;
    f -= 100;
    std::cout << f << std::endl;  // 量子化誤差?のため0.001か、それに近い値が表示される(0.000999451だった)
}
