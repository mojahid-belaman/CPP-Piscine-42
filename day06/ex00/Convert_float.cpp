#include "Convert.hpp"

void    Convert_float(std::string str)
{
    std::cout << "float: ";
    double nb_f;
    int res;
    if (check_float(str))
    {
        nb_f = (atof(str.c_str()));
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << static_cast<float>(nb_f) << ".0f" << std::endl;
        else
            std::cout << static_cast<float>(nb_f) << "f" << std::endl;
    }
    else if (check_int(str))
    {
        nb_f = atof(str.c_str());
        std::cout << static_cast<float>(nb_f) << ".0f" << std::endl;
    }
    else if (check_double(str))
    {
        nb_f = atof(str.c_str());
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << nb_f << ".0f" << std::endl;
        else
            std::cout << nb_f << "f" << std::endl;
    }
    else if (is_scientific(str))
        std::cout << str << "f" << std::endl;
    else if (is_scientific_f(str))
        std::cout << str << std::endl;
    else
        std::cout << static_cast<float>(str[0]) << ".0f" << std::endl;
}