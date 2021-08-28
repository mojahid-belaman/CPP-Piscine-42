#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Constructor Default the WrongCat is Called!" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wc)
{
    *this = wc;
}

WrongCat &WrongCat::operator=(const WrongCat &wc)
{
    if (this != &wc)
        this->_type = wc._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound Called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor the WrongCat is Called!" << std::endl;
}