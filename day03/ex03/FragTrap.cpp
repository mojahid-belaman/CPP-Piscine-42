#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Object FragTrap Created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Constractor FragTrap Default is Called!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Constructor Parametrise The FragTrap is Called!" << std::endl;
    this->_name = name;
    this->_hitpoint = 100;
    this->_energie_point = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(int, int)
{
    this->_hitpoint = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &new_ft)
{
    std::cout << "Constructor copy the FragTrap is Called!" << std::endl;
    *this = new_ft;
    return ;
}

FragTrap &FragTrap::operator= (const FragTrap &new_ft)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->_name = new_ft._name;
    this->_hitpoint = new_ft._hitpoint;
    this->_energie_point = new_ft._energie_point;
    this->_attack_damage = new_ft._attack_damage;
    
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives request!" << std::endl;
}