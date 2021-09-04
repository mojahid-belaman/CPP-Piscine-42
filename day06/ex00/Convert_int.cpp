#include "Convert.hpp"

int check_int(std::string str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < static_cast<int>(str.length()))
    {
        if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void    Convert_int(std::string str)
{
    int nb_i;
    std::cout << "int: ";
    if (check_int(str))
    {
        nb_i = atoi(str.c_str());
        std::cout << static_cast<int>(nb_i) << std::endl;
    }
    else if (is_scientific(str))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(str[0]) << std::endl;

}