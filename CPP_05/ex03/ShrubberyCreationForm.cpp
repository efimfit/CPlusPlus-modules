#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137, "NO") {
    std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &b)
: Form(b.getName(), b.getGrade_to_sign(), b.getGrade_to_exec(), b.getTarget()){
    std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &b)  {
    std::cout << "Assignation operator called (ShrubberyCreationForm)" << std::endl;
    setTarget(b.getTarget());
    set_is_signed(b.get_is_signed());
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target)
: Form("Shrubbery", 145, 137, _target){
    std::cout << "Specified constructor called (ShrubberyCreationForm)" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!get_is_signed())
        throw NotSignException();
    if (executor.getGrade() > getGrade_to_exec())
        throw GradeTooLowException();

    std::ofstream outf((getTarget() + "_shrubbery").c_str());
    if (!outf)
        throw ErrorOpenFileException();

    outf <<"═══════════░▓"<< std::endl;
    outf <<" ══════════░▓▓"<< std::endl;
    outf <<" ════════░▓░░▓"<< std::endl;
    outf <<" ═══════▓▓░░░▓"<< std::endl;
    outf <<" ▓════░▓░░░░░▓══════════░▓▓░"<< std::endl;
    outf <<" ▓═══▒▓░░░░░░▓░══════░▓▓░░▓░"<< std::endl;
    outf <<" ▓══▓▒═░░░░░░░▓════░▓▓░░░░▓"<< std::endl;
    outf <<" ░▓▓░═░░░░░░░░▓══░▒▓░░░░░▒▓"<< std::endl;
    outf <<"  ░░░░░░░░░░░░░▒▓▓▓░░░░░░═▓═════░▓▓▓▓▓"<< std::endl;
    outf <<" ░░░░░░░░░░░░░░░░░░░░░░░░▓═░▓▓▓▓░░▒▓"<< std::endl;
    outf <<"  ░░░░░░░░░░░░░░░░░░░░░░░░▓▓▓░░░═░▒▓░"<< std::endl;
    outf <<" ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░═░▓▓▒"<< std::endl;
    outf <<" ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▒"<< std::endl;
    outf <<" ░░░░░░░░░░░░░░░░░══░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓"<< std::endl;
    outf <<" ░══════════░░════░▒▒░░░═░░░░▒░░░░░░░░░▓▓"<< std::endl;
    outf <<" ▒░══░▒▒▓▓██▓══░▒█▓░════▒▓░░░═░░░═░░▒▓▓▒"<< std::endl;
    outf <<" ▓█████████▓░▒▓███═══░▒██▒═░░░░░░░▒▓▓▒"<< std::endl;
    outf <<" ▓█▓▓▓▓▓▓▓█▓█████══░▓████═══▒▒═░░░░░▓▓"<< std::endl;
    outf <<" ▓▓▓▓▓▓▓▓▓██▓▓▓█▒░▓█████▒══▒▓▒═░░░░══▓▓▓▓"<< std::endl;
    outf <<" ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓█░═▒▒█▓═░░░░░░▒▒▓"<< std::endl;
    outf <<"  ▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓═▒▓██▓═░░░═░▓▓▓"<< std::endl;
    outf <<"  ▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▒▒████▓═░░░░▓"<< std::endl;
    outf <<"▒▒▓████████████████▓▓▓▓██▓▓█▓═░░═▓█"<< std::endl;
    outf <<" ▒▒░░▒░░░░░░▒░▒▒▒▓▓██████▓▓▓█▓═░═▒▓█▓"<< std::endl;
    outf <<" ▒██▒░░══════░▓░═░░░▒▒▓████▓▓█══░█══▓"<< std::endl;
    outf <<"▒▒▒▒░▒═░░░═░▓░░░░░░░░░░▒▓████══▓▒══▓"<< std::endl;
    outf <<" ▒▒▓▓░▓═░░░═▒▓░░░░░░░░░░░░░▓██═▓▓══░▓"<< std::endl;
    outf <<" ▒▓▓▒░▓═░░═▒▓░░░░░░░░░░░░░══▒▒▒██▒══▓"<< std::endl;
    outf <<" ▓▒░░▒▓═══░▓░░░░░░░░░░░░░░▓▓▓▒░▓██▓═▓"<< std::endl;
    outf <<" ▓▓░░▒▓═░░▒▒░░░░░░░░░░░░░░▓═▒█░░▓██▓▓"<< std::endl;
    outf <<" ▓█▒░▒▓═▓▓▒░░░░░░░░░░░░░░░▓══██▒▒▓██"<< std::endl;
    outf <<"░░░░▒▓▒█▓░░░░░░░░░░░░░░░░▓═▒█▓▓▒██░"<< std::endl;
    outf <<"░░░░▒█▓▒░░░░▒░░░░░░░░░░░░░▓▓▓▒▒▒▒"<< std::endl;
    outf <<"▒░░░▒█▒░░░░▒▒▒▒▒▒▒▒▒▒▒░░░░▒▓▒░▓░"<< std::endl;
    outf <<" █▒░░▒▓░░░░░░░░░░░░▒▒▒▒▒░░░░░░░▓"<< std::endl;
    outf <<" ▓▓░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░▓"<< std::endl;
    outf <<" ▒▓░░░░░░░▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░▓"<< std::endl;
    outf <<"▒▓░░░░░░░░░░░░░░░░░▒░░░░░░░░░░░▒▓"<< std::endl;
    outf <<"▒▓░░░░░░░░░░░░░░▒▒░░░░░░░░░░░░░░▓▒"<< std::endl;
    outf <<" ▒▓░░░░░░░▒▒▒▒▒▒▒▒▒░░░░░░░░░░▒▓▓▒▒█░"<< std::endl;
    outf <<"▒▓▒░░░░░░▒▒░░░░░░░░░░░░░░░░░▒▓██▓▒"<< std::endl;
    outf <<"▒▓▓░░░░░░░░░░░░░░░░░░▒▒▒▒░░░░▓░"<< std::endl;
    outf <<"░▒▓▓░░░░░░░░░░░░░░░░▒▒▒▒▓▓▓░▓"<< std::endl;
    outf <<"░▒▓▓▓▒░░░░░░░░░░░░░░░░░░░▒▓█▓"<< std::endl;
    outf <<"░░█▒▒▓▓▒░░░░░░░░░░░░░░░░▒▒▓▒"<< std::endl;
    outf <<"░░▓▓▒▒▒▓▓▒░░░░░░░░░░░░░░░▒▓"<< std::endl;
    outf <<"░░▒█▒▒▒▒▒▓▓▒▒░░░░░░░░░░░░▓"<< std::endl;
    outf <<" ░░░▓▓▒▒▒▒▒▒▓▓▓▒░░░░░░░░░░▓"<< std::endl;
    outf <<" ░░░▒▓▒▒▒▒▒▒▒▒▒▓▓▓▒░░░░░░░▓"<< std::endl;
    outf <<" ░░░░▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒░░░░▓░"<< std::endl;
    outf <<" ░░░░▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓░"<< std::endl;
    outf <<" ░░░░░▓▒▒▒▒▒▓░"<< std::endl;
    outf <<" ▓▓██▓▓▓██▓▓██▒"<< std::endl;
    outf <<" ▓▓██▓▓▓██▓▓██▒"<< std::endl;
    outf <<" ▓▓██▓▓▓██▓▓██▒"<< std::endl;
    outf <<"▓▓██▓▓▓██▓▓██▒"<< std::endl;
    outf.close();
}