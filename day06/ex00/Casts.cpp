#include "Casts.hpp"

Casts::Casts()
{

}

Casts::Casts(std::string str)
{
    this->_str = str;
}

bool    Casts::is_scientific()
{
    if (_str.compare("nan") || _str.compare("+inf") || _str.compare("inf")
            || _str.compare("+inf") || _str.compare("nanf") || _str.compare("+inff")
            || _str.compare("-inff"))
            return false;
    else
        return true;
}

void    Casts::Convert_char()
{
    std::cout << "char: ";
    if (this->_str.empty())
        std::cerr << "ERROR: Initialise Argument!" << std::endl;
    else if (is_scientific())
        std::cerr << "impossible" << std::endl;
    else if (_str.length() == 1 && isprint(_str[0]))
    {
        std::cout << _str[0] << std::endl;
    }
    else if (_str.length() > 1)
    {
        int nb = atoi(_str.c_str());
        if (nb >= 32 && nb < 127)
            std::cout << static_cast<char>(nb) << std::endl;
    }
    else
        std::cerr << "Non displayable" << std::endl;
}

void    Casts::Convert_int()
{
    std::cout << "int: ";

}

Casts::~Casts()
{

}