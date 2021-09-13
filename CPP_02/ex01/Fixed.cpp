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

Fixed::Fixed(const int value) : fixed_p_value(value << bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed_p_value((int)roundf(value * (1 << bits))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &b) {
    std::cout << "Assignation operator called" << std::endl;
    fixed_p_value = b.fixed_p_value;
    return *this;
}

int Fixed::getRawBits() const {
    return fixed_p_value;
}

void Fixed::setRawBits(const int raw) {
    fixed_p_value = raw;
}

int Fixed::toInt() const {
    return fixed_p_value >> bits;
}

float Fixed::toFloat() const {
    return (float)fixed_p_value / ( 1 << bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
    out << value.toFloat();
    return out;
}