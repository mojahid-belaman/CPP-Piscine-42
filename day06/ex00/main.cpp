#include <iostream>
#include <string>

bool isNumber(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if(std::isdigit(str[i]) == 0) return false;
	}
    return true;
}

void	print_char(std::string str)
{
	std::cout << "char : ";
	int number = atoi(str.c_str());
	char c = static_cast<char>(number);
	if (number >= 32 && number < 127)
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

// void	print_integer(std::string str)
// {
// 	std::cout << "int: ";
// 	double number =  std::stod(str.c_str());
// 	int nb = static_cast<int>(number);
// 	std::cout << nb << std::endl;
	
// }

int main(int ac, char *av[])
{	
	if (ac == 2)
	{
		if (isNumber(av[1]))
		{
			print_char(av[1]);
			print_integer(av[1]);
			// print_float(av[1]);
			// print_double(av[1]);
		}
		else if (!strcmp(av[1], "nan") || !strcmp(av[1], "+inf") || !strcmp(av[1], "-inf"))
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
		}
		else
			std::cout << "ERROR: Argument Is Not Number!" << std::endl;
	}
	else
		std::cout << "ERROR: Number Of Argument Invalid!" << std::endl;
	return (0);
}