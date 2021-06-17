#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "\n" + name + " " << "(" + type + ")" << " Braiiiiiiinnnssss..." <<std::endl;
}

Zombie::Zombie(std::string name_, std::string type_)
{
    this->name = name_;
    this->type = type_;
}

Zombie::Zombie()
{
    std::cout << "Create New Object Zombie!" << std::endl;
    int r;
    std::string name_z[3] = {"mojahid", "zakaria", "yassir"};
    std::string str;
    srand(clock());
    r = rand() % 3;
    str = name_z[r];
    this->name = str;

    std::string type_z[3] = {"type1", "type2", "type3"};
    r = rand() % 3;
    str = type_z[r];
    this->type = str;
}

Zombie::~Zombie()
{
    std::cout << "Object Zombie Deleted!" << std::endl;
}
