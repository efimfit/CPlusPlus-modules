#include "Animal.hpp"

Animal::Animal() : type("NoName") {
    std::cout << "Default constructor called (Animal)" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal &b) {
    std::cout << "Copy constructor called (Animal)" << std::endl;
    *this = b;
}

Animal &Animal::operator=(const Animal &b) {
    std::cout << "Assignation operator called (Animal)" << std::endl;
    type = b.type;
    return *this;
}

std::string Animal::getType()const {
    return type;
}

void Animal::makeSound() const{
    std::cout << ".........." << std::endl;

}
