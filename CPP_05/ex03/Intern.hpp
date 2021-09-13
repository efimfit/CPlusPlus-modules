#pragma once
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Form;

class Intern{

public:
    Intern();
    ~Intern();
    Intern(Intern const &b);

    Intern &operator=(Intern const &b);

    Form    *CreateShrubberyForm(const std::string &target);
    Form    *CreateRobotomyForm(const std::string &target);
    Form    *CreatePresidentialForm(const std::string &target);
    Form    *makeForm(const std::string &name, const std::string &target);

    class ErrorCreationException : public std::exception{
        virtual const char *what() const throw() {return "can't create this form";}
    };
};

#include "Form.hpp"
