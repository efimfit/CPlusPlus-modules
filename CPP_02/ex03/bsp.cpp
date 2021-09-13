#include "Point.hpp"

Fixed define_square(Point const &a, Point const &b, Point const &x){
    Fixed sqr = (((a.get_x() - x.get_x()) * (b.get_y() - x.get_y())) -
            ((a.get_y() - x.get_y()) * (b.get_x() - x.get_x()))) / 2;
    sqr = (sqr < 0) ? (sqr * -1) : sqr;

    return sqr;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    Fixed big_square = define_square(a, b, c);
    Fixed small_square1 = define_square(a, b, point);
    Fixed small_square2 = define_square(a, c, point);
    Fixed small_square3 = define_square(c, b, point);

//    std::cout << big_square << std::endl;
    if (big_square == (small_square1 + small_square2 + small_square3))
        return true;
    return false;
}