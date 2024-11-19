#include <iostream>


union Base
{
    double x = -1.1;
    int y;
};


// 共用体は継承できない
// union Derived: public Base
// {
//     double z;
// };


int main()
{
    Base a;
    std::cout << a.x << " " << a.y << std::endl;
}
