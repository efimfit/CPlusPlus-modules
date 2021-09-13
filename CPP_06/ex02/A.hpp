#pragma once
#include "Base.hpp"

class A : public Base {
public:
    A();
    ~A();
    A(A const &b);
    A &operator=(A const &b);
};