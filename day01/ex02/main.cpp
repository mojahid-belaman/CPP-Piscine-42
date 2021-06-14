
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    Zombie *z = new Zombie("zombie1", "type1");
    ZombieEvent *z2 = new ZombieEvent();
    z->announce();
    delete z;
    z2->setZombieType("type2");
    z2->newZombie("zombie2");
    delete z2;
    return (0);
}