#include <iostream>


class product
{
    int price;

public:
    product(int price): price(price) {};  // クラス定義内で定義したメソッドは自動でインライン化される
    inline int get_price() const;
    inline void set_price(int price);
};


int product::get_price() const
{
    return price;
}


void product::set_price(int price)
{
    this->price = price;
}


int main()
{
    // 下記のように大きなループで計測したが、なぜかインライン化による高速化は感じなかった
    for (unsigned int i = 0; i < 0x7fffffff; i++) {
        product p(0);
        p.set_price(p.get_price() + 1);
    }
}
