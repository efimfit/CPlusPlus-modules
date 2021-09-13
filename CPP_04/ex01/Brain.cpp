#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor called (Brain)" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = ("Hello");
}

Brain::~Brain() {
    std::cout << "Destructor called (Brain)" << std::endl;
}

Brain::Brain(const Brain &b) {
    std::cout << "Copy constructor called (Brain)" << std::endl;
    *this = b;
}

Brain &Brain::operator=(const Brain &b) {
    std::cout << "Assignation operator called (Brain)" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = b.ideas[i];
    return *this;
}
