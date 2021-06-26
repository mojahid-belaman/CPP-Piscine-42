#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setZombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << ": Create Object Zombie!" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Create Object Zombie!" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": Destroy Object Zombie!" << std::endl;
}
