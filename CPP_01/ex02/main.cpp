#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::cout << "address in memory of the string: " << &str << std::endl;

	std::string *stringPTR = &str;
	std::cout << "address of the string by using pointer: "<< stringPTR <<std::endl;

	std::string &stringREF = str;
	std::cout << "address of the string by using reference: " << &stringREF<<std::endl;

	std::cout << "string using the pointer: " << *stringPTR << std::endl;
	std::cout << "string using the reference: " << stringREF << std::endl;
	return (0);
}