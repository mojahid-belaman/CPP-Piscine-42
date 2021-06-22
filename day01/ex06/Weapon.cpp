#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    return (this->_type);
}
void    Weapon::setType(std::string type)
{
    this->_type = type;
    // std::cout << "{" <<  this->_type << std::endl; 
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}