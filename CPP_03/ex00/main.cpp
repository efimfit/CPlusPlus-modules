#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Valera");
    ClapTrap b("Edgar");

    std::cout << "-------------------------------------------------------------------" << std::endl;
    a.attack("Edgar");
    b.takeDamage(a.getAttack_damage());
    b.attack("Valera");
    a.takeDamage(b.getAttack_damage());
    b.beRepaired(b.getEnergy_points());
    a.beRepaired(a.getEnergy_points());
    std::cout << "-------------------------------------------------------------------" << std::endl;
    return  0;
}