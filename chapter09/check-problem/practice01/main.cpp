#include <iostream>
#include <format>


template <typename T>
class Value
{
private:
    T value;

public:
    explicit Value(T value): value{value} {}

    template <typename U>
    void show(U u) const;
};


template <typename T>
template <typename U>
void Value<T>::show(U u) const
{
    std::cout << "T: " << value << ", U: " << u << std::endl;
}


int main()
{
    Value v{"str"};
    v.show(2);
}
