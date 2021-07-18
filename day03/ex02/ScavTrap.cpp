#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Constractor ScavTrap Default is Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Constructor Parametrise The ScavTrap is Called!" << std::endl;
    this->_name = name;
    this->_hitpoint = 100;
    this->_energie_point = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &new_st)
{
    std::cout << "Constructor copy the ScavTrap is Called!" << std::endl;
    *this = new_st;
    return ;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &new_st)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->_name = new_st._name;
    this->_hitpoint = new_st._hitpoint;
    this->_energie_point = new_st._energie_point;
    this->_attack_damage = new_st._attack_damage;
    
    return *this;
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