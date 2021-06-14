#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string type;
    std::string name;
public:
    Zombie(std::string, std::string);
    ~Zombie();
    void    announce();
};

#endif