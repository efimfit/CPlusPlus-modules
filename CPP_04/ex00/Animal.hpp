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
    virtual void    makeSound()const;
};

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &b);
    WrongAnimal &operator=(WrongAnimal const &b);

    std::string getType()const;
    void        makeSound()const;
};