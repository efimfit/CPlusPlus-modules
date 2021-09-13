#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
    std::string name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &b);
    DiamondTrap(std::string _name);

    DiamondTrap &operator=(DiamondTrap const &b);

    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    using   ScavTrap::attack;
    void    whoAmI();
};