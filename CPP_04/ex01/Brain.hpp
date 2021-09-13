#pragma once
#include "Animal.hpp"

class Brain{
public:
    std::string ideas[100];

    Brain();
    ~Brain();
    Brain(const Brain &b);
    Brain &operator=(Brain const &b);
};