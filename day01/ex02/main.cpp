
#include "Zombie.hpp"
#include "ZombieEvent.hpp"



int main()
{
    ZombieEvent ze;
    ze.setZombieType("type1");

    Zombie *z1;
    z1 = ze.newZombie("zombie");
    z1->announce();
    delete z1;
    std::cout << "----------------------------" << std::endl;

    ze.randomChump();
    return (0);
}