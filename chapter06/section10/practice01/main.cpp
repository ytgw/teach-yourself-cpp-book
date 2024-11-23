#include <iostream>


class Float
{
private:
    float value;

public:
    explicit Float(float value): value(value) {}
    void show() const { std::cout << value << std::endl; }

    Float& operator=(const Float& other);

    friend Float operator+(const Float& lhs, const Float& rhs);
    friend Float operator-(const Float& lhs, const Float& rhs);
    friend Float operator*(const Float& lhs, const Float& rhs);
    friend Float operator/(const Float& lhs, const Float& rhs);
};


Float& Float::operator=(const Float& other)
{
    value = other.value;
    return (*this);
}


Float operator+(const Float& lhs, const Float& rhs)
{
    return Float{lhs.value + rhs.value};
}


Float operator-(const Float& lhs, const Float& rhs)
{
    return Float{lhs.value - rhs.value};
}


Float operator*(const Float& lhs, const Float& rhs)
{
    return Float{lhs.value * rhs.value};
}


Float operator/(const Float& lhs, const Float& rhs)
{
    return Float{lhs.value / rhs.value};
}


int main()
{
    Float a{1.5f};
    Float b{0.0f};

    b = a;
    a = a + Float{2.0f};

    a.show();
    b.show();
}
