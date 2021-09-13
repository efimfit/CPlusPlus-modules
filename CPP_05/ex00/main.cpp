#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("anton", 151);
        std::cout << a;
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
    try {
        Bureaucrat a("valera", 0);
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
    try {
        Bureaucrat a("valera", 300);
        a.increment();
        a.increment();
        a.increment();
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
    try {
        Bureaucrat a("valera", 3);
        Bureaucrat b("jack", 14);
        b = a;
        std::cout << a;
        std::cout << b;
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }

    return 0;
}