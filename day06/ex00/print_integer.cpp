#include <iostream>
#include <string>

void	print_integer(std::string str)
{
	std::cout << "int: ";
	double number =  std::stod(str.c_str());
	int nb = static_cast<int>(number);
	std::cout << nb << std::endl;
}