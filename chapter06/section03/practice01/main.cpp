#include <iostream>


class Float
{
private:
    float value;

public:
    Float(float value): value(value) {}
    void show() const { std::cout << value << std::endl; }

    Float operator+(const Float& rhs) const { return Float{value + rhs.value}; }
    Float operator-(const Float& rhs) const { return Float{value - rhs.value}; }
    Float operator*(const Float& rhs) const { return Float{value * rhs.value}; }
    Float operator/(const Float& rhs) const { return Float{value / rhs.value}; }

    Float operator+() const { return *this; }
    Float operator-() const { return Float(-value); }
};


int main()
{
    Float a = 1.5f;
    (+a).show();
    (-a).show();
}
