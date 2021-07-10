#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Object DiamondTrap is Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name+ "_Clap")
{
    this->_name = name;
    this->_hitpoint = FragTrap::_hitpoint;
    this->_energie_point = ScavTrap::_energie_point;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << this->_name << " " << this->ClapTrap::_name << " " << ScavTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Object DiamondTrap is Destroyed!" << std::endl;
}