#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain *my_brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &b);
    Cat &operator=(Cat const &b);

    virtual void    makeSound()const;
};

