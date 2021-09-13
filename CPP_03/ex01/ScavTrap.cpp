#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default constructor called (ScavTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(50);
    setAttack_damage(20);
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &b) {
    std::cout << "Copy constructor called (ScavTrap)" << std::endl;
    *this = b;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){
    std::cout << "Specified constructor called (ScavTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(50);
    setAttack_damage(20);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b) {
    std::cout << "Assignation operator called (ScavTrap)" << std::endl;
    name = b.name;
    Hitpoints = b.Hitpoints;
    Energy_points = b.Energy_points;
    Attack_damage = b.Attack_damage;
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap [" << name << "] is a Gate keeper now!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (Hitpoints <= 0){
        std::cout << "ScavTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "ScavTrap [" << name << "] attacks " << target << ", causing " <<
        Attack_damage << " points of damage!" << std::endl;
        Energy_points -= 25;
    }else
        std::cout << "Not enough energy points to attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "ScavTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    std::cout << "ScavTrap [" << name << "] took " <<
    amount << " points of damage!" << std::endl;
    Hitpoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "ScavTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "ScavTrap [" << name << "] is repaired by " <<
        amount << " points of health!" << std::endl;
        Hitpoints += amount;
        Energy_points -= amount;
    }else
        std::cout << "Not enough energy points to repair" << std::endl;
}