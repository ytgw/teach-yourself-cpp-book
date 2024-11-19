#include <iostream>


class vector3d
{
    float x = 0;
    float y = 0;
    float z = 0;

public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);
    void show() const;
};


vector3d::vector3d() {}
vector3d::vector3d(float x, float y): x(x), y(y) {}
vector3d::vector3d(float x, float y, float z): x(x), y(y), z(z) {}


void vector3d::show() const
{
    std::cout << x << ", " << y << ", " << z << std::endl;
}


int main()
{
    vector3d a, b(1, 2), c(3, 4, 5);
    a.show();
    b.show();
    c.show();
}
