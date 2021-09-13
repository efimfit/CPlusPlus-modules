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

WrongAnimal::WrongAnimal() : type("wrong NoName") {
    std::cout << "Default constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &b) {
    std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
    *this = b;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &b) {
    std::cout << "Assignation operator called (WrongAnimal)" << std::endl;
    type = b.type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound()const {
    std::cout << "..........wrong" << std::endl;

}