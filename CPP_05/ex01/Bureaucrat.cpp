#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName"), grade(150) {
    std::cout << "Default constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade) {
    std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade){
    std::cout << "Specified constructor called (Bureaucrat)" << std::endl;
    if (name == "")
        throw EmptyNameException();
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)  {
    std::cout << "Assignation operator called (Bureaucrat)" << std::endl;
    grade = b.grade;
    return *this;
}

std::string const Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::increment() {
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
    std::cout << *this << std::endl;
}

void Bureaucrat::decrement() {
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
    std::cout << *this << std::endl;
}

void Bureaucrat::signForm(Form &target) {
    try{
        target.beSigned(*this);
        std::cout << "[" << name << "] signs [" << target.getName() << "]" << std::endl;
    }
    catch (std::exception &exception){
        std::cout << "[" << name << "] cannot sign [" << target.getName() << "]" <<
        " because of " << exception.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b){
    out << "[" << b.getName() << "], grade: " << b.getGrade() << std::endl;
    return out;
}