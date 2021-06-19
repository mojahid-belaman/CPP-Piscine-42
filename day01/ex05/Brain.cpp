#include "Brain.hpp"

std::string Brain::identify()
{
    std:: string str;
    std::stringstream ss;
    ss << this;
    str = ss.str();
    for (size_t i = 2; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return (str);
}