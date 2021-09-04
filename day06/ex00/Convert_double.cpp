#include "Convert.hpp"

void    Convert_double(std::string str)
{
    std::cout << "double: ";
    float nb_d = atof(str.c_str());
    std::cout << static_cast<double>(nb_d) << std::endl;
    // if (roundf(nb_d) == nb_d)
    //     std::cout << ".0" << std::endl;
}