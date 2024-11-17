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
    type get_x();
    type get_y();
    type get_z();
    void set_x(type value);
    void set_y(type value);
    void set_z(type value);
};


Vector3D::type Vector3D::get_x() { return x_; }
Vector3D::type Vector3D::get_y() { return y_; }
Vector3D::type Vector3D::get_z() { return z_; }


void Vector3D::set_x(type value) { x_ = value; }
void Vector3D::set_y(type value) { y_ = value; }
void Vector3D::set_z(type value) { z_ = value; }


int main()
{
    Vector3D vec;
    vec.get_x();
}
