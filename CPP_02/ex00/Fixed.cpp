#include "Fixed.hpp"

Fixed::Fixed() : fixed_p_value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &b) : fixed_p_value(b.fixed_p_value){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &b) {
    fixed_p_value = b.fixed_p_value;
    std::cout << "Assignation operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_p_value;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed_p_value = raw;
}