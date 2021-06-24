#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setZombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Create Object Zombie!" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Create Object Zombie!" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "Destroy Object Zombie!" << std::endl;
}
