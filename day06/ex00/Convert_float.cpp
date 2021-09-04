#include "Convert.hpp"

int check_float(std::string str)
{
    int i = 0;
    int num_simi = 0;
    if (str[str.length() - 1] != 'f')
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length() - 1)
    {
        if (str[i] == '.')
        {
            num_simi++;
            i++;
            continue;
        }
        else if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    if (num_simi > 1)
        return (0);
    return (1);
}

void    Convert_float(std::string str)
{
    std::cout << "float: ";
    float nb_f = static_cast<float>(atof(str.c_str()));
    std::cout << nb_f;
    // if (roundf(nb_f) == nb_f)
    //     std::cout << ".0";
    std::cout << "f" << std::endl;
}