#include <iostream>


class Float
{
private:
    float value;

public:
    explicit Float(float value): value(value) {}
    void show() const { std::cout << value << std::endl; }

    friend Float operator+(const Float& lhs, const Float& rhs);
    friend Float operator-(const Float& lhs, const Float& rhs);
    friend Float operator*(const Float& lhs, const Float& rhs);
    friend Float operator/(const Float& lhs, const Float& rhs);
};


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
    Float b{2.25f};

    (a + b).show();
    (a - b).show();
    (a * b).show();
    (a / b).show();
}
