#include "Fixed.hpp"
//CONSTRUCTORS AND DESTRUCTOR
Fixed::Fixed() : fixed_p_value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &b) : fixed_p_value(b.fixed_p_value){}

Fixed::Fixed(const int value) : fixed_p_value(value << bits){}

Fixed::Fixed(const float value) : fixed_p_value((int)roundf(value * (1 << bits))){}

//ARITHMETIC OPERATORS
Fixed &Fixed::operator=(Fixed const &b) {
    fixed_p_value = b.fixed_p_value;
    return *this;
}

Fixed Fixed::operator+(const Fixed &b)const {
    Fixed total;
    total.fixed_p_value = fixed_p_value + b.fixed_p_value;
    return total;
}

Fixed Fixed::operator-(const Fixed &b)const {
    Fixed total;
    total.fixed_p_value = fixed_p_value - b.fixed_p_value;
    return total;
}

Fixed Fixed::operator*(const Fixed &b)const  {
    Fixed total;
    total.fixed_p_value = (fixed_p_value * b.fixed_p_value) >> bits;
    return total;
}

Fixed Fixed::operator/(const Fixed &b)const  {
    Fixed total;
    total.fixed_p_value = (fixed_p_value << bits) / b.fixed_p_value;
    return total;
}

//COMPARISON OPERATORS
bool Fixed::operator<(const Fixed &b)const  {
    return fixed_p_value < b.fixed_p_value;
}

bool Fixed::operator>(const Fixed &b)const  {
    return fixed_p_value > b.fixed_p_value;
}

bool Fixed::operator<=(const Fixed &b)const  {
    return fixed_p_value <= b.fixed_p_value;
}

bool Fixed::operator>=(const Fixed &b)const  {
    return fixed_p_value >= b.fixed_p_value;
}

bool Fixed::operator==(const Fixed &b)const  {
    return fixed_p_value == b.fixed_p_value;
}

bool Fixed::operator!=(const Fixed &b)const  {
    return fixed_p_value != b.fixed_p_value;
}

//INCREMENT AND DECREMENT
Fixed &Fixed::operator++(){
    fixed_p_value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed old = *this;
    fixed_p_value++;
    return old;
}

Fixed &Fixed::operator--(){
    fixed_p_value--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    fixed_p_value--;
    return old;
}

//SOME FUNCTIONS
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

int &Fixed::min(int &a, int &b){
    if (a <= b)
        return a;
    return b;
}

int &Fixed::max(int &a, int &b){
    if (a >= b)
        return a;
    return b;
}

const int &Fixed::min(const int &a, const int &b){
    if (a <= b)
        return a;
    return b;
}

const int &Fixed::max(const int &a, const int &b){
    if (a >= b)
        return a;
    return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
    out << value.toFloat();
    return out;
}