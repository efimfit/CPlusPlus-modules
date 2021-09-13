#include "Cat.hpp"

Cat::Cat() : my_brain(new Brain()){
    std::cout << "Default constructor called (Cat)" << std::endl;
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Destructor called (Cat)" << std::endl;
    delete my_brain;
}

Cat::Cat(const Cat &b) : my_brain(new Brain()){
    std::cout << "Copy constructor called (Cat)" << std::endl;
    *this = b;
}

Cat &Cat::operator=(const Cat &b) {
    std::cout << "Assignation operator called (Cat)" << std::endl;
    type = b.type;
    delete my_brain;
    my_brain = new Brain();
    for (int i = 0; i < 100; i++){
        my_brain->ideas[i] = b.my_brain->ideas[i];
        if (i % 20 == 0)
            std::cout << "it's a deep copy" << std::endl;
    }
    return *this;
}

void Cat::makeSound()const {
    std::cout << "The cat meows" << std::endl;
}
