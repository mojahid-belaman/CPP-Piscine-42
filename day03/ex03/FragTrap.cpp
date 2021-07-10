#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Object FragTrap Created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Object FragTrap Destroyed!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hitpoint = 100;
    this->_energie_point = 100;
    this->_attack_damage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives request!" << std::endl;
}