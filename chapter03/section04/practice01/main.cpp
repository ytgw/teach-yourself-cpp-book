#include <iostream>
#include <format>


class Vector3D
{
    float x = 0;
    float y = 0;
    float z = 0;

public:
    void show();
};


void Vector3D::show()
{
    std::cout << std::format("x: {}, y: {}, z: {}", x, y, z) << std::endl;
}


int main()
{
    Vector3D instance;
    instance.show();
}
