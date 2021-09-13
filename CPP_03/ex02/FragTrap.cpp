#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Default constructor called (FragTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(100);
    setAttack_damage(30);
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &b) {
    std::cout << "Copy constructor called (FragTrap)" << std::endl;
    *this = b;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
    std::cout << "Specified constructor called (FragTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(100);
    setAttack_damage(30);
}

FragTrap &FragTrap::operator=(const FragTrap &b) {
    std::cout << "Assignation operator called (FragTrap)" << std::endl;
    name = b.name;
    Hitpoints = b.Hitpoints;
    Energy_points = b.Energy_points;
    Attack_damage = b.Attack_damage;
    return *this;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "FragTrap [" << name << "]: Give me five, bro!" << std::endl;

}

void FragTrap::attack(const std::string &target) {
    if (Hitpoints <= 0){
        std::cout << "FragTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "FragTrap [" << name << "] attacks " << target << ", causing " <<
        Attack_damage << " points of damage!" << std::endl;
        Energy_points -= 50;
    }else
        std::cout << "Not enough energy points to attack" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "FragTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    std::cout << "FragTrap [" << name << "] took " <<
    amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "FragTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "FragTrap [" << name << "] is repaired by " <<
        amount << " points of health!" << std::endl;
        Hitpoints += amount;
        Energy_points -= amount;
    }else
        std::cout << "Not enough energy points to repair" << std::endl;
}