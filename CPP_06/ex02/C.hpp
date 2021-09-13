#pragma once
#include "Base.hpp"

class C : public Base {
public:
    C();
    ~C();
    C(C const &b);
    C &operator=(C const &b);
};