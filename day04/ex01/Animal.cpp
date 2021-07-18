#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Default the Animal is Called!" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Animal makeSound Called!" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->_type);
}

Animal::~Animal()
{
    std::cout << "destructor the Animal is Called!" << std::endl;
}