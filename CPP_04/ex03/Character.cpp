#include "Character.hpp"

Character::Character() : name("NoName character"){
    std::cout << "Default constructor called (Character)" << std::endl;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(std::string _name) : name(_name) {
    std::cout << "Default constructor called (Character)" << std::endl;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::~Character() {
    std::cout << "Destructor called (Character)" << std::endl;
    for (int i = 0; i < 4; i++){
        if (slots[i])
            delete slots[i];
    }
}

Character::Character(const Character &b) {
    std::cout << "Copy constructor called (Character)" << std::endl;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    *this = b;
}

Character &Character::operator=(const Character &b) {
    std::cout << "Assignation operator called (Character)" << std::endl;
    for (int i = 0; i < 4; i++){
        if (slots[i])
            delete slots[i];
        if (b.slots[i])
            slots[i] = b.slots[i]->clone();
    }
    name = b.name;
    return *this;
}

std::string const &Character::getName() const{
    return name;
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (!slots[i] && m && m->getType() != ""){
            slots[i] = m->clone();
            break ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3){
        delete slots[idx];
        slots[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx <= 3 && slots[idx])
        slots[idx]->use(target);
}

void Character::check_all() {
    for (int i = 0; i < 4; i++){
        std::cout << "[char slot]: ";
        if (slots[i])
            std::cout << slots[i]->getType() << std::endl;
        else
            std::cout << "empty" << std::endl;
    }
    std::cout << "---------------------" << std::endl;
}
