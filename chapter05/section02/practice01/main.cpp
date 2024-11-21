#include <iostream>


class product
{
    int id = 0;
    std::string name = "noname";
    int price = 0;

public:
    product() {};
    explicit product(int id, std::string name, int price): id(id), name(name), price(price) {};
    void show();
};


void product::show()
{
    std::cout << "id: " << id << ", name: " << name << ", price: " << price << std::endl;
}


int main()
{
    product p[4] =
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000}
    };

    for (product e: p)
    {
        e.show();
    }
}
