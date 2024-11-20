#include <iostream>


namespace A
{
    namespace B
    {
        namespace C
        {
            void hello()
            {
                std::cout << "hello" << std::endl;
            }
        }
    }
}


int main()
{
    namespace D = A::B::C;
    D::hello();
}
