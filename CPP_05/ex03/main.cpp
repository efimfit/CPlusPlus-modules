#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Intern a;
        Bureaucrat valera("valera", 5);
        Form *form;
//        form = a.makeForm("Shrubbery", "home");
        form = a.makeForm("Robotomy", "anthony");
//        form = a.makeForm("Presidential", "arkadiy");
        std::cout << *form;

        valera.signForm(*form);
        valera.executeForm(*form);
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }

    return 0;
}