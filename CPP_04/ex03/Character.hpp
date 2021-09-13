#pragma once
#include <iostream>

class AMateria;

class ICharacter{
public:
    virtual                     ~ICharacter() {}
    virtual std::string const   &getName() const = 0;
    virtual void                equip(AMateria* m) = 0;
    virtual void                unequip(int idx) = 0;
    virtual void                use(int idx, ICharacter &target) = 0;
    virtual void                check_all() = 0;

};

#include "AMateria.hpp"

class Character : public ICharacter{
private:
    std::string name;
    AMateria    *slots[4];
public:
    Character();
    Character(std::string name);
    virtual ~Character();
    Character(const Character &b);

    Character &operator=(Character const &b);

    virtual std::string const   &getName() const;
    virtual void                equip(AMateria *m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter &target);
    virtual void                check_all();
};
