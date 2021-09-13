#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Zombies = new Zombie[N];
	std::stringstream sstream;
	std::string my_str;

	for (int i = 0; i < N; i++){
	    sstream << i + 1;
	    sstream >> my_str;
	    Zombies[i].set_name(name + my_str);
	    sstream.clear();
	}
	return (Zombies);
}
