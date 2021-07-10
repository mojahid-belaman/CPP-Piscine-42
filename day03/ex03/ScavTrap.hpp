#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};

#endif