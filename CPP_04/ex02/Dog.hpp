#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
    Brain *my_brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &b);
    Dog &operator=(Dog const &b);

    virtual void    makeSound()const;
};