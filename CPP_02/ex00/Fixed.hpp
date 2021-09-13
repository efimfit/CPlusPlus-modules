#pragma once
#include <iostream>

class Fixed{
private:
    int                 fixed_p_value;
    static const int    bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &old);

    Fixed &operator=(const Fixed &old);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};