#include "Convert.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int err = 0;
		Convert_char(av[1], err);
		if (err)
			return (-1);
		Convert_int(av[1]);
		Convert_float(av[1]);
		Convert_double(av[1]);

	}
	else
		std::cout << "ERROR: Number Of Argument Invalid!" << std::endl;
	return (0);
}