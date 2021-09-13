#pragma once
#include <iostream>

class Zombie
{
private:
	std::string const name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void) const;
};

