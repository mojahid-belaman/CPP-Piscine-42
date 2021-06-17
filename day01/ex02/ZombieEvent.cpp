#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type_)
{
    this->type = type_;
}

std::string ZombieEvent::get_ZombieType()
{
    return (this->type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
Zombie *z = new Zombie(name, get_ZombieType());
    return (z);
}

void    ZombieEvent::randomChump()
{
    std::string name;
    int r;
    std::string name_z[3] = {"zombie1", "zombie2", "zombie3"};
    srand(time(NULL));
    r = rand() % 3;
    
    Zombie *z = new Zombie(name, get_ZombieType());name = name_z[r];
    z->announce();
    delete z;
}