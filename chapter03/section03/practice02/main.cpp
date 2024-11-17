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
    Book(const Book& other);
    void show() const;
};


Book::Book(std::string title, std::string writer, int price): title(title), writer(writer), price(price) {}
Book::Book(const Book& other): title(other.title), writer(other.writer), price(other.price) {}


void Book::show() const
{
    std::cout << std::format("title: {}, write: {}, price {}", title, writer, price) << std::endl;
}


int main()
{
    Book book1("title", "writer", 2);
    book1.show();

    Book book2(book1);
    book2.show();
}
