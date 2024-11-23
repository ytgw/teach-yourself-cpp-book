#include <iostream>


class Integer
{
private:
    int value = 0;

public:
    explicit Integer(int value): value(value) {}
    void show() const { std::cout << value << std::endl; }

    Integer operator+(const Integer& rhs) const { return Integer{value + rhs.value}; }
    Integer operator-(const Integer& rhs) const { return Integer{value - rhs.value}; }
    Integer operator*(const Integer& rhs) const { return Integer{value * rhs.value}; }
    Integer operator/(const Integer& rhs) const { return Integer{value / rhs.value}; }
};


int main()
{
    (Integer{3} + Integer{2}).show();
    (Integer{3} - Integer{2}).show();
    (Integer{3} * Integer{2}).show();
    (Integer{3} / Integer{2}).show();
}
