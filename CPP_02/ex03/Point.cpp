#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::~Point() {}

Point::Point(const Point &b) : x(b.x), y(b.y){}

Point::Point(const float _x, const float _y) : x(_x), y(_y){}

Point &Point::operator=( Point const &b) {
    (void)b;
    return *this;
}

Fixed Point::get_x() const{
    return x;
}
Fixed Point::get_y() const{
    return y;
}
