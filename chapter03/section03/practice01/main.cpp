#include <iostream>
#include <format>


class Book
{
private:
    std::string title;
    std::string writer;
    int price;

public:
    Book(std::string title, std::string writer, int price);
    void show() const;
};


Book::Book(std::string title, std::string writer, int price): title(title), writer(writer), price(price) {}


void Book::show() const
{
    std::cout << std::format("title: {}, write: {}, price {}", title, writer, price) << std::endl;
}


int main()
{
    Book instance("title", "writer", 2);
    instance.show();
}
