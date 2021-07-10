#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitpoint;
    int _energie_point;
    int _attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(const ClapTrap &);
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif