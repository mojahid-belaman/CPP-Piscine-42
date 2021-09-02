#include "Casts.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		Casts c(av[1]);
		c.Convert_char();
	}
	else
		std::cout << "ERROR: Number Of Argument Invalid!" << std::endl;
	return (0);
}