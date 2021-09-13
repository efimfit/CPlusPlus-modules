#pragma once
#include <iostream>

class Weapon{
private:
	std::string type;
public:
	Weapon(std::string type);

	void 		        setType(std::string type);
	std::string const   &getType(void) const;
};


