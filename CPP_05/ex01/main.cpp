#include "Bureaucrat.hpp"

int main()
{
    try{
        Form a("first", 31, 43);
        std::cout << a;

        Bureaucrat b("valera", 33);
        std::cout << b;
        b.signForm(a);
        std::cout << a;

    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }

    return 0;
}