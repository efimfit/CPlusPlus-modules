#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Default constructor called (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &b) {
    std::cout << "Copy constructor called (Cat)" << std::endl;
    *this = b;
}

Dog &Dog::operator=(const Dog &b) {
    std::cout << "Assignation operator called (Cat)" << std::endl;
    type = b.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "The Dog barks" << std::endl;
}