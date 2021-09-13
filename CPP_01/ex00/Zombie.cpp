#include "Zombie.hpp"

Zombie::Zombie() : name("NoName"){}

Zombie::~Zombie(){
    std::cout << "[" << name << "] is gone..." << std::endl;
}

Zombie::Zombie(std::string _name) : name(_name){}

void Zombie::announce() const{
	std::cout << "[" << name << "] BraiiiiiiinnnzzzZ..." << std::endl;
}

