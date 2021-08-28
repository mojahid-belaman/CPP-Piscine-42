#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Default the Cat is Called!" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &c)
{
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    if (this != &c)
        this->_type = c._type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat makeSound Called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor the Cat is Called!" << std::endl;
}