#pragma once
#include <iostream>
class Bureaucrat;

class Form{
private:
    std::string const   name;
    int const           grade_to_sign;
    int const           grade_to_exec;
    bool                is_signed;
public:
    Form();
    ~Form();
    Form(Form const &b);
    Form(std::string _name, int _grade_sign, int _grade_exec);

    Form &operator=(Form const &b);

    std::string const   getName()const;
    int const           getGrade_to_sign()const;
    int const           getGrade_to_exec()const;
    bool                get_is_signed()const;
    void                beSigned(Bureaucrat &target);

    class GradeTooHighException : public std::exception{
        virtual const char *what() const throw() {return "too high grade for using the form";}
    };
    class GradeTooLowException : public std::exception{
        virtual const char *what() const throw() {return "too low grade for using the form";}
    };
    class EmptyNameException : public std::exception{
        virtual const char *what() const throw() {return "name must be present";}
    };
};

std::ostream &operator<<(std::ostream &out, Form const &b);

#include "Bureaucrat.hpp"
