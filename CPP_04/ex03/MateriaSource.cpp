#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "Default constructor called (MateriaSource)" << std::endl;
    for (int i = 0; i < 4; i++)
        learnt_materias[i] = NULL;
}

MateriaSource::~MateriaSource() {
    std::cout << "Destructor called (MateriaSource)" << std::endl;
    for (int i = 0; i < 4; i++){
        if (learnt_materias[i])
            delete learnt_materias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &b) {
    std::cout << "Copy constructor called (MateriaSource)" << std::endl;
    for (int i = 0; i < 4; i++)
        learnt_materias[i] = NULL;
    *this = b;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &b) {
    std::cout << "Assignation operator called (MateriaSource)" << std::endl;
    for (int i = 0; i < 4; i++){
        if (learnt_materias[i])
            delete learnt_materias[i];
        if (b.learnt_materias[i])
            learnt_materias[i] = b.learnt_materias[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++){
        if (!learnt_materias[i] && m && m->getType() != ""){
            learnt_materias[i] = m->clone();
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++){
        if (learnt_materias[i] && learnt_materias[i]->getType() == type){
            AMateria *copy = learnt_materias[i]->clone();
            return copy;
        }
    }
    return 0;
}

void MateriaSource::check_all() {
    for (int i = 0; i < 4; i++){
        std::cout << "[src slot]: ";
        if (learnt_materias[i])
            std::cout << learnt_materias[i]->getType() << std::endl;
        else
            std::cout << "empty" << std::endl;
    }
    std::cout << "---------------------" << std::endl;
}