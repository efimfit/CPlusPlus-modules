#include "Dog.hpp"

Dog::Dog() : my_brain(new Brain()){
    std::cout << "Default constructor called (Dog)" << std::endl;
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destructor called (Dog)" << std::endl;
    delete my_brain;
}

Dog::Dog(const Dog &b) : my_brain(new Brain()){
    std::cout << "Copy constructor called (Dog)" << std::endl;
    *this = b;
}

Dog &Dog::operator=(const Dog &b) {
    std::cout << "Assignation operator called (Dog)" << std::endl;
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

void Dog::makeSound() const{
    std::cout << "The Dog barks" << std::endl;
}