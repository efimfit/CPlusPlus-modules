#pragma once
#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &b);
    Dog &operator=(Dog const &b);

    virtual void    makeSound()const;
};