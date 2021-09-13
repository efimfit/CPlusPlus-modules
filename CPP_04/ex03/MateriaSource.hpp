#pragma once
#include <iostream>
#include "AMateria.hpp"

class IMateriaSource{
public:
    virtual             ~IMateriaSource() {}
    virtual void        learnMateria(AMateria *m) = 0;
    virtual AMateria*   createMateria(std::string const & type) = 0;
    virtual void        check_all() = 0;
};

class MateriaSource : public IMateriaSource{
private:
    AMateria            *learnt_materias[4];
public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(const MateriaSource &b);

    MateriaSource &operator=(MateriaSource const &b);

    virtual void        learnMateria(AMateria *m);
    virtual AMateria    *createMateria(std::string const & type);
    virtual void        check_all();
};
