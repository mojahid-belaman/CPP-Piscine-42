#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Create new object zombie!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destroy object zombie!" << std::endl;
}
