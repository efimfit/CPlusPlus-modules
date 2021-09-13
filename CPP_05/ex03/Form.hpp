#pragma once
#include <iostream>
class Bureaucrat;

class Form{
private:
    std::string const   name;
    int const           grade_to_sign;
    int const           grade_to_exec;
    bool                is_signed;
    std::string         target;
public:
    Form();
    virtual ~Form();
    Form(Form const &b);
    Form(std::string _name, int _grade_sign, int _grade_exec, std::string _target);

    Form &operator=(Form const &b);

    std::string const   getName()const;
    int const           getGrade_to_sign()const;
    int const           getGrade_to_exec()const;
    bool                get_is_signed()const;
    void                beSigned(Bureaucrat &target);
    std::string         getTarget()const;
    virtual void        execute(Bureaucrat const & executor) const = 0;

    void                setTarget(std::string target);
    void                set_is_signed(bool a);

    class GradeTooHighException : public std::exception{
        virtual const char *what() const throw() {return "too high grade for using the form";}
    };
    class GradeTooLowException : public std::exception{
        virtual const char *what() const throw() {return "too low grade for using the form";}
    };
    class EmptyNameException : public std::exception{
        virtual const char *what() const throw() {return "name must be present";}
    };
    class NotSignException : public std::exception{
        virtual const char *what() const throw() {return "the form is not signed yet";}
    };
    class ErrorOpenFileException : public std::exception{
        virtual const char *what() const throw() {return "The output file can't be opened";}
    };
};

std::ostream &operator<<(std::ostream &out, Form const &b);

#include "Bureaucrat.hpp"
