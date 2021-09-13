#include "A.hpp"

A::A() {}

A::~A() {}

A::A(const A &b){
    *this = b;
}

A &A::operator=(const A &b)  {
    (void)b;
    return *this;
}