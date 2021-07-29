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

Dog::Dog(const Dog &new_dog)
{
    std::cout << "Constructor Copy the Dog is Called!" << std::endl;
    *this = new_dog;
}

Dog &Dog::operator= (const Dog &new_dog)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->b = new Brain;
    *b = *(new_dog.b);
    return (*this);
}

void    Dog::print_add_brain(const Dog &d)
{
    std::cout << d.b << std::endl;
}

Dog::~Dog()
{
    delete b;
    std::cout << "destructor the Dog is Called!" << std::endl;
}