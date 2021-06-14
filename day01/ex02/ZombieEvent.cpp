#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type_)
{
    this->type = type_;
}

std::string ZombieEvent::get_ZombieType()
{
    return (this->type);
}

ZombieEvent::ZombieEvent()
{
    std::cout << "constructor object ZombieEvent called!" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "destructor object ZombieEvent called!" << std::endl;
}


Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *z = new Zombie(name, get_ZombieType());
    return (z);
}

void    ZombieEvent::randomChump()
{
    std::string name;
    std::string name_z[3] = {"test1", "test2", "test3"};
    for (size_t i = 0; i < 3; i++)
    {
        name = name_z[rand() % (sizeof(name_z) - 1)];
    }
    Zombie *z = new Zombie(name, get_ZombieType());
    z->announce();       
}