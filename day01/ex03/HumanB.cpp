#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void    HumanB::setWeapon(Weapon & w)
{
    _w = &w;
}

void    HumanB::attack()
{
    std::cout << "\033[1;32m" + this->_name + "\033[0m" + " attacks with his " +
                  "\033[1;32m" + this->_w->getType() + "\033[0m" << std::endl;
}