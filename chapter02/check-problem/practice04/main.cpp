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
    void set(type x, type y, type z);
    void show();

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


void Vector3D::set(type x, type y, type z = 0)
{
    x_ = x;
    y_ = y;
    z_ = z;
}


void Vector3D::show()
{
    std::cout << std::format("x: {}, y: {}, z: {}", x_, y_, z_) << std::endl;
}


int main()
{
    Vector3D::type x, y;

    std::cout << "Vector3Dのx, yを入力してください(例: 1 2) > ";
    std::cin >> x >> y;

    Vector3D vec;
    vec.set(x, y);
    vec.show();
}
