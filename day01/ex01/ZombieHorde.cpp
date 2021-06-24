#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *z;
    z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[N].setZombie(name);
        z[N].announce();
    }
    
    return (z);
}