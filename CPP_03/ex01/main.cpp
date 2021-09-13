#include "ScavTrap.hpp"

int main()
{
    ClapTrap A("EDGAR");
    ClapTrap B("ANTON");
    ScavTrap a("OLEG");
    ScavTrap b("IGOR");

    std::cout << "-------------------------------------------------------------------" << std::endl;
    a.guardGate();
    a.attack("EDGAR");
    A.takeDamage(a.getAttack_damage());
    A.beRepaired(1000);
    a.attack("IGOR");
    b.takeDamage(a.getAttack_damage());
    b.beRepaired(33);
    std::cout << "-------------------------------------------------------------------" << std::endl;

    return  0;
}