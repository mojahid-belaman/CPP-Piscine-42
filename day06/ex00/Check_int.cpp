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