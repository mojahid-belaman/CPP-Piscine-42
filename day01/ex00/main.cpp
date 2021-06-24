
#include "Zombie.hpp"


void randomChump(std::string name);
Zombie* newZombie( std::string name );

int main()
{
    Zombie z("Zombie1");
    z.announce();

    Zombie *z2;
    z2 = newZombie("Zombie2");
    z2->announce();
    delete z2;

    randomChump("Zombie3");
    return (0);
}