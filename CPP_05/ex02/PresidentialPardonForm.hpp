#pragma once
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm();
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &b);
    PresidentialPardonForm(std::string const &target);

    PresidentialPardonForm &operator=(PresidentialPardonForm const &b);

    virtual void    execute(Bureaucrat const & executor) const;
};
