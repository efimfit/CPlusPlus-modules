#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5, "NO") {
    std::cout << "Default constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &b)
: Form(b.getName(), b.getGrade_to_sign(), b.getGrade_to_exec(), b.getTarget()){
    std::cout << "Copy constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &b)  {
    std::cout << "Assignation operator called (PresidentialPardonForm)" << std::endl;
    setTarget(b.getTarget());
    set_is_signed(b.get_is_signed());
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &_target)
: Form("Presidential", 25, 5, _target) {
    std::cout << "Specified constructor called (PresidentialPardonForm)" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!get_is_signed())
        throw NotSignException();
    if (executor.getGrade() > getGrade_to_exec())
        throw GradeTooLowException();

    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}