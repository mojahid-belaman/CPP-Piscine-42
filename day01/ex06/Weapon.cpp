#include "Weapon.hpp"

std::string const &Weapon::getType()
{
    return (this->_type);
}
void    Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::Weapon(std::string type)
{
    /
}
Weapon::Weapon()
{
    return ;
}
