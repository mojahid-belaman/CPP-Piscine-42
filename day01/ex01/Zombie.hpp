#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void    setZombie(std::string);
    Zombie* zombieHorde(int N, std::string name);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif