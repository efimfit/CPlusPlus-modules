#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "Give me 1 parameter" << std::endl;
        return 1;
    }

    Karen k;
    int level = -1;
    std::string str = argv[1];
    std::string cmds[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if (str == cmds[i])
            level = i;
    }
    switch (level) {
        case 0: k.complain(cmds[0]);
        case 1: k.complain(cmds[1]);
        case 2: k.complain(cmds[2]);
        case 3:
            k.complain(cmds[3]);
            break;
        default : std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
    return 0;
}
