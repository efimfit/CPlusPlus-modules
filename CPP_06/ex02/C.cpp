#include "C.hpp"

C::C() {}

C::~C() {}

C::C(const C &b){
    *this = b;
}

C &C::operator=(const C &b)  {
    (void)b;
    return *this;
}