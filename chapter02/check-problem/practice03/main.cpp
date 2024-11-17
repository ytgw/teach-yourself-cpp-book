#include <iostream>
#include <format>


class Vector3D
{
public:
    using type = int;
    type get_x();
    type get_y();
    type get_z();
    void set_x(type value);
    void set_y(type value);
    void set_z(type value);

private:
    type x_;
    type y_;
    type z_;
};


Vector3D::type Vector3D::get_x() { return x_; }
Vector3D::type Vector3D::get_y() { return y_; }
Vector3D::type Vector3D::get_z() { return z_; }


void Vector3D::set_x(type value) { x_ = value; }
void Vector3D::set_y(type value) { y_ = value; }
void Vector3D::set_z(type value) { z_ = value; }


int main()
{
    Vector3D::type x, y, z;

    std::cout << "Vector3Dのx, y, zを入力してください(例: 1 2 3) > ";
    std::cin >> x >> y >> z;

    Vector3D vec;
    vec.set_x(x);
    vec.set_y(y);
    vec.set_z(z);
}
