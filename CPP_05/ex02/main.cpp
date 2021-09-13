#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try{
        Bureaucrat valera("valera", 5);
        Bureaucrat anton("anton", 7);
//        ShrubberyCreationForm a("home");
//        RobotomyRequestForm a("axe");
        PresidentialPardonForm a("jack");

        anton.signForm(a);
        valera.executeForm(a);

        std::cout << a;
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }

    return 0;
}