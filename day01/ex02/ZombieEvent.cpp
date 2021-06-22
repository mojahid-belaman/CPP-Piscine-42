#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type_)
{
    this->type = type_;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
Zombie *z = new Zombie(name, type);
    return (z);
}

void    ZombieEvent::randomChump()
{
    std::string name;
    int r;
    std::string name_z[3] = {"zombie1", "zombie2", "zombie3"};
    srand(time(NULL));
    r = rand() % 3;
    name = name_z[r];
    Zombie *z = new Zombie(name, type);
    z->announce();
    delete z;
}