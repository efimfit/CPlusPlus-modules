#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Default constructor called (Ice)" << std::endl;
}

Ice::~Ice() {
    std::cout << "Destructor called (Ice)" << std::endl;
}

Ice::Ice(const Ice &b) : AMateria("ice") {
    std::cout << "Copy constructor called (Ice)" << std::endl;
}

Ice &Ice::operator=(const Ice &b) {
    std::cout << "Assignation operator called (Ice)" << std::endl;
    return *this;
}

Ice *Ice::clone() const{
    Ice *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter &target) {
    std::cout<< "* shoots an ice bolt at [" << target.getName() << "] *" << std::endl;
}
