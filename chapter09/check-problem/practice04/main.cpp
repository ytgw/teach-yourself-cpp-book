#include <iostream>
#include <format>



template <typename T>
void show_even_or_odd(T num)
{
    static_assert(std::is_integral<T>::value);

    if (num % 2 == 0) { std::cout << "even" << std::endl; }
    else { std::cout << "odd" << std::endl; }
}


int main()
{
    show_even_or_odd(2);
    show_even_or_odd(1);
    // show_even_or_odd(1.5);  // コンパイルエラー
}
