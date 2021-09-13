#pragma once
#include "Contact.hpp"

class Phonebook
{
public:
	Phonebook(){
		count = -1;
		oldest = 0;
	}
	void	add_command();
	int		search_command(std::string str);

private:
	int			num;
	int 		count;
	int			oldest;
	Contact 	cont[8];
};