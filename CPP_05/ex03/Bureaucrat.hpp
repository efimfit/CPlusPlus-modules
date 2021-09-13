#pragma once
#include <iostream>
class Form;

class Bureaucrat{
private:
    std::string const   name;
    int                 grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &b);
    Bureaucrat(std::string name, int grade);

    Bureaucrat &operator=(Bureaucrat const &b);

    std::string const   getName()const;
    int                 getGrade()const;
    void                increment();
    void                decrement();
    void                signForm(Form &target);
    void                executeForm(Form const &form);

    class GradeTooHighException : public std::exception{
        virtual const char *what() const throw() {return "too high grade";}
    };
    class GradeTooLowException : public std::exception{
        virtual const char *what() const throw() {return "too low grade";}
    };
    class EmptyNameException : public std::exception{
        virtual const char *what() const throw() {return "name must be present";}
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);
#include "Form.hpp"
