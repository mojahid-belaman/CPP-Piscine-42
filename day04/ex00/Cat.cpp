#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Default the Cat is Called!" << std::endl;
    this->_type = "Cat";
}

void    Cat::makeSound() const
{
    std::cout << "Cat makeSound Called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor the Cat is Called!" << std::endl;
}