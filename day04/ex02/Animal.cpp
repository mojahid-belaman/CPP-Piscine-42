#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Default the Animal is Called!" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->_type);
}

Animal::Animal(const Animal &new_animal)
{
    std::cout << "Constructor Copy the Animal is Called!" << std::endl;
    *this = new_animal;
}

Animal &Animal::operator=(const Animal &new_animal)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->_type = new_animal._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "destructor the Animal is Called!" << std::endl;
}