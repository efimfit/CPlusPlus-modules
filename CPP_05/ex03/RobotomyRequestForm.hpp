#pragma once
#include <iostream>
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm();
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &b);
    RobotomyRequestForm(std::string const &target);

    RobotomyRequestForm &operator=(RobotomyRequestForm const &b);

    virtual void    execute(Bureaucrat const & executor) const;
};
