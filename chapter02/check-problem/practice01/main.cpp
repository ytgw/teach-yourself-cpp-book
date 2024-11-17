#include <iostream>
#include <format>


class Vector3D
{
private:
    using type = int;
    type x_;
    type y_;
    type z_;

public:
    Vector3D(int x, int y, int z);
};


Vector3D::Vector3D(int x, int y, int z): x_(x), y_(y), z_(z) {}


int main()
{
    Vector3D vec(1, 2, 3);
}
