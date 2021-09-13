#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Default constructor called (Cat)" << std::endl;
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Destructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &b) {
    std::cout << "Copy constructor called (Cat)" << std::endl;
    *this = b;
}

Cat &Cat::operator=(const Cat &b) {
    std::cout << "Assignation operator called (Cat)" << std::endl;
    type = b.type;
    return *this;
}

void Cat::makeSound()const {
    std::cout << "The cat meows" << std::endl;
}


WrongCat::WrongCat() {
    type = "wrong Cat";
    std::cout << "Default constructor called (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &b) {
    std::cout << "Copy constructor called (WrongCat)" << std::endl;
    *this = b;
}

WrongCat &WrongCat::operator=(const WrongCat &b) {
    std::cout << "Assignation operator called (WrongCat)" << std::endl;
    type = b.type;
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "The WrongCat BLLLLLLAAAAAAHHHH" << std::endl;
}