#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constractor ClapTrap Default is Called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Parametrise The ClapTrap is Called!" << std::endl;
    _name = name;
    _hitpoint = 10;
    _energie_point = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &new_ct)
{
    std::cout << "Copy Constrctor the ClapTrap is Called!" << std::endl;
    *this = new_ct;
    return ;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &new_ct)
{
    std::cout << "Assignement Operator is Called!" << std::endl;
    this->_name = new_ct._name;
    this->_hitpoint = new_ct._hitpoint;
    this->_energie_point = new_ct._energie_point;
    this->_attack_damage = new_ct._attack_damage;
    
    return *this;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target <<
                ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "take damage " << amount << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Be Repaired " << amount << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Object ClapTrap is Destroyed!" << std::endl;
}