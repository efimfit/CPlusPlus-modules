#pragma once
#include <iostream>

class Animal{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &b);
    Animal &operator=(Animal const &b);

    std::string     getType()const;
    virtual void    makeSound()const = 0;
};
