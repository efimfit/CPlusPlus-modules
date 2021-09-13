#include "Fixed.hpp"

int main(){

    Fixed a(2);
    Fixed b(5);
    Fixed c = (b - a);
    Fixed d(5.25f * 2);
    Fixed e(c * 10 / 3);
    Fixed f(b * d);
    Fixed const g(Fixed(4) + Fixed(4));

    std::cout << "a: " << a << std::endl;
    std::cout << "b: "<< b << std::endl;
    std::cout << "c: "<< c << std::endl;
    std::cout << "d: "<< d << std::endl;
    std::cout << "e: "<< e << std::endl;
    std::cout << "f: "<< f << std::endl;
    std::cout << "g: "<< g << std::endl << std::endl;

    std::cout << "d > e: " << (d > e) << std::endl;
    std::cout << "d <= e: " << (d <= e) << std::endl;
    std::cout << "d > e: " << (d > e) << std::endl;
    std::cout << "d >= e: " << (d >= e) << std::endl;
    std::cout << "d != e: " << (d != e) << std::endl;
    std::cout << "d == 10.5: " << (d == 10.5f) << std::endl << std::endl;

    std::cout << "e++ " << e++ << std::endl;
    std::cout << "e " << e << std::endl;
    std::cout << "++e " << ++e << std::endl;
    std::cout << "e " << e << std::endl;
    std::cout << "e-- " << e-- << std::endl;
    std::cout << "--e " << --e << std::endl << std::endl;

    std::cout << "max(e, g): " << Fixed::max(e.getRawBits(), g.getRawBits()) << std::endl;
    std::cout << "min(e, g): " << Fixed::min(e.getRawBits(), g.getRawBits()) << std::endl;

    return 0;
}