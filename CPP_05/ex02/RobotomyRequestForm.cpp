#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45, "NO") {
    std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &b)
: Form(b.getName(), b.getGrade_to_sign(), b.getGrade_to_exec(), b.getTarget()){
    std::cout << "Copy constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &b)  {
    std::cout << "Assignation operator called (RobotomyRequestForm)" << std::endl;
    setTarget(b.getTarget());
    set_is_signed(b.get_is_signed());
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &_target)
: Form("Robotomy", 72, 45, _target){
    std::cout << "Specified constructor called (RobotomyRequestForm)" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!get_is_signed())
        throw NotSignException();
    if (executor.getGrade() > getGrade_to_exec())
        throw GradeTooLowException();

    if (rand() % 2 != 0)
        std::cout << getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Attempt to robotomize " << getTarget() << " has been failed" << std::endl;

}