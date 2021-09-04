#include "Convert.hpp"

bool    is_scientific(std::string _str)
{
    std::string science[] = {"nan", "inf", "-inf", "+inf", "-inff", "+inff", "inff", "nanf"};
    size_t n = sizeof(science)/sizeof(science[0]);
    int i = 0;
    while (i < static_cast<int>(n))
    {
        if (science[i] ==_str)
            return (true);
        i++;
    }
    return (false);
}

void    Convert_char(std::string str, int &err)
{
    if (str.size() > 1 && !isdigit(str[0]))
    {
         if (is_scientific(str))
         {
            std::cout << "char: impossible" << std::endl;
            return ;
         }
        std::cout << "ERROR: argument Invalid!" << std::endl;
        err = 1;
        return ;
    }
    std::cout << "char: ";
    if (str.size() == 1 && !isdigit(str[0]))
        std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
    else
    {
        int nb = atoi(str.c_str());
        if (isprint(nb))
            std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
        if (nb < 32 || nb >= 127)
            std::cout << "Non displayable" << std::endl;
    }

}