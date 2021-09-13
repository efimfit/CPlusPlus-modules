#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    virtual ~Ice();
    Ice(const Ice &b);
    Ice &operator=(Ice const &b);

    virtual Ice     *clone() const;
    virtual void    use(ICharacter &target);
};
