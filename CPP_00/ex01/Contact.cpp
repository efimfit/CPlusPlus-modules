#include "Contact.hpp"

void	Contact::check_len(std::string s, int i)
{
	std::string out = s;

	std::cout.width(10);
	if (out.length() > 10)
	{
		out.resize(10);
		out[9] = '.';
	}
	if (i == 1)
		std::cout << out << "|";
	else if (i == 2)
		std::cout << out << "|" << std::endl;
	else if (i == 0)
		std::cout << index << "|";

}

void	Contact::print(int i)
{
	if (i == 0)
	{
		std::cout.width(10);
		std::cout << "index" << "|";
		std::cout.width(10);
		std::cout << "name" << "|";
		std::cout.width(10);
		std::cout << "last name" << "|";
		std::cout.width(10);
		std::cout << "nickname" << "|" << std::endl;
	}
	check_len(name, 0);
	check_len(name, 1);
	check_len(last_name, 1);
	check_len(nickname, 2);
}

void	Contact::print_full(void)
{
	std::cout << "_____________________" << std::endl;
	std::cout << ">Name: " << name << std::endl;
	std::cout << ">Last name: " << last_name << std::endl;
	std::cout << ">Nickname: " << nickname << std::endl;
	std::cout << ">Phone number: " << phone_number << std::endl;
	std::cout << ">Darkest secret: " << darkest_secret << std::endl;
}

int		Contact::check_empty(std::string *s)
{
	if (std::cin.eof())
		return (1);
	while ((*s).empty())
	{
		std::cout << "Bro, write something" << std::endl << "Phone_bash-3.2$ ";
		std::getline(std::cin, *s);
		if (std::cin.eof())
			return (1);
	}
	return (0);
}

void	Contact::get_data(size_t i)
{
	index = i + 1;

	std::cout << "Enter NAME: ";
	std::getline(std::cin, name);
	if (check_empty(&name))
		return ;
	std::cout << "Enter LAST NAME: ";
	std::getline(std::cin, last_name);
	if (check_empty(&last_name))
		return ;
	std::cout << "Enter NICKNAME: ";
	std::getline(std::cin, nickname);
	if (check_empty(&nickname))
		return ;
	std::cout << "Enter PHONE NUMBER: ";
	std::getline(std::cin, phone_number);
	if (check_empty(&phone_number))
		return ;
	std::cout << "Enter DARKEST SECRET: ";
	std::getline(std::cin, darkest_secret);
	if (check_empty(&darkest_secret))
		return ;
}