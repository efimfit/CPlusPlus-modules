#pragma once
#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    virtual ~Cure();
    Cure(const Cure &b);
    Cure &operator=(Cure const &b);

    virtual Cure    *clone() const;
    virtual void    use(ICharacter &target);
};
