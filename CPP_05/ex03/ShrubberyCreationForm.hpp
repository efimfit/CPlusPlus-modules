#pragma once
#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
public:
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &b);
    ShrubberyCreationForm(std::string const &target);

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &b);

    virtual void    execute(Bureaucrat const & executor) const;
};
