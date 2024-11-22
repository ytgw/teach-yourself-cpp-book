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

    Float operator++();
    Float operator++(int);
};


Float Float::operator++()
{
    ++value;
    return *this;
}


Float Float::operator++(int)
{
    auto tmp = *this;
    ++(*this);
    return tmp;
}


int main()
{
    Float a = 1.5f;
    (a++).show();
    (++a).show();
    a.show();
}
