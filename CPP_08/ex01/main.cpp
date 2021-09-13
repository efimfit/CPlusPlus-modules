#include "span.hpp"

int main(void)
{
    try{
        Span a(10000);
        for (int i = 0; i < 10000; i++)
            a.addNumber(rand() % 100);
        a.print();
        std::cout << "min span: " << a.shortestSpan() << std::endl;
        std::cout << "max span: " << a.longestSpan() << std::endl;
    }
    catch(std::exception &exception){
        std::cout << "Too much elements or elements < 2" << std::endl;
    }
    return 0;
}
