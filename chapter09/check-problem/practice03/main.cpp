#include <iostream>
#include <format>


template <typename Head>
Head sum(const Head& head)
{
    return head;
}


template <typename Head, typename... Tail>
Head sum(const Head& head, const Tail&... tails)
{
    return head + sum(tails...);
}


template <typename... T>
void show_sum(T&&... args)
{
    std::cout << sum(std::forward<T>(args)...) << std::endl;
}


int main()
{
    show_sum(1, 2, 3);
    show_sum(1.1, 2.1, 3.1);
}
