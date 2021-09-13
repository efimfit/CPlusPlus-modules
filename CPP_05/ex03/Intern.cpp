#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Default constructor called (Intern)" << std::endl;
}

Intern::~Intern() {
    std::cout << "Destructor called (Intern)" << std::endl;
}

Intern::Intern(const Intern &b) {
    std::cout << "Copy constructor called (Intern)" << std::endl;
    *this = b;
}

Intern &Intern::operator=(const Intern &b)  {
    std::cout << "Assignation operator called (Intern)" << std::endl;
    return *this;
}


Form  *Intern::makeForm(const std::string &name, const std::string &target) {

    Form *(Intern::*newForm[3])(const std::string &target) = { &Intern::CreateShrubberyForm,
                                                               &Intern::CreateRobotomyForm,
                                                               &Intern::CreatePresidentialForm };
    std::string arr[3] = {"Shrubbery", "Robotomy", "Presidential"};

    for (int i = 0; i < 3; i++){
        if (name == arr[i]){
            Form *form = (this->*newForm[i])(target);
            std::cout << "Intern creates [" << form->getName() << "]" << std::endl;
            return form;
        }
    }
    throw ErrorCreationException();
}

Form *Intern::CreateShrubberyForm(const std::string &target) {
    Form *newForm = new ShrubberyCreationForm(target);
    return newForm;
}

Form *Intern::CreateRobotomyForm(const std::string &target) {
    Form *newForm = new RobotomyRequestForm(target);
    return newForm;
}

Form *Intern::CreatePresidentialForm(const std::string &target) {
    Form *newForm = new PresidentialPardonForm(target);
    return newForm;
}
