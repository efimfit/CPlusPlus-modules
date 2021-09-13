#include "whatever.hpp"

int main(void)
{
    double n = 3.001, m = 3.0;
    std::cout << max(n, m) << std::endl;
    std::cout << min(n, m) << std::endl;
    swap(n, m);
    std::cout << n << " " << m << std::endl;
    std::cout << "----------------------" << std::endl;
    std::string s1 = "hello", s2 = "bye";
    std::cout << max(s1, s2) << std::endl;
    std::cout << min(s1, s2) << std::endl;
    swap(s1, s2);
    std::cout << s1 << " " << s2 << std::endl;
    std::cout << "----------------------" << std::endl;


    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
