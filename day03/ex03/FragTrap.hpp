#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
public:
     FragTrap();
     FragTrap(std::string);
     FragTrap(int, int);
     FragTrap(const FragTrap &);
     FragTrap &operator=(const FragTrap &);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif