#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
   Zombie z("Zombie1");
   z.announce();

   Zombie *z2;
   z2 = zombieHorde(3, "Zombie2");
   delete [] z2;
}
