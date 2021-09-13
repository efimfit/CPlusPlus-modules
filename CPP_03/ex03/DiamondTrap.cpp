#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("NoName_clap_name"), name ("NoName"){
    std::cout << "Default constructor called (DiamondTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(50);
    setAttack_damage(30);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor called (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &b){
    std::cout << "Copy constructor called (DiamondTrap)" << std::endl;
    *this = b;
}

DiamondTrap::DiamondTrap(std::string str)
: ClapTrap(str + "_clap_name"), name(str){

    std::cout << "Specified constructor called (DiamondTrap)" << std::endl;
    setHitpoint(100);
    setEnergy_points(50);
    setAttack_damage(30);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &b) {
    std::cout << "Assignation operator called (DiamondTrap)" << std::endl;
    name = b.name;
    Hitpoints = b.Hitpoints;
    Energy_points = b.Energy_points;
    Attack_damage = b.Attack_damage;
    ClapTrap::name = b.ClapTrap::name;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "Diamond_name: [" << name << "] Clap_name: [" << getName() << "]"
    << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "DiamondTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    std::cout << "DiamondTrap [" << name << "] took " <<
    amount << " points of damage!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "DiamondTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "DiamondTrap [" << name << "] is repaired by " <<
        amount << " points of health!" << std::endl;
        Hitpoints += amount;
        Energy_points -= amount;
    }else
        std::cout << "Not enough energy points to repair" << std::endl;
}