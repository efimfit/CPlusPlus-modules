#include "Karen.hpp"

void Karen::complain(std::string level) {
    std::string  	cmds[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Karen::*pointers[4])() =
            {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    for (int i= 0; i < 4; i++){
        if (cmds[i] == level)
            (this->*pointers[i])();
    }
}

void Karen::debug() {
    std::cout << "DEBUG MESSAGE" << std::endl;
}
void Karen::info() {
    std::cout << "INFO MESSAGE" << std::endl;
}
void Karen::warning() {
    std::cout << "WARNING MESSAGE" << std::endl;
}
void Karen::error() {
    std::cout << "ERROR MESSAGE" << std::endl;
}
