#include <iostream>


struct product
{
    int id;
    int price;
    int stock;
};


void show_product(product a_product)
{
    std::cout << "商品ID: " << (&a_product)->id << std::endl;
    std::cout << "単価: " << (&a_product)->price << std::endl;
    std::cout << "在庫数: " << (&a_product)->stock << std::endl;
}


int main()
{
    product pen = {0, 100, 200};

    show_product(pen);
}
