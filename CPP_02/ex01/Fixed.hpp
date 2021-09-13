#pragma once
#include <iostream>
#include <cmath>

class Fixed{
private:
    int                 fixed_p_value;
    static const int    bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &old);
    Fixed(const int value);
    Fixed(const float value);

    Fixed &operator=(const Fixed &old);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);
