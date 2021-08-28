#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor Default the WrongAnimal is Called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
    *this = wa;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa)
{
    if (this != &wa)
        this->_type = wa._type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
        std::cout << "WrongAnimal makeSound Called!" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor the WrongAnimal is Called!" << std::endl;
}