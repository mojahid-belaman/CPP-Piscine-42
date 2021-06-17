#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde *zh = new ZombieHorde(3);
    zh->announce();
    delete zh;
}
