#include "Fixed.hpp"

Fixed::Fixed(): _fixPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixPointValue = f.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &fxd)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixPointValue = fxd._nbFractBit;
    *this = fxd;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixPointValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}