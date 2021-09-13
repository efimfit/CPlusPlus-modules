#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(1, 1);
    Point b(1, 20.44f);
    Point c(30, 1);
    Point x1(4,53);
    Point x2(2,5);
    Point x3(6,2.1f);

    if (bsp(a, b, c, x1))
        std::cout << "X1: OK" << std::endl;
    else
        std::cout << "X1: ..." << std::endl;
    if (bsp(a, b, c, x2))
        std::cout << "X2: OK" << std::endl;
    else
        std::cout << "X2: ..." << std::endl;
    if (bsp(a, b, c, x3))
        std::cout << "X3: OK" << std::endl;
    else
        std::cout << "X3: ..." << std::endl;
}