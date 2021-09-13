#pragma once
#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &b);
    Cat &operator=(Cat const &b);

    virtual void    makeSound()const;
};

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat &b);
    WrongCat &operator=(WrongCat const &b);
    void    makeSound()const;
};