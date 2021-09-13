#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	randomChump("Steven Seagal");
	Zombie *dead_boy = newZombie("John Travolta");
	dead_boy->announce();
	delete  dead_boy;
	return (0);
}