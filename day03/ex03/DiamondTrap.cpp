#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Object DiamondTrap is Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(_hitpoint, _attack_damage), ScavTrap(_energie_point)
{
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    ScavTrap::attack("Yassine");
}

DiamondTrap::DiamondTrap(const DiamondTrap &new_dt)
{
    std::cout << "Constructor Copy the ClapTrap is Called!" << std::endl;
    *this = new_dt;
    return ;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &new_dt)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->_name = new_dt._name;
    this->_hitpoint = new_dt._hitpoint;
    this->_energie_point = new_dt._energie_point;
    this->_attack_damage = new_dt._attack_damage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Object DiamondTrap is Destroyed!" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Name DiamonTrap is " << _name << " and Name the ClapTrap is " << ClapTrap::_name << std::endl;
}