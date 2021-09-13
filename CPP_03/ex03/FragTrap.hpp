#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &b);
    FragTrap(std::string _name);

    FragTrap &operator=(FragTrap const &b);

    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    highFivesGuys(void);
};