#pragma once
#include <iostream>

class ClapTrap{
protected:
    std::string name;
    int         Hitpoints;
    int         Energy_points;
    int         Attack_damage;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &b);
    ClapTrap(std::string _name);

    ClapTrap &operator=(ClapTrap const &b);

    std::string getName();
    int         getHitpoints();
    int         getAttack_damage();
    int         getEnergy_points();

    void        setName(std::string name);
    void        setHitpoint(int amount);
    void        setEnergy_points(int amount);
    void        setAttack_damage(int amount);

    void        attack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};