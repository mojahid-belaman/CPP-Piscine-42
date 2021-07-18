#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(int);
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(const ScavTrap &);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};

#endif