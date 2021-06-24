#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _w(w)
{

}

void    HumanA::attack()
{
    std::cout << "\033[1;32m" + this->_name + "\033[0m" + " attacks with his " +
                  "\033[1;32m" + this->_w.getType() + "\033[0m" << std::endl;
}