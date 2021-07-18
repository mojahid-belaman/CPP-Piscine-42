#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Default the Dog is Called!" << std::endl;
    this->_type = "Dog";
}

void    Dog::makeSound() const
{
    std::cout << "Dog makeSound Called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor the Dog is Called!" << std::endl;
}