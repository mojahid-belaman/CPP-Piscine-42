#include "Convert.hpp"

int check_double(std::string str)
{
    int i = 0;
    int num_simi = 0;
    // if (str[str.length() - 1] != 'f')
    //     return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
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