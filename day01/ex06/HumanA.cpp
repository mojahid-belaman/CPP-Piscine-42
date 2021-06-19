#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w)
{
    this->_name = name;
    this->_w = w;
}

void    HumanA::attack()
{
    std::cout << this->_name + " attacks with his " + this->_w.getType() << std::endl;
}