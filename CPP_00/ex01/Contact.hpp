#pragma once
#include <iostream>

class	Contact
{
public:
	void	print(int i);
	void	print_full();
	void	get_data(size_t i);
	int		check_empty(std::string *s);
	void	check_len(std::string s, int i);


private:
	size_t	index;
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

