#pragma once
#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void set_name(std::string name);
	void announce() const;
};

