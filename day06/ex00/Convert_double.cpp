#include "Convert.hpp"

void    Convert_double(std::string str)
{
    std::cout << "double: ";
    double nb_f;
    if (check_int(str))
    {
        nb_f = atof(str.c_str());
        std::cout << nb_f << ".0" << std::endl;
    }
    else if (check_float(str) || check_double(str))
    {
        int res;
        nb_f = atof(str.c_str());
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << nb_f << ".0" << std::endl;
        else
            std::cout << nb_f << std::endl;
    }
    else if (is_scientific(str))
        std::cerr << str << std::endl;
    else
        std::cout << static_cast<double>(str[0]) << ".0" << std::endl;

}