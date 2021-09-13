#pragma once
#include <iostream>
#include "Character.hpp"

class AMateria {
protected:
    std::string const   type;
public:
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria &b);
    AMateria(std::string const &type);

    AMateria &operator=(AMateria const &b);

    std::string const   &getType() const;
    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target);

};
