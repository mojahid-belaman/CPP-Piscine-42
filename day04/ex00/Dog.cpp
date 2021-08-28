#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Default the Dog is Called!" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &d)
{
    *this = d;
}

Dog &Dog::operator=(const Dog &d)
{
    if (this != &d)
        this->_type = d._type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog makeSound Called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor the Dog is Called!" << std::endl;
}