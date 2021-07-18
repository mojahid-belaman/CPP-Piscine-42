#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Constractor ScavTrap Default is Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Constructor Parametrise The ScavTrap is Called!" << std::endl;
    this->_name = name;
    this->_hitpoint = 300;
    this->_energie_point = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(int)
{
    this->_energie_point = 50;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Object ScavTrap is Destroyed!" << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap: " << " attacks " << target << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}