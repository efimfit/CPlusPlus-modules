#include "Caster.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    Caster n;
    std::string x(argv[1]);
    if (n.check_empty(x))
        return 1;
    if (n.check_inf(x) || n.find_char(x) || n.print_char(x))
        return 0;
    return n.print_number(x);
}
