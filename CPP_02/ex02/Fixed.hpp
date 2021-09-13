#pragma once
#include <iostream>
#include <cmath>

class Fixed{
private:
    int                 fixed_p_value;
    static const int    bits = 8;
public:
    //constructos + desctructor
    Fixed();
    ~Fixed();
    Fixed(const Fixed &b);
    Fixed(const int value);
    Fixed(const float value);

    //operators arithmetic
    Fixed &operator=(Fixed const &b);
    Fixed operator+(const Fixed &b)const;
    Fixed operator-(const Fixed &b)const;
    Fixed operator*(const Fixed &b)const;
    Fixed operator/(const Fixed &b)const;

    //comparison operators
    bool operator<(const Fixed &b)const;
    bool operator>(const Fixed &b)const;
    bool operator<=(const Fixed &b)const;
    bool operator>=(const Fixed &b)const;
    bool operator==(const Fixed &b)const;
    bool operator!=(const Fixed &b)const;

    //increment and decrement
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    //some functions
    int                 getRawBits( void ) const;
    void                setRawBits( int const raw );
    float               toFloat( void ) const;
    int                 toInt( void ) const;
    static int          &min(int &a, int &b);
    static int          &max(int &a, int &b);
    static const int    &min(const int &a, const int &b);
    static const int    &max(const int &a, const int &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);
