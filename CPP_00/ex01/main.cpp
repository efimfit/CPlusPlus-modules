#include "Contact.hpp"
#include "Phonebook.hpp"

void Phonebook::add_command(void)
{
	if (++count < 8)
		cont[count].get_data(count);
	else
	{
		cont[oldest].get_data(oldest);
		oldest++;
		if (oldest + 1 >= 8)
			oldest = 0;
		count--;
	}
}

int Phonebook::search_command(std::string str)
{
	if (count == -1){
		std::cout << "Empty Phonebook " << std::endl;
		return (1);
	}
	for (int i = 0; i <= count; i++)
		cont[i].print(i);
	while (1) {
		std::cout << "What recording do you wanna see?" <<std::endl<< "Phone_bash-3.2$ ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		try {
			if (str.find_last_not_of("123467890") != std::string::npos)
				throw -1;
			num = atoi(str.c_str());
			if (num - 1 > count || num == 0)
				throw -1;
		}
		catch (...){
			std::cout << "Try another number" << std::endl;
			continue ;
		}
		cont[num - 1].print_full();
		break ;
	}
	return (0);
}

int		main(void)
{
	Phonebook 		book;
	std::string 	str;

	while (1) {
		std::cout << "Phone_bash-3.2$ ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str == "ADD" || str == "add")
			book.add_command();
		else if (str == "SEARCH" || str == "search")
		{
			if (book.search_command(str))
				continue ;
		}
		else if (str == "EXIT" || str == "exit")
			break ;
		else
			std::cout << "Syntax error" << std::endl;
	}
}