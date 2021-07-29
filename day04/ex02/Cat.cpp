#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Default the Cat is Called!" << std::endl;
    this->_type = "Cat";
    b = new Brain();
}

void    Cat::makeSound() const
{
    std::cout << "Cat makeSound Called!" << std::endl;
}

Cat::Cat(const Cat &new_cat)
{
    std::cout << "Constructor Copy the Cat is Called!" << std::endl;
    *this = new_cat;
}

Cat &Cat::operator=(const Cat &new_cat)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    this->b = new Brain;
    *b = *(new_cat.b);
    return (*this);
}

void    Cat::print_add_brain(const Cat &c)
{
    std::cout << c.b << std::endl;
}

Cat::~Cat()
{
    delete b;
    std::cout << "destructor the Cat is Called!" << std::endl;
}