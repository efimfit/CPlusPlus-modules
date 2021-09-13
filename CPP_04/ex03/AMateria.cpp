#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "Default constructor called (AMateria)" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "Destructor called (AMateria)" << std::endl;
}

AMateria::AMateria(const AMateria &b) {
    std::cout << "Copy constructor called (AMateria)" << std::endl;
    *this = b;
}

AMateria::AMateria(std::string const &_type) : type(_type){
    std::cout << "Specified constructor called (AMateria)" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &b){
    std::cout << "Assignation operator called (AMateria)" << std::endl;
    (void)b;
    return *this;
}

std::string const &AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter &target) {}