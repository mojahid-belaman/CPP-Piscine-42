#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Default the Animal is Called!" << std::endl;
}

Animal::Animal(const Animal &a)
{
    *this = a;
}

Animal &Animal::operator=(const Animal &a)
{
    if (this != &a)
        this->_type = a._type;
    return (*this);
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