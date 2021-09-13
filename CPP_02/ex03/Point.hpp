#pragma once
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
private:
    Fixed const     x;
    Fixed const     y;
public:
    Point();
    ~Point();
    Point(const Point &b);
    Point(const float x, const float y);

    Point &operator=( Point const &b);

    Fixed get_x() const;
    Fixed get_y() const;

};