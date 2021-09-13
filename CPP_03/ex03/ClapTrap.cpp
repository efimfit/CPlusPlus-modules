#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("NoName"), Hitpoints(10), Energy_points(10),
Attack_damage(0) {
    std::cout << "Default constructor called (ClapTrap)" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &b) {
    std::cout << "Copy constructor called (ClapTrap)" << std::endl;
    *this = b;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), Hitpoints(10), Energy_points(10),
Attack_damage(0) {
    std::cout << "Specified constructor called (ClapTrap)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b) {
    std::cout << "Assignation operator called (ClapTrap)" << std::endl;
    name = b.name;
    Hitpoints = b.Hitpoints;
    Energy_points = b.Energy_points;
    Attack_damage = b.Attack_damage;
    return *this;
}

std::string ClapTrap::getName() {
    return name;
}
int ClapTrap::getHitpoints() {
    return Hitpoints;
}

int ClapTrap::getAttack_damage(){
    return Attack_damage;
}

int ClapTrap::getEnergy_points(){
    return Energy_points;
}

void ClapTrap::setName(std::string _name){
    name = _name;
}
void ClapTrap::setHitpoint(int amount){
    Hitpoints = amount;
}
void ClapTrap::setEnergy_points(int amount){
    Energy_points = amount;
}
void ClapTrap::setAttack_damage(int amount){
    Attack_damage = amount;
}

void ClapTrap::attack(const std::string &target) {
    if (Hitpoints <= 0){
        std::cout << "ClapTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "ClapTrap [" << name << "] attacks " << target << ", causing " <<
        Attack_damage << " points of damage!" << std::endl;
        Energy_points -= 5;
    }else
        std::cout << "Not enough energy points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "ClapTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap [" << name << "] took " <<
    amount << " points of damage!" << std::endl;
    Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Hitpoints <= 0){
        std::cout << "ClapTrap [" << name << "] is dead" << std::endl;
        return ;
    }
    if (Energy_points > 0){
        std::cout << "ClapTrap [" << name << "] is repaired by " <<
        amount << " points of health!" << std::endl;
        Hitpoints += amount;
        Energy_points -= amount;
    }else
        std::cout << "Not enough energy points to repair" << std::endl;
}

