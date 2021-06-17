#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name + " " << "(" + type + ")" << " Braiiiiiiinnnssss..." <<std::endl;
}

Zombie::Zombie(std::string name_, std::string type_)
{
    this->name = name_;
    this->type = type_;
}
