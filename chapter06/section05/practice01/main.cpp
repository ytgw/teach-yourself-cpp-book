#include <iostream>
#include <format>


class Integer
{
private:
    int value = 0;

public:
    Integer() {}
    explicit Integer(int value): value(value) {}

    bool operator<(const Integer rhs) const { return value < rhs.value; }
    bool operator>(const Integer rhs) const { return rhs < *this; }

    bool operator>=(const Integer rhs) const { return !(*this < rhs); }
    bool operator<=(const Integer rhs) const { return !(rhs < *this); }

    bool operator==(const Integer rhs) const { return (!(*this < rhs)) && (!(rhs < *this)); }
    bool operator!=(const Integer rhs) const { return !(*this == rhs); }

    int get() const { return value; }
};


void show_compare_result(Integer left, Integer right)
{
    std::cout << std::format("{} <  {}: {}", left.get(), right.get(), left <  right) << std::endl;
    std::cout << std::format("{} <= {}: {}", left.get(), right.get(), left <= right) << std::endl;

    std::cout << std::format("{} >  {}: {}", left.get(), right.get(), left >  right) << std::endl;
    std::cout << std::format("{} >= {}: {}", left.get(), right.get(), left >= right) << std::endl;

    std::cout << std::format("{} == {}: {}", left.get(), right.get(), left == right) << std::endl;
    std::cout << std::format("{} != {}: {}", left.get(), right.get(), left != right) << std::endl;
}


void show(Integer left, Integer right, bool result, std::string op)
{
    std::cout << left.get() << " " << op << " " << right.get() << ": ";
    if (result)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
}


int main()
{
    show_compare_result(Integer{1}, Integer{2});
    std::cout << std::endl;
    show_compare_result(Integer{2}, Integer{1});
    std::cout << std::endl;
    show_compare_result(Integer{1}, Integer{1});
}
