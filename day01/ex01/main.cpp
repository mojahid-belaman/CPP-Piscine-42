#include "Zombie.hpp"

int main()
{
   int N = 3;
   
   Zombie z("Zombie1");
   z.announce();
   Zombie *z2;
   z2 = zombieHorde(N, "Zombie2");
   for (int i = 0; i < N; i++)
      z2[i].announce();
   delete [] z2;
}
