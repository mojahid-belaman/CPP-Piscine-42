#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
     FragTrap();
     FragTrap(std::string);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif