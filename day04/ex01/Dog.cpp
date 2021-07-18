#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Default the Dog is Called!" << std::endl;
    this->_type = "Dog";
    b = new Brain();
}

void    Dog::makeSound() const
{
    std::cout << "Dog makeSound Called!" << std::endl;
}

Dog::~Dog()
{
    delete b;
    std::cout << "destructor the Dog is Called!" << std::endl;
}