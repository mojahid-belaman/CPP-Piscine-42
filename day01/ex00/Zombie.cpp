#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name <<": Create new object zombie!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": Destroy object zombie!" << std::endl;
}
