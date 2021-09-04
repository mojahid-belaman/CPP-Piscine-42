#include "Convert.hpp"

void    Convert_int(std::string str)
{
    int nb_i;
    std::cout << "int: ";
    if (check_int(str) || check_float(str) || check_double(str))
    {
        
        nb_i = atoi(str.c_str());
        std::cout << nb_i << std::endl;
    }

    else if (is_scientific(str))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(str[0]) << std::endl;
}