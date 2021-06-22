#include "Brain.hpp"

void    Brain::set_brain(std::string humbr)
{
    this->_humbr = humbr;
}

std::string Brain::get_brain()
{
    return (this->_humbr);
}

std::string Brain::identify() const
{
    std::string str;
    std::stringstream ss;
    ss << this;
    str = ss.str();
    for (size_t i = 2; i < str.length(); i++)
        str[i] = toupper(str[i]);
    return (str);
}