#include "DiamondTrap.hpp"

int main()
{
    ClapTrap     a_clap("EDGAR");
    ClapTrap    b_clap("ANTON");
    ScavTrap    a_scav("OLEG");
    ScavTrap    b_scav("IGOR");
    FragTrap     a_frag("JOHN");
    FragTrap    b_frag("JACK");
    DiamondTrap a_diam("RICKY");
    DiamondTrap b_diam("HANK");

    std::cout << "-------------------------------------------------------------------" << std::endl;
    a_scav.guardGate();
    a_scav.attack("EDGAR");
    a_clap.takeDamage(a_scav.getAttack_damage());
    a_clap.beRepaired(1000);
    a_scav.attack("IGOR");
    b_scav.takeDamage(a_scav.getAttack_damage());
    b_scav.beRepaired(33);

    a_frag.highFivesGuys();
    a_frag.attack("ANTON");
    b_clap.takeDamage(a_frag.getAttack_damage());
    b_clap.beRepaired(1000);

    std::cout << "-------------------------------------------------------------------" << std::endl;
    a_diam.whoAmI();
    a_diam.highFivesGuys();
    a_diam.attack("HANK");
    b_diam.takeDamage(a_diam.getAttack_damage());
    b_diam.beRepaired(1000);
    std::cout << "-------------------------------------------------------------------" << std::endl;

    return  0;
}