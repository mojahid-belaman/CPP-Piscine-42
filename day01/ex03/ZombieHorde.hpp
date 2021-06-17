#ifndef ZOMBIEHORD_H
#define ZOMBIEHORD_H

#include "Zombie.hpp"

class ZombieHorde
{
private:
    int n;
    Zombie *z;
public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void    announce();
};

#endif