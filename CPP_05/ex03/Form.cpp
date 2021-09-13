#include "Form.hpp"

Form::Form() : name("NoName"), grade_to_sign(150), grade_to_exec(150), is_signed(false), target("NO") {
    std::cout << "Default constructor called (Form)" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor called (Form)" << std::endl;
}

Form::Form(const Form &b) : name(b.name), grade_to_sign(b.grade_to_sign),
grade_to_exec(b.grade_to_exec), is_signed(b.is_signed), target(b.target) {
    std::cout << "Copy constructor called (Form)" << std::endl;
}

Form::Form(std::string _name, int _grade_sign, int _grade_exec, std::string _target)
: name(_name), grade_to_sign(_grade_sign), grade_to_exec(_grade_exec), is_signed(false), target(_target){
    std::cout << "Specified constructor called (Form)" << std::endl;
    if (name == "")
        throw EmptyNameException();
    if (grade_to_exec > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
    if (grade_to_exec < 1 || grade_to_sign < 1)
        throw GradeTooHighException();
}

Form &Form::operator=(const Form &b)  {
    std::cout << "Assignation operator called (Bureaucrat)" << std::endl;
    is_signed = b.is_signed;
    target = b.target;
    return *this;
}

std::string const Form::getName() const {
    return name;
}

int const Form::getGrade_to_sign() const {
    return grade_to_sign;
}

int const Form::getGrade_to_exec() const {
    return grade_to_exec;
}

bool Form::get_is_signed() const {
    return is_signed;
}

void Form::beSigned(Bureaucrat &target) {
    if (target.getGrade() > grade_to_sign)
        throw GradeTooLowException();
    is_signed = true;
}

std::string Form::getTarget() const {
    return target;
}

void Form::setTarget(std::string _target) {
    target = _target;
}

void Form::set_is_signed(bool a) {
    is_signed = a;
}

std::ostream &operator<<(std::ostream &out, Form const &b){
    out << "[" << b.getName() << "], grade to sign: " << b.getGrade_to_sign() << ", grade to exec: " <<
    b.getGrade_to_exec() << ", is signed: " << b.get_is_signed() << std::endl;
    return out;
}