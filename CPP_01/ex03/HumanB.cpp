#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL){}

void HumanB::setWeapon(Weapon &_weapon){
    weapon = &_weapon;
}

void HumanB::attack() const{
    if (weapon)
        std::cout << name << " attacks with his " <<
        weapon->getType() << std::endl;
    else
        std::cout << name << " can't attack" << std::endl;
}

