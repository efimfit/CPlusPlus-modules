#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &b);
    ScavTrap(std::string _name);

    ScavTrap &operator=(ScavTrap const &b);

    void    guardGate();
    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};