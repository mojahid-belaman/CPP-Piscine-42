#include "ZombieHorde.hpp"

void    ZombieHorde::announce()
{
    for (int i = 0; i < this->n; i++)
    {
        this->z[i].announce();
    }
    
}


ZombieHorde::ZombieHorde(int nb)
{
    std::cout << "Create New Object ZombieHorde!" << std::endl;
    this->n = nb;
    this->z = new Zombie[this->n];
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "\nObject ZombieHorde deleted!" << std::endl;
    delete[] this->z;
    
}