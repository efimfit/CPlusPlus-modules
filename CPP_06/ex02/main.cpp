#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate(void){
    std::cout << "Created ";
    switch (rand() % 3) {
        case 0:
            std::cout << "A" << std::endl;
            return new A;
        case 1:
            std::cout << "B" << std::endl;
            return new B;
        case 2:
            std::cout << "C" << std::endl;
            return new C;
    }
    return NULL;
}

void identify(Base *p){
    std::cout << "By pointer: ";
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p){
    std::cout << "By reference: ";
    try{
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (...){}
    try{
        B &a = dynamic_cast<B &>(p);
        (void)a;
        std::cout << "B" << std::endl;
    }
    catch (...){}
    try{
        C &a = dynamic_cast<C &>(p);
        (void)a;
        std::cout << "C" << std::endl;
    }
    catch (...){}
}

int main(void)
{
    Base *ptr;
    for (int i = 0; i < 6; i++){
        ptr = generate();
        identify(ptr);
        identify(*ptr);
        delete ptr;
    }
    return 0;
}
