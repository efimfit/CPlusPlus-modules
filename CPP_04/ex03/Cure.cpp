#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Default constructor called (Cure)" << std::endl;
}

Cure::~Cure() {
    std::cout << "Destructor called (Cure)" << std::endl;
}

Cure::Cure(const Cure &b) : AMateria("cure"){
    std::cout << "Copy constructor called (Cure)" << std::endl;
}

Cure &Cure::operator=(const Cure &b) {
    std::cout << "Assignation operator called (Cure)" << std::endl;
    return *this;
}

Cure *Cure::clone() const{
    Cure *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter &target) {
    std::cout<< "* heals [" << target.getName() << "'s] wounds *" << std::endl;
}
