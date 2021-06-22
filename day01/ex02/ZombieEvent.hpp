#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    void           setZombieType(std::string);
    Zombie*        newZombie(std::string name);
    void           randomChump();
};

#endif